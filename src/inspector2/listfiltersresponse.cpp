// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfiltersresponse.h"
#include "listfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListFiltersResponse
 * \brief The ListFiltersResponse class provides an interace for Inspector2 ListFilters responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listFilters
 */

/*!
 * Constructs a ListFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFiltersResponse::ListFiltersResponse(
        const ListFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListFiltersResponsePrivate(this), parent)
{
    setRequest(new ListFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFiltersRequest * ListFiltersResponse::request() const
{
    Q_D(const ListFiltersResponse);
    return static_cast<const ListFiltersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListFilters \a response.
 */
void ListFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListFiltersResponsePrivate
 * \brief The ListFiltersResponsePrivate class provides private implementation for ListFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListFiltersResponsePrivate object with public implementation \a q.
 */
ListFiltersResponsePrivate::ListFiltersResponsePrivate(
    ListFiltersResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListFilters response element from \a xml.
 */
void ListFiltersResponsePrivate::parseListFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
