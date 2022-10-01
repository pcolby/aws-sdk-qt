// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewaysresponse.h"
#include "listgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ListGatewaysResponse
 * \brief The ListGatewaysResponse class provides an interace for BackupGateway ListGateways responses.
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
 * \sa BackupGatewayClient::listGateways
 */

/*!
 * Constructs a ListGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
ListGatewaysResponse::ListGatewaysResponse(
        const ListGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new ListGatewaysResponsePrivate(this), parent)
{
    setRequest(new ListGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGatewaysRequest * ListGatewaysResponse::request() const
{
    Q_D(const ListGatewaysResponse);
    return static_cast<const ListGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway ListGateways \a response.
 */
void ListGatewaysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::ListGatewaysResponsePrivate
 * \brief The ListGatewaysResponsePrivate class provides private implementation for ListGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ListGatewaysResponsePrivate object with public implementation \a q.
 */
ListGatewaysResponsePrivate::ListGatewaysResponsePrivate(
    ListGatewaysResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway ListGateways response element from \a xml.
 */
void ListGatewaysResponsePrivate::parseListGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGatewaysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
