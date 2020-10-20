/*
    Copyright 2013-2020 Paul Colby

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

#include "updatefieldlevelencryptionconfigresponse.h"
#include "updatefieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigResponse
 * \brief The UpdateFieldLevelEncryptionConfigResponse class provides an interace for CloudFront UpdateFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionConfig
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFieldLevelEncryptionConfigResponse::UpdateFieldLevelEncryptionConfigResponse(
        const UpdateFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFieldLevelEncryptionConfigRequest * UpdateFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const UpdateFieldLevelEncryptionConfigResponse);
    return static_cast<const UpdateFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateFieldLevelEncryptionConfig \a response.
 */
void UpdateFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigResponsePrivate
 * \brief The UpdateFieldLevelEncryptionConfigResponsePrivate class provides private implementation for UpdateFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
UpdateFieldLevelEncryptionConfigResponsePrivate::UpdateFieldLevelEncryptionConfigResponsePrivate(
    UpdateFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateFieldLevelEncryptionConfig response element from \a xml.
 */
void UpdateFieldLevelEncryptionConfigResponsePrivate::parseUpdateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFieldLevelEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
