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

#include "listfieldlevelencryptionconfigsresponse.h"
#include "listfieldlevelencryptionconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsResponse
 *
 * \brief The ListFieldLevelEncryptionConfigsResponse class encapsulates CloudFront ListFieldLevelEncryptionConfigs responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionConfigs
 */

/*!
 * @brief  Constructs a new ListFieldLevelEncryptionConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFieldLevelEncryptionConfigsResponse::ListFieldLevelEncryptionConfigsResponse(
        const ListFieldLevelEncryptionConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListFieldLevelEncryptionConfigsResponsePrivate(this), parent)
{
    setRequest(new ListFieldLevelEncryptionConfigsRequest(request));
    setReply(reply);
}

const ListFieldLevelEncryptionConfigsRequest * ListFieldLevelEncryptionConfigsResponse::request() const
{
    Q_D(const ListFieldLevelEncryptionConfigsResponse);
    return static_cast<const ListFieldLevelEncryptionConfigsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront ListFieldLevelEncryptionConfigs response.
 *
 * @param  response  Response to parse.
 */
void ListFieldLevelEncryptionConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFieldLevelEncryptionConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListFieldLevelEncryptionConfigsResponsePrivate
 *
 * \brief Private implementation for ListFieldLevelEncryptionConfigsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFieldLevelEncryptionConfigsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFieldLevelEncryptionConfigsResponse instance.
 */
ListFieldLevelEncryptionConfigsResponsePrivate::ListFieldLevelEncryptionConfigsResponsePrivate(
    ListFieldLevelEncryptionConfigsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront ListFieldLevelEncryptionConfigsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFieldLevelEncryptionConfigsResponsePrivate::parseListFieldLevelEncryptionConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFieldLevelEncryptionConfigsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
