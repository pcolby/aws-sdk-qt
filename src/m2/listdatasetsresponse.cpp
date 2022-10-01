// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListDataSetsResponse
 * \brief The ListDataSetsResponse class provides an interace for M2 ListDataSets responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listDataSets
 */

/*!
 * Constructs a ListDataSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSetsResponse::ListDataSetsResponse(
        const ListDataSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListDataSetsResponsePrivate(this), parent)
{
    setRequest(new ListDataSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSetsRequest * ListDataSetsResponse::request() const
{
    Q_D(const ListDataSetsResponse);
    return static_cast<const ListDataSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListDataSets \a response.
 */
void ListDataSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListDataSetsResponsePrivate
 * \brief The ListDataSetsResponsePrivate class provides private implementation for ListDataSetsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListDataSetsResponsePrivate object with public implementation \a q.
 */
ListDataSetsResponsePrivate::ListDataSetsResponsePrivate(
    ListDataSetsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListDataSets response element from \a xml.
 */
void ListDataSetsResponsePrivate::parseListDataSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
