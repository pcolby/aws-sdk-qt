// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountsettingsresponse.h"
#include "updateaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAccountSettingsResponse
 * \brief The UpdateAccountSettingsResponse class provides an interace for QuickSight UpdateAccountSettings responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAccountSettings
 */

/*!
 * Constructs a UpdateAccountSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccountSettingsResponse::UpdateAccountSettingsResponse(
        const UpdateAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccountSettingsRequest * UpdateAccountSettingsResponse::request() const
{
    Q_D(const UpdateAccountSettingsResponse);
    return static_cast<const UpdateAccountSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateAccountSettings \a response.
 */
void UpdateAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateAccountSettingsResponsePrivate
 * \brief The UpdateAccountSettingsResponsePrivate class provides private implementation for UpdateAccountSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAccountSettingsResponsePrivate object with public implementation \a q.
 */
UpdateAccountSettingsResponsePrivate::UpdateAccountSettingsResponsePrivate(
    UpdateAccountSettingsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateAccountSettings response element from \a xml.
 */
void UpdateAccountSettingsResponsePrivate::parseUpdateAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
