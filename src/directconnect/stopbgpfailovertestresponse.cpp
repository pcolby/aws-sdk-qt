// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbgpfailovertestresponse.h"
#include "stopbgpfailovertestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::StopBgpFailoverTestResponse
 * \brief The StopBgpFailoverTestResponse class provides an interace for DirectConnect StopBgpFailoverTest responses.
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
 * \sa DirectConnectClient::stopBgpFailoverTest
 */

/*!
 * Constructs a StopBgpFailoverTestResponse object for \a reply to \a request, with parent \a parent.
 */
StopBgpFailoverTestResponse::StopBgpFailoverTestResponse(
        const StopBgpFailoverTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new StopBgpFailoverTestResponsePrivate(this), parent)
{
    setRequest(new StopBgpFailoverTestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBgpFailoverTestRequest * StopBgpFailoverTestResponse::request() const
{
    Q_D(const StopBgpFailoverTestResponse);
    return static_cast<const StopBgpFailoverTestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect StopBgpFailoverTest \a response.
 */
void StopBgpFailoverTestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBgpFailoverTestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::StopBgpFailoverTestResponsePrivate
 * \brief The StopBgpFailoverTestResponsePrivate class provides private implementation for StopBgpFailoverTestResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a StopBgpFailoverTestResponsePrivate object with public implementation \a q.
 */
StopBgpFailoverTestResponsePrivate::StopBgpFailoverTestResponsePrivate(
    StopBgpFailoverTestResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect StopBgpFailoverTest response element from \a xml.
 */
void StopBgpFailoverTestResponsePrivate::parseStopBgpFailoverTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBgpFailoverTestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
