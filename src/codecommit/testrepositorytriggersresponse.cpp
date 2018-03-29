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

#include "testrepositorytriggersresponse.h"
#include "testrepositorytriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  TestRepositoryTriggersResponse
 *
 * @brief  Handles CodeCommit TestRepositoryTriggers responses.
 *
 * @see    CodeCommitClient::testRepositoryTriggers
 */

/**
 * @brief  Constructs a new TestRepositoryTriggersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestRepositoryTriggersResponse::TestRepositoryTriggersResponse(
        const TestRepositoryTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new TestRepositoryTriggersResponsePrivate(this), parent)
{
    setRequest(new TestRepositoryTriggersRequest(request));
    setReply(reply);
}

const TestRepositoryTriggersRequest * TestRepositoryTriggersResponse::request() const
{
    Q_D(const TestRepositoryTriggersResponse);
    return static_cast<const TestRepositoryTriggersRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit TestRepositoryTriggers response.
 *
 * @param  response  Response to parse.
 */
void TestRepositoryTriggersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestRepositoryTriggersResponsePrivate
 *
 * @brief  Private implementation for TestRepositoryTriggersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestRepositoryTriggersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestRepositoryTriggersResponse instance.
 */
TestRepositoryTriggersResponsePrivate::TestRepositoryTriggersResponsePrivate(
    TestRepositoryTriggersResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit TestRepositoryTriggersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestRepositoryTriggersResponsePrivate::TestRepositoryTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestRepositoryTriggersResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
