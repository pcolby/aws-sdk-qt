/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listfieldlevelencryptionprofilesresponse.h"
#include "listfieldlevelencryptionprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionProfilesResponse
 *
 * \brief The ListFieldLevelEncryptionProfilesResponse class encapsulates CloudFront ListFieldLevelEncryptionProfiles responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionProfiles
 */

/*!
 * @brief  Constructs a new ListFieldLevelEncryptionProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFieldLevelEncryptionProfilesResponse::ListFieldLevelEncryptionProfilesResponse(
        const ListFieldLevelEncryptionProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListFieldLevelEncryptionProfilesResponsePrivate(this), parent)
{
    setRequest(new ListFieldLevelEncryptionProfilesRequest(request));
    setReply(reply);
}

const ListFieldLevelEncryptionProfilesRequest * ListFieldLevelEncryptionProfilesResponse::request() const
{
    Q_D(const ListFieldLevelEncryptionProfilesResponse);
    return static_cast<const ListFieldLevelEncryptionProfilesRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront ListFieldLevelEncryptionProfiles response.
 *
 * @param  response  Response to parse.
 */
void ListFieldLevelEncryptionProfilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFieldLevelEncryptionProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListFieldLevelEncryptionProfilesResponsePrivate
 *
 * \brief Private implementation for ListFieldLevelEncryptionProfilesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFieldLevelEncryptionProfilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFieldLevelEncryptionProfilesResponse instance.
 */
ListFieldLevelEncryptionProfilesResponsePrivate::ListFieldLevelEncryptionProfilesResponsePrivate(
    ListFieldLevelEncryptionProfilesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront ListFieldLevelEncryptionProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFieldLevelEncryptionProfilesResponsePrivate::parseListFieldLevelEncryptionProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFieldLevelEncryptionProfilesResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
