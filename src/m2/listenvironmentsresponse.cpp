// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listenvironmentsresponse.h"
#include "listenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListEnvironmentsResponse
 * \brief The ListEnvironmentsResponse class provides an interace for M2 ListEnvironments responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listEnvironments
 */

/*!
 * Constructs a ListEnvironmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEnvironmentsResponse::ListEnvironmentsResponse(
        const ListEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ListEnvironmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEnvironmentsRequest * ListEnvironmentsResponse::request() const
{
    Q_D(const ListEnvironmentsResponse);
    return static_cast<const ListEnvironmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListEnvironments \a response.
 */
void ListEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListEnvironmentsResponsePrivate
 * \brief The ListEnvironmentsResponsePrivate class provides private implementation for ListEnvironmentsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListEnvironmentsResponsePrivate object with public implementation \a q.
 */
ListEnvironmentsResponsePrivate::ListEnvironmentsResponsePrivate(
    ListEnvironmentsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListEnvironments response element from \a xml.
 */
void ListEnvironmentsResponsePrivate::parseListEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEnvironmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
