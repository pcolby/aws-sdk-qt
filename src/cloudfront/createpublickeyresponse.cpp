// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpublickeyresponse.h"
#include "createpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreatePublicKeyResponse
 * \brief The CreatePublicKeyResponse class provides an interace for CloudFront CreatePublicKey responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createPublicKey
 */

/*!
 * Constructs a CreatePublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePublicKeyResponse::CreatePublicKeyResponse(
        const CreatePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreatePublicKeyResponsePrivate(this), parent)
{
    setRequest(new CreatePublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePublicKeyRequest * CreatePublicKeyResponse::request() const
{
    Q_D(const CreatePublicKeyResponse);
    return static_cast<const CreatePublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreatePublicKey \a response.
 */
void CreatePublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreatePublicKeyResponsePrivate
 * \brief The CreatePublicKeyResponsePrivate class provides private implementation for CreatePublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreatePublicKeyResponsePrivate object with public implementation \a q.
 */
CreatePublicKeyResponsePrivate::CreatePublicKeyResponsePrivate(
    CreatePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreatePublicKey response element from \a xml.
 */
void CreatePublicKeyResponsePrivate::parseCreatePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
