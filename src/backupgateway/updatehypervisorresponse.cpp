// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehypervisorresponse.h"
#include "updatehypervisorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::UpdateHypervisorResponse
 * \brief The UpdateHypervisorResponse class provides an interace for BackupGateway UpdateHypervisor responses.
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
 * \sa BackupGatewayClient::updateHypervisor
 */

/*!
 * Constructs a UpdateHypervisorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHypervisorResponse::UpdateHypervisorResponse(
        const UpdateHypervisorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new UpdateHypervisorResponsePrivate(this), parent)
{
    setRequest(new UpdateHypervisorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHypervisorRequest * UpdateHypervisorResponse::request() const
{
    Q_D(const UpdateHypervisorResponse);
    return static_cast<const UpdateHypervisorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway UpdateHypervisor \a response.
 */
void UpdateHypervisorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateHypervisorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::UpdateHypervisorResponsePrivate
 * \brief The UpdateHypervisorResponsePrivate class provides private implementation for UpdateHypervisorResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a UpdateHypervisorResponsePrivate object with public implementation \a q.
 */
UpdateHypervisorResponsePrivate::UpdateHypervisorResponsePrivate(
    UpdateHypervisorResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway UpdateHypervisor response element from \a xml.
 */
void UpdateHypervisorResponsePrivate::parseUpdateHypervisorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHypervisorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
