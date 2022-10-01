// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewayresponse.h"
#include "getgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::GetGatewayResponse
 * \brief The GetGatewayResponse class provides an interace for BackupGateway GetGateway responses.
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
 * \sa BackupGatewayClient::getGateway
 */

/*!
 * Constructs a GetGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
GetGatewayResponse::GetGatewayResponse(
        const GetGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new GetGatewayResponsePrivate(this), parent)
{
    setRequest(new GetGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGatewayRequest * GetGatewayResponse::request() const
{
    Q_D(const GetGatewayResponse);
    return static_cast<const GetGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway GetGateway \a response.
 */
void GetGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::GetGatewayResponsePrivate
 * \brief The GetGatewayResponsePrivate class provides private implementation for GetGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a GetGatewayResponsePrivate object with public implementation \a q.
 */
GetGatewayResponsePrivate::GetGatewayResponsePrivate(
    GetGatewayResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway GetGateway response element from \a xml.
 */
void GetGatewayResponsePrivate::parseGetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
