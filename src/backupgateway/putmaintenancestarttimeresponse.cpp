// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmaintenancestarttimeresponse.h"
#include "putmaintenancestarttimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::PutMaintenanceStartTimeResponse
 * \brief The PutMaintenanceStartTimeResponse class provides an interace for BackupGateway PutMaintenanceStartTime responses.
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
 * \sa BackupGatewayClient::putMaintenanceStartTime
 */

/*!
 * Constructs a PutMaintenanceStartTimeResponse object for \a reply to \a request, with parent \a parent.
 */
PutMaintenanceStartTimeResponse::PutMaintenanceStartTimeResponse(
        const PutMaintenanceStartTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new PutMaintenanceStartTimeResponsePrivate(this), parent)
{
    setRequest(new PutMaintenanceStartTimeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMaintenanceStartTimeRequest * PutMaintenanceStartTimeResponse::request() const
{
    Q_D(const PutMaintenanceStartTimeResponse);
    return static_cast<const PutMaintenanceStartTimeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway PutMaintenanceStartTime \a response.
 */
void PutMaintenanceStartTimeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMaintenanceStartTimeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::PutMaintenanceStartTimeResponsePrivate
 * \brief The PutMaintenanceStartTimeResponsePrivate class provides private implementation for PutMaintenanceStartTimeResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a PutMaintenanceStartTimeResponsePrivate object with public implementation \a q.
 */
PutMaintenanceStartTimeResponsePrivate::PutMaintenanceStartTimeResponsePrivate(
    PutMaintenanceStartTimeResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway PutMaintenanceStartTime response element from \a xml.
 */
void PutMaintenanceStartTimeResponsePrivate::parsePutMaintenanceStartTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMaintenanceStartTimeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
