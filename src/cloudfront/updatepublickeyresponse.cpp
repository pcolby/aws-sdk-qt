// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepublickeyresponse.h"
#include "updatepublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdatePublicKeyResponse
 * \brief The UpdatePublicKeyResponse class provides an interace for CloudFront UpdatePublicKey responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updatePublicKey
 */

/*!
 * Constructs a UpdatePublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePublicKeyResponse::UpdatePublicKeyResponse(
        const UpdatePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdatePublicKeyResponsePrivate(this), parent)
{
    setRequest(new UpdatePublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePublicKeyRequest * UpdatePublicKeyResponse::request() const
{
    Q_D(const UpdatePublicKeyResponse);
    return static_cast<const UpdatePublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdatePublicKey \a response.
 */
void UpdatePublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdatePublicKeyResponsePrivate
 * \brief The UpdatePublicKeyResponsePrivate class provides private implementation for UpdatePublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdatePublicKeyResponsePrivate object with public implementation \a q.
 */
UpdatePublicKeyResponsePrivate::UpdatePublicKeyResponsePrivate(
    UpdatePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdatePublicKey response element from \a xml.
 */
void UpdatePublicKeyResponsePrivate::parseUpdatePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
