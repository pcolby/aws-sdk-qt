// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionloaresponse.h"
#include "describeconnectionloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeConnectionLoaResponse
 * \brief The DescribeConnectionLoaResponse class provides an interace for DirectConnect DescribeConnectionLoa responses.
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
 * \sa DirectConnectClient::describeConnectionLoa
 */

/*!
 * Constructs a DescribeConnectionLoaResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectionLoaResponse::DescribeConnectionLoaResponse(
        const DescribeConnectionLoaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeConnectionLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionLoaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectionLoaRequest * DescribeConnectionLoaResponse::request() const
{
    Q_D(const DescribeConnectionLoaResponse);
    return static_cast<const DescribeConnectionLoaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeConnectionLoa \a response.
 */
void DescribeConnectionLoaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectionLoaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeConnectionLoaResponsePrivate
 * \brief The DescribeConnectionLoaResponsePrivate class provides private implementation for DescribeConnectionLoaResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeConnectionLoaResponsePrivate object with public implementation \a q.
 */
DescribeConnectionLoaResponsePrivate::DescribeConnectionLoaResponsePrivate(
    DescribeConnectionLoaResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeConnectionLoa response element from \a xml.
 */
void DescribeConnectionLoaResponsePrivate::parseDescribeConnectionLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionLoaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
