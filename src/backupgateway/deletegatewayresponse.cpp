// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegatewayresponse.h"
#include "deletegatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::DeleteGatewayResponse
 * \brief The DeleteGatewayResponse class provides an interace for BackupGateway DeleteGateway responses.
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
 * \sa BackupGatewayClient::deleteGateway
 */

/*!
 * Constructs a DeleteGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGatewayResponse::DeleteGatewayResponse(
        const DeleteGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new DeleteGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGatewayRequest * DeleteGatewayResponse::request() const
{
    Q_D(const DeleteGatewayResponse);
    return static_cast<const DeleteGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway DeleteGateway \a response.
 */
void DeleteGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::DeleteGatewayResponsePrivate
 * \brief The DeleteGatewayResponsePrivate class provides private implementation for DeleteGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a DeleteGatewayResponsePrivate object with public implementation \a q.
 */
DeleteGatewayResponsePrivate::DeleteGatewayResponsePrivate(
    DeleteGatewayResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway DeleteGateway response element from \a xml.
 */
void DeleteGatewayResponsePrivate::parseDeleteGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
