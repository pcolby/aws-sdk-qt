// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehypervisorresponse.h"
#include "deletehypervisorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::DeleteHypervisorResponse
 * \brief The DeleteHypervisorResponse class provides an interace for BackupGateway DeleteHypervisor responses.
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
 * \sa BackupGatewayClient::deleteHypervisor
 */

/*!
 * Constructs a DeleteHypervisorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHypervisorResponse::DeleteHypervisorResponse(
        const DeleteHypervisorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new DeleteHypervisorResponsePrivate(this), parent)
{
    setRequest(new DeleteHypervisorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHypervisorRequest * DeleteHypervisorResponse::request() const
{
    Q_D(const DeleteHypervisorResponse);
    return static_cast<const DeleteHypervisorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway DeleteHypervisor \a response.
 */
void DeleteHypervisorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHypervisorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::DeleteHypervisorResponsePrivate
 * \brief The DeleteHypervisorResponsePrivate class provides private implementation for DeleteHypervisorResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a DeleteHypervisorResponsePrivate object with public implementation \a q.
 */
DeleteHypervisorResponsePrivate::DeleteHypervisorResponsePrivate(
    DeleteHypervisorResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway DeleteHypervisor response element from \a xml.
 */
void DeleteHypervisorResponsePrivate::parseDeleteHypervisorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHypervisorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
