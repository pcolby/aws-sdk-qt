/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testroleresponse.h"
#include "testroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  TestRoleResponse
 *
 * @brief  Handles ElasticTranscoder TestRole responses.
 *
 * @see    ElasticTranscoderClient::testRole
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestRoleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new TestRoleResponsePrivate(this), parent)
{
    setRequest(new TestRoleRequest(request));
    setReply(reply);
}

const TestRoleRequest * TestRoleResponse::request() const
{
    Q_D(const TestRoleResponse);
    return static_cast<const TestRoleRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder TestRole response.
 *
 * @param  response  Response to parse.
 */
void TestRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestRoleResponsePrivate
 *
 * @brief  Private implementation for TestRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestRoleResponse instance.
 */
TestRoleResponsePrivate::TestRoleResponsePrivate(
    TestRoleQueueResponse * const q) : TestRolePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder TestRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestRoleResponsePrivate::TestRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestRoleResponse"));
    /// @todo
}
