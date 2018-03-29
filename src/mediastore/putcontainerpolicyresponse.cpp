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

#include "putcontainerpolicyresponse.h"
#include "putcontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  PutContainerPolicyResponse
 *
 * @brief  Handles MediaStore PutContainerPolicy responses.
 *
 * @see    MediaStoreClient::putContainerPolicy
 */

/**
 * @brief  Constructs a new PutContainerPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutContainerPolicyResponse::PutContainerPolicyResponse(
        const PutContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutContainerPolicyResponse(new PutContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new PutContainerPolicyRequest(request));
    setReply(reply);
}

const PutContainerPolicyRequest * PutContainerPolicyResponse::request() const
{
    Q_D(const PutContainerPolicyResponse);
    return static_cast<const PutContainerPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore PutContainerPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutContainerPolicyResponsePrivate
 *
 * @brief  Private implementation for PutContainerPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutContainerPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutContainerPolicyResponse instance.
 */
PutContainerPolicyResponsePrivate::PutContainerPolicyResponsePrivate(
    PutContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStore PutContainerPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutContainerPolicyResponsePrivate::parsePutContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContainerPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
