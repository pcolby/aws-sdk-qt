// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
    Q_D(const CreateDashboardResponse);
    return static_cast<const CreateDashboardRequest *>(d->request);
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
