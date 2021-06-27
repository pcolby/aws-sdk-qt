/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdashboardresponse.h"
#include "createdashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateDashboardResponse
 * \brief The CreateDashboardResponse class provides an interace for QuickSight CreateDashboard responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createDashboard
 */

/*!
 * Constructs a CreateDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDashboardResponse::CreateDashboardResponse(
        const CreateDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateDashboardResponsePrivate(this), parent)
{
    setRequest(new CreateDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDashboardRequest * CreateDashboardResponse::request() const
{
    return static_cast<const CreateDashboardRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateDashboard \a response.
 */
void CreateDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateDashboardResponsePrivate
 * \brief The CreateDashboardResponsePrivate class provides private implementation for CreateDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateDashboardResponsePrivate object with public implementation \a q.
 */
CreateDashboardResponsePrivate::CreateDashboardResponsePrivate(
    CreateDashboardResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateDashboard response element from \a xml.
 */
void CreateDashboardResponsePrivate::parseCreateDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
