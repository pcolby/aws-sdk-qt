// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualinterfacetesthistoryresponse.h"
#include "listvirtualinterfacetesthistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ListVirtualInterfaceTestHistoryResponse
 * \brief The ListVirtualInterfaceTestHistoryResponse class provides an interace for DirectConnect ListVirtualInterfaceTestHistory responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::listVirtualInterfaceTestHistory
 */

/*!
 * Constructs a ListVirtualInterfaceTestHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListVirtualInterfaceTestHistoryResponse::ListVirtualInterfaceTestHistoryResponse(
        const ListVirtualInterfaceTestHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ListVirtualInterfaceTestHistoryResponsePrivate(this), parent)
{
    setRequest(new ListVirtualInterfaceTestHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVirtualInterfaceTestHistoryRequest * ListVirtualInterfaceTestHistoryResponse::request() const
{
    Q_D(const ListVirtualInterfaceTestHistoryResponse);
    return static_cast<const ListVirtualInterfaceTestHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect ListVirtualInterfaceTestHistory \a response.
 */
void ListVirtualInterfaceTestHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVirtualInterfaceTestHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::ListVirtualInterfaceTestHistoryResponsePrivate
 * \brief The ListVirtualInterfaceTestHistoryResponsePrivate class provides private implementation for ListVirtualInterfaceTestHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ListVirtualInterfaceTestHistoryResponsePrivate object with public implementation \a q.
 */
ListVirtualInterfaceTestHistoryResponsePrivate::ListVirtualInterfaceTestHistoryResponsePrivate(
    ListVirtualInterfaceTestHistoryResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect ListVirtualInterfaceTestHistory response element from \a xml.
 */
void ListVirtualInterfaceTestHistoryResponsePrivate::parseListVirtualInterfaceTestHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVirtualInterfaceTestHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
