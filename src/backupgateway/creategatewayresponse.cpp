// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategatewayresponse.h"
#include "creategatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::CreateGatewayResponse
 * \brief The CreateGatewayResponse class provides an interace for BackupGateway CreateGateway responses.
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
 * \sa BackupGatewayClient::createGateway
 */

/*!
 * Constructs a CreateGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGatewayResponse::CreateGatewayResponse(
        const CreateGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new CreateGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGatewayRequest * CreateGatewayResponse::request() const
{
    Q_D(const CreateGatewayResponse);
    return static_cast<const CreateGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway CreateGateway \a response.
 */
void CreateGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::CreateGatewayResponsePrivate
 * \brief The CreateGatewayResponsePrivate class provides private implementation for CreateGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a CreateGatewayResponsePrivate object with public implementation \a q.
 */
CreateGatewayResponsePrivate::CreateGatewayResponsePrivate(
    CreateGatewayResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway CreateGateway response element from \a xml.
 */
void CreateGatewayResponsePrivate::parseCreateGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
