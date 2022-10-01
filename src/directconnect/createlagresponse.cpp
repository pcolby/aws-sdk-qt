// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlagresponse.h"
#include "createlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateLagResponse
 * \brief The CreateLagResponse class provides an interace for DirectConnect CreateLag responses.
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
 * \sa DirectConnectClient::createLag
 */

/*!
 * Constructs a CreateLagResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLagResponse::CreateLagResponse(
        const CreateLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateLagResponsePrivate(this), parent)
{
    setRequest(new CreateLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLagRequest * CreateLagResponse::request() const
{
    Q_D(const CreateLagResponse);
    return static_cast<const CreateLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateLag \a response.
 */
void CreateLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateLagResponsePrivate
 * \brief The CreateLagResponsePrivate class provides private implementation for CreateLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateLagResponsePrivate object with public implementation \a q.
 */
CreateLagResponsePrivate::CreateLagResponsePrivate(
    CreateLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateLag response element from \a xml.
 */
void CreateLagResponsePrivate::parseCreateLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
