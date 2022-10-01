// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoverageresponse.h"
#include "listcoverageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListCoverageResponse
 * \brief The ListCoverageResponse class provides an interace for Inspector2 ListCoverage responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listCoverage
 */

/*!
 * Constructs a ListCoverageResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoverageResponse::ListCoverageResponse(
        const ListCoverageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListCoverageResponsePrivate(this), parent)
{
    setRequest(new ListCoverageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoverageRequest * ListCoverageResponse::request() const
{
    Q_D(const ListCoverageResponse);
    return static_cast<const ListCoverageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListCoverage \a response.
 */
void ListCoverageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoverageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListCoverageResponsePrivate
 * \brief The ListCoverageResponsePrivate class provides private implementation for ListCoverageResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListCoverageResponsePrivate object with public implementation \a q.
 */
ListCoverageResponsePrivate::ListCoverageResponsePrivate(
    ListCoverageResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListCoverage response element from \a xml.
 */
void ListCoverageResponsePrivate::parseListCoverageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoverageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
