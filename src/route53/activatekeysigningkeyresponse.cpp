// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activatekeysigningkeyresponse.h"
#include "activatekeysigningkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ActivateKeySigningKeyResponse
 * \brief The ActivateKeySigningKeyResponse class provides an interace for Route53 ActivateKeySigningKey responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::activateKeySigningKey
 */

/*!
 * Constructs a ActivateKeySigningKeyResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateKeySigningKeyResponse::ActivateKeySigningKeyResponse(
        const ActivateKeySigningKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ActivateKeySigningKeyResponsePrivate(this), parent)
{
    setRequest(new ActivateKeySigningKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateKeySigningKeyRequest * ActivateKeySigningKeyResponse::request() const
{
    Q_D(const ActivateKeySigningKeyResponse);
    return static_cast<const ActivateKeySigningKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ActivateKeySigningKey \a response.
 */
void ActivateKeySigningKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateKeySigningKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ActivateKeySigningKeyResponsePrivate
 * \brief The ActivateKeySigningKeyResponsePrivate class provides private implementation for ActivateKeySigningKeyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ActivateKeySigningKeyResponsePrivate object with public implementation \a q.
 */
ActivateKeySigningKeyResponsePrivate::ActivateKeySigningKeyResponsePrivate(
    ActivateKeySigningKeyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ActivateKeySigningKey response element from \a xml.
 */
void ActivateKeySigningKeyResponsePrivate::parseActivateKeySigningKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateKeySigningKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
