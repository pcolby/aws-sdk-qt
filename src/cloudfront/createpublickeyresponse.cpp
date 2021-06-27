/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const CreatePublicKeyRequest *>(CloudFrontResponse::request());
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
