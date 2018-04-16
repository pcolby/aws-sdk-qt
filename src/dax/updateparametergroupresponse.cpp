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

#include "updateparametergroupresponse.h"
#include "updateparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::UpdateParameterGroupResponse
 *
 * \brief The UpdateParameterGroupResponse class encapsulates DAX UpdateParameterGroup responses.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::updateParameterGroup
 */

/*!
 * @brief  Constructs a new UpdateParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateParameterGroupResponse::UpdateParameterGroupResponse(
        const UpdateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new UpdateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateParameterGroupRequest(request));
    setReply(reply);
}

const UpdateParameterGroupRequest * UpdateParameterGroupResponse::request() const
{
    Q_D(const UpdateParameterGroupResponse);
    return static_cast<const UpdateParameterGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a DAX UpdateParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateParameterGroupResponsePrivate
 *
 * \brief Private implementation for UpdateParameterGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateParameterGroupResponse instance.
 */
UpdateParameterGroupResponsePrivate::UpdateParameterGroupResponsePrivate(
    UpdateParameterGroupResponse * const q) : DAXResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DAX UpdateParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateParameterGroupResponsePrivate::parseUpdateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateParameterGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
