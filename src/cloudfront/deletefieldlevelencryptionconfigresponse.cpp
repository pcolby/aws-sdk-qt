/*
    Copyright 2013-2018 Paul Colby

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

#include "deletefieldlevelencryptionconfigresponse.h"
#include "deletefieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigResponse
 * \brief The DeleteFieldLevelEncryptionConfigResponse class provides an interace for CloudFront DeleteFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFieldLevelEncryptionConfig
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFieldLevelEncryptionConfigResponse::DeleteFieldLevelEncryptionConfigResponse(
        const DeleteFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFieldLevelEncryptionConfigRequest * DeleteFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const DeleteFieldLevelEncryptionConfigResponse);
    return static_cast<const DeleteFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteFieldLevelEncryptionConfig \a response.
 */
void DeleteFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigResponsePrivate
 * \brief The DeleteFieldLevelEncryptionConfigResponsePrivate class provides private implementation for DeleteFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
DeleteFieldLevelEncryptionConfigResponsePrivate::DeleteFieldLevelEncryptionConfigResponsePrivate(
    DeleteFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteFieldLevelEncryptionConfig response element from \a xml.
 */
void DeleteFieldLevelEncryptionConfigResponsePrivate::parseDeleteFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFieldLevelEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
