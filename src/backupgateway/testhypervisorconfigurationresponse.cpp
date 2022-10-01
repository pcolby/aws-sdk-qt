// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testhypervisorconfigurationresponse.h"
#include "testhypervisorconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::TestHypervisorConfigurationResponse
 * \brief The TestHypervisorConfigurationResponse class provides an interace for BackupGateway TestHypervisorConfiguration responses.
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
 * \sa BackupGatewayClient::testHypervisorConfiguration
 */

/*!
 * Constructs a TestHypervisorConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
TestHypervisorConfigurationResponse::TestHypervisorConfigurationResponse(
        const TestHypervisorConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new TestHypervisorConfigurationResponsePrivate(this), parent)
{
    setRequest(new TestHypervisorConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestHypervisorConfigurationRequest * TestHypervisorConfigurationResponse::request() const
{
    Q_D(const TestHypervisorConfigurationResponse);
    return static_cast<const TestHypervisorConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway TestHypervisorConfiguration \a response.
 */
void TestHypervisorConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestHypervisorConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::TestHypervisorConfigurationResponsePrivate
 * \brief The TestHypervisorConfigurationResponsePrivate class provides private implementation for TestHypervisorConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a TestHypervisorConfigurationResponsePrivate object with public implementation \a q.
 */
TestHypervisorConfigurationResponsePrivate::TestHypervisorConfigurationResponsePrivate(
    TestHypervisorConfigurationResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway TestHypervisorConfiguration response element from \a xml.
 */
void TestHypervisorConfigurationResponsePrivate::parseTestHypervisorConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestHypervisorConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
