// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelagsresponse.h"
#include "describelagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeLagsResponse
 * \brief The DescribeLagsResponse class provides an interace for DirectConnect DescribeLags responses.
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
 * \sa DirectConnectClient::describeLags
 */

/*!
 * Constructs a DescribeLagsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLagsResponse::DescribeLagsResponse(
        const DescribeLagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeLagsResponsePrivate(this), parent)
{
    setRequest(new DescribeLagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLagsRequest * DescribeLagsResponse::request() const
{
    Q_D(const DescribeLagsResponse);
    return static_cast<const DescribeLagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeLags \a response.
 */
void DescribeLagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeLagsResponsePrivate
 * \brief The DescribeLagsResponsePrivate class provides private implementation for DescribeLagsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeLagsResponsePrivate object with public implementation \a q.
 */
DescribeLagsResponsePrivate::DescribeLagsResponsePrivate(
    DescribeLagsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeLags response element from \a xml.
 */
void DescribeLagsResponsePrivate::parseDescribeLagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
