// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importhypervisorconfigurationresponse.h"
#include "importhypervisorconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ImportHypervisorConfigurationResponse
 * \brief The ImportHypervisorConfigurationResponse class provides an interace for BackupGateway ImportHypervisorConfiguration responses.
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
 * \sa BackupGatewayClient::importHypervisorConfiguration
 */

/*!
 * Constructs a ImportHypervisorConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ImportHypervisorConfigurationResponse::ImportHypervisorConfigurationResponse(
        const ImportHypervisorConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new ImportHypervisorConfigurationResponsePrivate(this), parent)
{
    setRequest(new ImportHypervisorConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportHypervisorConfigurationRequest * ImportHypervisorConfigurationResponse::request() const
{
    Q_D(const ImportHypervisorConfigurationResponse);
    return static_cast<const ImportHypervisorConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway ImportHypervisorConfiguration \a response.
 */
void ImportHypervisorConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportHypervisorConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::ImportHypervisorConfigurationResponsePrivate
 * \brief The ImportHypervisorConfigurationResponsePrivate class provides private implementation for ImportHypervisorConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ImportHypervisorConfigurationResponsePrivate object with public implementation \a q.
 */
ImportHypervisorConfigurationResponsePrivate::ImportHypervisorConfigurationResponsePrivate(
    ImportHypervisorConfigurationResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway ImportHypervisorConfiguration response element from \a xml.
 */
void ImportHypervisorConfigurationResponsePrivate::parseImportHypervisorConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportHypervisorConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
