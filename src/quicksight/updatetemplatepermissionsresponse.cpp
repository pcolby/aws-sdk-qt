// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplatepermissionsresponse.h"
#include "updatetemplatepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplatePermissionsResponse
 * \brief The UpdateTemplatePermissionsResponse class provides an interace for QuickSight UpdateTemplatePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplatePermissions
 */

/*!
 * Constructs a UpdateTemplatePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTemplatePermissionsResponse::UpdateTemplatePermissionsResponse(
        const UpdateTemplatePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateTemplatePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateTemplatePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTemplatePermissionsRequest * UpdateTemplatePermissionsResponse::request() const
{
    Q_D(const UpdateTemplatePermissionsResponse);
    return static_cast<const UpdateTemplatePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateTemplatePermissions \a response.
 */
void UpdateTemplatePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTemplatePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateTemplatePermissionsResponsePrivate
 * \brief The UpdateTemplatePermissionsResponsePrivate class provides private implementation for UpdateTemplatePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplatePermissionsResponsePrivate object with public implementation \a q.
 */
UpdateTemplatePermissionsResponsePrivate::UpdateTemplatePermissionsResponsePrivate(
    UpdateTemplatePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateTemplatePermissions response element from \a xml.
 */
void UpdateTemplatePermissionsResponsePrivate::parseUpdateTemplatePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTemplatePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
