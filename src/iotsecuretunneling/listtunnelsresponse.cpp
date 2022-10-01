// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtunnelsresponse.h"
#include "listtunnelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsResponse
 * \brief The ListTunnelsResponse class provides an interace for IoTSecureTunneling ListTunnels responses.
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
 * \sa IoTSecureTunnelingClient::listTunnels
 */

/*!
 * Constructs a ListTunnelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTunnelsResponse::ListTunnelsResponse(
        const ListTunnelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new ListTunnelsResponsePrivate(this), parent)
{
    setRequest(new ListTunnelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTunnelsRequest * ListTunnelsResponse::request() const
{
    Q_D(const ListTunnelsResponse);
    return static_cast<const ListTunnelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling ListTunnels \a response.
 */
void ListTunnelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTunnelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsResponsePrivate
 * \brief The ListTunnelsResponsePrivate class provides private implementation for ListTunnelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a ListTunnelsResponsePrivate object with public implementation \a q.
 */
ListTunnelsResponsePrivate::ListTunnelsResponsePrivate(
    ListTunnelsResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling ListTunnels response element from \a xml.
 */
void ListTunnelsResponsePrivate::parseListTunnelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTunnelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws
