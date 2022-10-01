// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acknowledgeorderreceiptresponse.h"
#include "acknowledgeorderreceiptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::AcknowledgeOrderReceiptResponse
 * \brief The AcknowledgeOrderReceiptResponse class provides an interace for PrivateNetworks AcknowledgeOrderReceipt responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::acknowledgeOrderReceipt
 */

/*!
 * Constructs a AcknowledgeOrderReceiptResponse object for \a reply to \a request, with parent \a parent.
 */
AcknowledgeOrderReceiptResponse::AcknowledgeOrderReceiptResponse(
        const AcknowledgeOrderReceiptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new AcknowledgeOrderReceiptResponsePrivate(this), parent)
{
    setRequest(new AcknowledgeOrderReceiptRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcknowledgeOrderReceiptRequest * AcknowledgeOrderReceiptResponse::request() const
{
    Q_D(const AcknowledgeOrderReceiptResponse);
    return static_cast<const AcknowledgeOrderReceiptRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks AcknowledgeOrderReceipt \a response.
 */
void AcknowledgeOrderReceiptResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcknowledgeOrderReceiptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::AcknowledgeOrderReceiptResponsePrivate
 * \brief The AcknowledgeOrderReceiptResponsePrivate class provides private implementation for AcknowledgeOrderReceiptResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a AcknowledgeOrderReceiptResponsePrivate object with public implementation \a q.
 */
AcknowledgeOrderReceiptResponsePrivate::AcknowledgeOrderReceiptResponsePrivate(
    AcknowledgeOrderReceiptResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks AcknowledgeOrderReceipt response element from \a xml.
 */
void AcknowledgeOrderReceiptResponsePrivate::parseAcknowledgeOrderReceiptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcknowledgeOrderReceiptResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
