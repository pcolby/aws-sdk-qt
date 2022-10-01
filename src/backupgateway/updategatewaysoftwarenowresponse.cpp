// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewaysoftwarenowresponse.h"
#include "updategatewaysoftwarenowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::UpdateGatewaySoftwareNowResponse
 * \brief The UpdateGatewaySoftwareNowResponse class provides an interace for BackupGateway UpdateGatewaySoftwareNow responses.
 *
 * \inmodule QtAwsBackupGateway
 *
 *  <fullname>Backup gateway</fullname>
 * 
 *  Backup gateway connects Backup to your hypervisor, so you can create, store, and restore backups of your virtual
 *  machines (VMs) anywhere, whether on-premises or in the VMware Cloud (VMC) on Amazon Web
 * 
 *  Services>
 * 
 *  Add on-premises resources by connecting to a hypervisor through a gateway. Backup will automatically discover the
 *  resources in your
 * 
 *  hypervisor>
 * 
 *  Use Backup to assign virtual or on-premises resources to a backup plan, or run on-demand backups. Once you have backed
 *  up your resources, you can view them and restore them like any resource supported by
 * 
 *  Backup>
 * 
 *  To download the Amazon Web Services software to get started, navigate to the Backup console, choose <b>Gateways</b>,
 *  then choose <b>Create
 *
 * \sa BackupGatewayClient::updateGatewaySoftwareNow
 */

/*!
 * Constructs a UpdateGatewaySoftwareNowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewaySoftwareNowResponse::UpdateGatewaySoftwareNowResponse(
        const UpdateGatewaySoftwareNowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new UpdateGatewaySoftwareNowResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewaySoftwareNowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewaySoftwareNowRequest * UpdateGatewaySoftwareNowResponse::request() const
{
    Q_D(const UpdateGatewaySoftwareNowResponse);
    return static_cast<const UpdateGatewaySoftwareNowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway UpdateGatewaySoftwareNow \a response.
 */
void UpdateGatewaySoftwareNowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewaySoftwareNowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::UpdateGatewaySoftwareNowResponsePrivate
 * \brief The UpdateGatewaySoftwareNowResponsePrivate class provides private implementation for UpdateGatewaySoftwareNowResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a UpdateGatewaySoftwareNowResponsePrivate object with public implementation \a q.
 */
UpdateGatewaySoftwareNowResponsePrivate::UpdateGatewaySoftwareNowResponsePrivate(
    UpdateGatewaySoftwareNowResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway UpdateGatewaySoftwareNow response element from \a xml.
 */
void UpdateGatewaySoftwareNowResponsePrivate::parseUpdateGatewaySoftwareNowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewaySoftwareNowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
