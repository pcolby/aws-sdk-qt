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

#include "testroleresponse.h"
#include "testroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  TestRoleResponse
 *
 * @brief  Handles ElasticTranscoder TestRole responses.
 *
 * @see    ElasticTranscoderClient::testRole
 */

/**
 * @brief  Constructs a new TestRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestRoleResponse::TestRoleResponse(
        const TestRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TestRoleResponse(new TestRoleResponsePrivate(this), parent)
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
    Q_D(TestRoleResponse);
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
    TestRoleResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder TestRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestRoleResponsePrivate::parseTestRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestRoleResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
