// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getencryptionconfigresponse.h"
#include "getencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetEncryptionConfigResponse
 * \brief The GetEncryptionConfigResponse class provides an interace for XRay GetEncryptionConfig responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getEncryptionConfig
 */

/*!
 * Constructs a GetEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetEncryptionConfigResponse::GetEncryptionConfigResponse(
        const GetEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new GetEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEncryptionConfigRequest * GetEncryptionConfigResponse::request() const
{
    Q_D(const GetEncryptionConfigResponse);
    return static_cast<const GetEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetEncryptionConfig \a response.
 */
void GetEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetEncryptionConfigResponsePrivate
 * \brief The GetEncryptionConfigResponsePrivate class provides private implementation for GetEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetEncryptionConfigResponsePrivate object with public implementation \a q.
 */
GetEncryptionConfigResponsePrivate::GetEncryptionConfigResponsePrivate(
    GetEncryptionConfigResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetEncryptionConfig response element from \a xml.
 */
void GetEncryptionConfigResponsePrivate::parseGetEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
