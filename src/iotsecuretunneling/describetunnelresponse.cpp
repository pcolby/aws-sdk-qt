// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetunnelresponse.h"
#include "describetunnelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::DescribeTunnelResponse
 * \brief The DescribeTunnelResponse class provides an interace for IoTSecureTunneling DescribeTunnel responses.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>IoT Secure Tunneling</fullname>
 * 
 *  IoT Secure Tunneling creates remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT Secure
 *
 * \sa IoTSecureTunnelingClient::describeTunnel
 */

/*!
 * Constructs a DescribeTunnelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTunnelResponse::DescribeTunnelResponse(
        const DescribeTunnelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new DescribeTunnelResponsePrivate(this), parent)
{
    setRequest(new DescribeTunnelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTunnelRequest * DescribeTunnelResponse::request() const
{
    Q_D(const DescribeTunnelResponse);
    return static_cast<const DescribeTunnelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling DescribeTunnel \a response.
 */
void DescribeTunnelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTunnelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::DescribeTunnelResponsePrivate
 * \brief The DescribeTunnelResponsePrivate class provides private implementation for DescribeTunnelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a DescribeTunnelResponsePrivate object with public implementation \a q.
 */
DescribeTunnelResponsePrivate::DescribeTunnelResponsePrivate(
    DescribeTunnelResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling DescribeTunnel response element from \a xml.
 */
void DescribeTunnelResponsePrivate::parseDescribeTunnelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTunnelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
