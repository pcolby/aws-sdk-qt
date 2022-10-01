// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbgpfailovertestresponse.h"
#include "startbgpfailovertestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::StartBgpFailoverTestResponse
 * \brief The StartBgpFailoverTestResponse class provides an interace for DirectConnect StartBgpFailoverTest responses.
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
 * \sa DirectConnectClient::startBgpFailoverTest
 */

/*!
 * Constructs a StartBgpFailoverTestResponse object for \a reply to \a request, with parent \a parent.
 */
StartBgpFailoverTestResponse::StartBgpFailoverTestResponse(
        const StartBgpFailoverTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new StartBgpFailoverTestResponsePrivate(this), parent)
{
    setRequest(new StartBgpFailoverTestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBgpFailoverTestRequest * StartBgpFailoverTestResponse::request() const
{
    Q_D(const StartBgpFailoverTestResponse);
    return static_cast<const StartBgpFailoverTestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect StartBgpFailoverTest \a response.
 */
void StartBgpFailoverTestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBgpFailoverTestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::StartBgpFailoverTestResponsePrivate
 * \brief The StartBgpFailoverTestResponsePrivate class provides private implementation for StartBgpFailoverTestResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a StartBgpFailoverTestResponsePrivate object with public implementation \a q.
 */
StartBgpFailoverTestResponsePrivate::StartBgpFailoverTestResponsePrivate(
    StartBgpFailoverTestResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect StartBgpFailoverTest response element from \a xml.
 */
void StartBgpFailoverTestResponsePrivate::parseStartBgpFailoverTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBgpFailoverTestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
