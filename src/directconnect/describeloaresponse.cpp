// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloaresponse.h"
#include "describeloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeLoaResponse
 * \brief The DescribeLoaResponse class provides an interace for DirectConnect DescribeLoa responses.
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
 * \sa DirectConnectClient::describeLoa
 */

/*!
 * Constructs a DescribeLoaResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoaResponse::DescribeLoaResponse(
        const DescribeLoaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeLoaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoaRequest * DescribeLoaResponse::request() const
{
    Q_D(const DescribeLoaResponse);
    return static_cast<const DescribeLoaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeLoa \a response.
 */
void DescribeLoaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeLoaResponsePrivate
 * \brief The DescribeLoaResponsePrivate class provides private implementation for DescribeLoaResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeLoaResponsePrivate object with public implementation \a q.
 */
DescribeLoaResponsePrivate::DescribeLoaResponsePrivate(
    DescribeLoaResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeLoa response element from \a xml.
 */
void DescribeLoaResponsePrivate::parseDescribeLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
