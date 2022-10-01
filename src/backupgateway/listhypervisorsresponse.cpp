// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhypervisorsresponse.h"
#include "listhypervisorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ListHypervisorsResponse
 * \brief The ListHypervisorsResponse class provides an interace for BackupGateway ListHypervisors responses.
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
 * \sa BackupGatewayClient::listHypervisors
 */

/*!
 * Constructs a ListHypervisorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHypervisorsResponse::ListHypervisorsResponse(
        const ListHypervisorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupGatewayResponse(new ListHypervisorsResponsePrivate(this), parent)
{
    setRequest(new ListHypervisorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHypervisorsRequest * ListHypervisorsResponse::request() const
{
    Q_D(const ListHypervisorsResponse);
    return static_cast<const ListHypervisorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupGateway ListHypervisors \a response.
 */
void ListHypervisorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHypervisorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupGateway::ListHypervisorsResponsePrivate
 * \brief The ListHypervisorsResponsePrivate class provides private implementation for ListHypervisorsResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ListHypervisorsResponsePrivate object with public implementation \a q.
 */
ListHypervisorsResponsePrivate::ListHypervisorsResponsePrivate(
    ListHypervisorsResponse * const q) : BackupGatewayResponsePrivate(q)
{

}

/*!
 * Parses a BackupGateway ListHypervisors response element from \a xml.
 */
void ListHypervisorsResponsePrivate::parseListHypervisorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHypervisorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupGateway
} // namespace QtAws
