// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualmachinesresponse.h"
#include "listvirtualmachinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ListVirtualMachinesResponse
 * \brief The ListVirtualMachinesResponse class provides an interace for BackupGateway ListVirtualMachines responses.
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
 * \sa BackupGatewayClient::listVirtualMachines
 */

/*!
 * Constructs a ListVirtualMachinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVirtualMachinesResponse::ListVirtualMachinesResponse(
        const ListVirtualMachinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new ListVirtualMachinesResponsePrivate(this), parent)
{
    setRequest(new ListVirtualMachinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVirtualMachinesRequest * ListVirtualMachinesResponse::request() const
{
    Q_D(const ListVirtualMachinesResponse);
    return static_cast<const ListVirtualMachinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway ListVirtualMachines \a response.
 */
void ListVirtualMachinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVirtualMachinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::ListVirtualMachinesResponsePrivate
 * \brief The ListVirtualMachinesResponsePrivate class provides private implementation for ListVirtualMachinesResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ListVirtualMachinesResponsePrivate object with public implementation \a q.
 */
ListVirtualMachinesResponsePrivate::ListVirtualMachinesResponsePrivate(
    ListVirtualMachinesResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway ListVirtualMachines response element from \a xml.
 */
void ListVirtualMachinesResponsePrivate::parseListVirtualMachinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVirtualMachinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
