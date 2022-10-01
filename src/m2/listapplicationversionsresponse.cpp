// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationversionsresponse.h"
#include "listapplicationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListApplicationVersionsResponse
 * \brief The ListApplicationVersionsResponse class provides an interace for M2 ListApplicationVersions responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listApplicationVersions
 */

/*!
 * Constructs a ListApplicationVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationVersionsResponse::ListApplicationVersionsResponse(
        const ListApplicationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListApplicationVersionsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationVersionsRequest * ListApplicationVersionsResponse::request() const
{
    Q_D(const ListApplicationVersionsResponse);
    return static_cast<const ListApplicationVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListApplicationVersions \a response.
 */
void ListApplicationVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListApplicationVersionsResponsePrivate
 * \brief The ListApplicationVersionsResponsePrivate class provides private implementation for ListApplicationVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListApplicationVersionsResponsePrivate object with public implementation \a q.
 */
ListApplicationVersionsResponsePrivate::ListApplicationVersionsResponsePrivate(
    ListApplicationVersionsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListApplicationVersions response element from \a xml.
 */
void ListApplicationVersionsResponsePrivate::parseListApplicationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
