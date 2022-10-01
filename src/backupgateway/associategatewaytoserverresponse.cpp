// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associategatewaytoserverresponse.h"
#include "associategatewaytoserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::AssociateGatewayToServerResponse
 * \brief The AssociateGatewayToServerResponse class provides an interace for BackupGateway AssociateGatewayToServer responses.
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
 * \sa BackupGatewayClient::associateGatewayToServer
 */

/*!
 * Constructs a AssociateGatewayToServerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateGatewayToServerResponse::AssociateGatewayToServerResponse(
        const AssociateGatewayToServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new AssociateGatewayToServerResponsePrivate(this), parent)
{
    setRequest(new AssociateGatewayToServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateGatewayToServerRequest * AssociateGatewayToServerResponse::request() const
{
    Q_D(const AssociateGatewayToServerResponse);
    return static_cast<const AssociateGatewayToServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway AssociateGatewayToServer \a response.
 */
void AssociateGatewayToServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateGatewayToServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::AssociateGatewayToServerResponsePrivate
 * \brief The AssociateGatewayToServerResponsePrivate class provides private implementation for AssociateGatewayToServerResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a AssociateGatewayToServerResponsePrivate object with public implementation \a q.
 */
AssociateGatewayToServerResponsePrivate::AssociateGatewayToServerResponsePrivate(
    AssociateGatewayToServerResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway AssociateGatewayToServer response element from \a xml.
 */
void AssociateGatewayToServerResponsePrivate::parseAssociateGatewayToServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateGatewayToServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
