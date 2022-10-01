// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociategatewayfromserverresponse.h"
#include "disassociategatewayfromserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::DisassociateGatewayFromServerResponse
 * \brief The DisassociateGatewayFromServerResponse class provides an interace for BackupGateway DisassociateGatewayFromServer responses.
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
 * \sa BackupGatewayClient::disassociateGatewayFromServer
 */

/*!
 * Constructs a DisassociateGatewayFromServerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateGatewayFromServerResponse::DisassociateGatewayFromServerResponse(
        const DisassociateGatewayFromServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new DisassociateGatewayFromServerResponsePrivate(this), parent)
{
    setRequest(new DisassociateGatewayFromServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateGatewayFromServerRequest * DisassociateGatewayFromServerResponse::request() const
{
    Q_D(const DisassociateGatewayFromServerResponse);
    return static_cast<const DisassociateGatewayFromServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway DisassociateGatewayFromServer \a response.
 */
void DisassociateGatewayFromServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateGatewayFromServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::DisassociateGatewayFromServerResponsePrivate
 * \brief The DisassociateGatewayFromServerResponsePrivate class provides private implementation for DisassociateGatewayFromServerResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a DisassociateGatewayFromServerResponsePrivate object with public implementation \a q.
 */
DisassociateGatewayFromServerResponsePrivate::DisassociateGatewayFromServerResponsePrivate(
    DisassociateGatewayFromServerResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway DisassociateGatewayFromServer response element from \a xml.
 */
void DisassociateGatewayFromServerResponsePrivate::parseDisassociateGatewayFromServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateGatewayFromServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
