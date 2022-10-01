// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvirtualmachineresponse.h"
#include "getvirtualmachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::GetVirtualMachineResponse
 * \brief The GetVirtualMachineResponse class provides an interace for BackupGateway GetVirtualMachine responses.
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
 * \sa BackupGatewayClient::getVirtualMachine
 */

/*!
 * Constructs a GetVirtualMachineResponse object for \a reply to \a request, with parent \a parent.
 */
GetVirtualMachineResponse::GetVirtualMachineResponse(
        const GetVirtualMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new GetVirtualMachineResponsePrivate(this), parent)
{
    setRequest(new GetVirtualMachineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVirtualMachineRequest * GetVirtualMachineResponse::request() const
{
    Q_D(const GetVirtualMachineResponse);
    return static_cast<const GetVirtualMachineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway GetVirtualMachine \a response.
 */
void GetVirtualMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVirtualMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::GetVirtualMachineResponsePrivate
 * \brief The GetVirtualMachineResponsePrivate class provides private implementation for GetVirtualMachineResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a GetVirtualMachineResponsePrivate object with public implementation \a q.
 */
GetVirtualMachineResponsePrivate::GetVirtualMachineResponsePrivate(
    GetVirtualMachineResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway GetVirtualMachine response element from \a xml.
 */
void GetVirtualMachineResponsePrivate::parseGetVirtualMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVirtualMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
