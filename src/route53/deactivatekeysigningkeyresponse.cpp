// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivatekeysigningkeyresponse.h"
#include "deactivatekeysigningkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeactivateKeySigningKeyResponse
 * \brief The DeactivateKeySigningKeyResponse class provides an interace for Route53 DeactivateKeySigningKey responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deactivateKeySigningKey
 */

/*!
 * Constructs a DeactivateKeySigningKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivateKeySigningKeyResponse::DeactivateKeySigningKeyResponse(
        const DeactivateKeySigningKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeactivateKeySigningKeyResponsePrivate(this), parent)
{
    setRequest(new DeactivateKeySigningKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivateKeySigningKeyRequest * DeactivateKeySigningKeyResponse::request() const
{
    Q_D(const DeactivateKeySigningKeyResponse);
    return static_cast<const DeactivateKeySigningKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeactivateKeySigningKey \a response.
 */
void DeactivateKeySigningKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivateKeySigningKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeactivateKeySigningKeyResponsePrivate
 * \brief The DeactivateKeySigningKeyResponsePrivate class provides private implementation for DeactivateKeySigningKeyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeactivateKeySigningKeyResponsePrivate object with public implementation \a q.
 */
DeactivateKeySigningKeyResponsePrivate::DeactivateKeySigningKeyResponsePrivate(
    DeactivateKeySigningKeyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeactivateKeySigningKey response element from \a xml.
 */
void DeactivateKeySigningKeyResponsePrivate::parseDeactivateKeySigningKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateKeySigningKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
