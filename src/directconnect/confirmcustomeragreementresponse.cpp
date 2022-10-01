// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmcustomeragreementresponse.h"
#include "confirmcustomeragreementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmCustomerAgreementResponse
 * \brief The ConfirmCustomerAgreementResponse class provides an interace for DirectConnect ConfirmCustomerAgreement responses.
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
 * \sa DirectConnectClient::confirmCustomerAgreement
 */

/*!
 * Constructs a ConfirmCustomerAgreementResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmCustomerAgreementResponse::ConfirmCustomerAgreementResponse(
        const ConfirmCustomerAgreementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmCustomerAgreementResponsePrivate(this), parent)
{
    setRequest(new ConfirmCustomerAgreementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmCustomerAgreementRequest * ConfirmCustomerAgreementResponse::request() const
{
    Q_D(const ConfirmCustomerAgreementResponse);
    return static_cast<const ConfirmCustomerAgreementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect ConfirmCustomerAgreement \a response.
 */
void ConfirmCustomerAgreementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmCustomerAgreementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::ConfirmCustomerAgreementResponsePrivate
 * \brief The ConfirmCustomerAgreementResponsePrivate class provides private implementation for ConfirmCustomerAgreementResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmCustomerAgreementResponsePrivate object with public implementation \a q.
 */
ConfirmCustomerAgreementResponsePrivate::ConfirmCustomerAgreementResponsePrivate(
    ConfirmCustomerAgreementResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect ConfirmCustomerAgreement response element from \a xml.
 */
void ConfirmCustomerAgreementResponsePrivate::parseConfirmCustomerAgreementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmCustomerAgreementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
