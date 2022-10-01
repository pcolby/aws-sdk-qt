// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewayinformationresponse.h"
#include "updategatewayinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::UpdateGatewayInformationResponse
 * \brief The UpdateGatewayInformationResponse class provides an interace for BackupGateway UpdateGatewayInformation responses.
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
 * \sa BackupGatewayClient::updateGatewayInformation
 */

/*!
 * Constructs a UpdateGatewayInformationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayInformationResponse::UpdateGatewayInformationResponse(
        const UpdateGatewayInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new UpdateGatewayInformationResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayInformationRequest * UpdateGatewayInformationResponse::request() const
{
    Q_D(const UpdateGatewayInformationResponse);
    return static_cast<const UpdateGatewayInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway UpdateGatewayInformation \a response.
 */
void UpdateGatewayInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::UpdateGatewayInformationResponsePrivate
 * \brief The UpdateGatewayInformationResponsePrivate class provides private implementation for UpdateGatewayInformationResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a UpdateGatewayInformationResponsePrivate object with public implementation \a q.
 */
UpdateGatewayInformationResponsePrivate::UpdateGatewayInformationResponsePrivate(
    UpdateGatewayInformationResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway UpdateGatewayInformation response element from \a xml.
 */
void UpdateGatewayInformationResponsePrivate::parseUpdateGatewayInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
