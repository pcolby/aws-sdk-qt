// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepublickeyresponse.h"
#include "deletepublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeletePublicKeyResponse
 * \brief The DeletePublicKeyResponse class provides an interace for CloudFront DeletePublicKey responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deletePublicKey
 */

/*!
 * Constructs a DeletePublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePublicKeyResponse::DeletePublicKeyResponse(
        const DeletePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeletePublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeletePublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePublicKeyRequest * DeletePublicKeyResponse::request() const
{
    Q_D(const DeletePublicKeyResponse);
    return static_cast<const DeletePublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeletePublicKey \a response.
 */
void DeletePublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeletePublicKeyResponsePrivate
 * \brief The DeletePublicKeyResponsePrivate class provides private implementation for DeletePublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeletePublicKeyResponsePrivate object with public implementation \a q.
 */
DeletePublicKeyResponsePrivate::DeletePublicKeyResponsePrivate(
    DeletePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeletePublicKey response element from \a xml.
 */
void DeletePublicKeyResponsePrivate::parseDeletePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
