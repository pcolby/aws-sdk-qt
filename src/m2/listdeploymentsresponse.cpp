// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeploymentsresponse.h"
#include "listdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListDeploymentsResponse
 * \brief The ListDeploymentsResponse class provides an interace for M2 ListDeployments responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listDeployments
 */

/*!
 * Constructs a ListDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeploymentsResponse::ListDeploymentsResponse(
        const ListDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeploymentsRequest * ListDeploymentsResponse::request() const
{
    Q_D(const ListDeploymentsResponse);
    return static_cast<const ListDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListDeployments \a response.
 */
void ListDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListDeploymentsResponsePrivate
 * \brief The ListDeploymentsResponsePrivate class provides private implementation for ListDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListDeploymentsResponsePrivate object with public implementation \a q.
 */
ListDeploymentsResponsePrivate::ListDeploymentsResponsePrivate(
    ListDeploymentsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListDeployments response element from \a xml.
 */
void ListDeploymentsResponsePrivate::parseListDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
