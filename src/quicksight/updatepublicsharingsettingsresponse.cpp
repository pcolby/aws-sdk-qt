// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepublicsharingsettingsresponse.h"
#include "updatepublicsharingsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdatePublicSharingSettingsResponse
 * \brief The UpdatePublicSharingSettingsResponse class provides an interace for QuickSight UpdatePublicSharingSettings responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updatePublicSharingSettings
 */

/*!
 * Constructs a UpdatePublicSharingSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePublicSharingSettingsResponse::UpdatePublicSharingSettingsResponse(
        const UpdatePublicSharingSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdatePublicSharingSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdatePublicSharingSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePublicSharingSettingsRequest * UpdatePublicSharingSettingsResponse::request() const
{
    Q_D(const UpdatePublicSharingSettingsResponse);
    return static_cast<const UpdatePublicSharingSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdatePublicSharingSettings \a response.
 */
void UpdatePublicSharingSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePublicSharingSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdatePublicSharingSettingsResponsePrivate
 * \brief The UpdatePublicSharingSettingsResponsePrivate class provides private implementation for UpdatePublicSharingSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdatePublicSharingSettingsResponsePrivate object with public implementation \a q.
 */
UpdatePublicSharingSettingsResponsePrivate::UpdatePublicSharingSettingsResponsePrivate(
    UpdatePublicSharingSettingsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdatePublicSharingSettings response element from \a xml.
 */
void UpdatePublicSharingSettingsResponsePrivate::parseUpdatePublicSharingSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePublicSharingSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
