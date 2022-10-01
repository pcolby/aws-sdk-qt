// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createkeysigningkeyresponse.h"
#include "createkeysigningkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateKeySigningKeyResponse
 * \brief The CreateKeySigningKeyResponse class provides an interace for Route53 CreateKeySigningKey responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createKeySigningKey
 */

/*!
 * Constructs a CreateKeySigningKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateKeySigningKeyResponse::CreateKeySigningKeyResponse(
        const CreateKeySigningKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateKeySigningKeyResponsePrivate(this), parent)
{
    setRequest(new CreateKeySigningKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateKeySigningKeyRequest * CreateKeySigningKeyResponse::request() const
{
    Q_D(const CreateKeySigningKeyResponse);
    return static_cast<const CreateKeySigningKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateKeySigningKey \a response.
 */
void CreateKeySigningKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateKeySigningKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateKeySigningKeyResponsePrivate
 * \brief The CreateKeySigningKeyResponsePrivate class provides private implementation for CreateKeySigningKeyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateKeySigningKeyResponsePrivate object with public implementation \a q.
 */
CreateKeySigningKeyResponsePrivate::CreateKeySigningKeyResponsePrivate(
    CreateKeySigningKeyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateKeySigningKey response element from \a xml.
 */
void CreateKeySigningKeyResponsePrivate::parseCreateKeySigningKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeySigningKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
