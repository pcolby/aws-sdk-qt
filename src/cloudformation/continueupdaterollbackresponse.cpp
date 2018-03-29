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

#include "continueupdaterollbackresponse.h"
#include "continueupdaterollbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ContinueUpdateRollbackResponse
 *
 * @brief  Handles CloudFormation ContinueUpdateRollback responses.
 *
 * @see    CloudFormationClient::continueUpdateRollback
 */

/**
 * @brief  Constructs a new ContinueUpdateRollbackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ContinueUpdateRollbackResponse::ContinueUpdateRollbackResponse(
        const ContinueUpdateRollbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ContinueUpdateRollbackResponsePrivate(this), parent)
{
    setRequest(new ContinueUpdateRollbackRequest(request));
    setReply(reply);
}

const ContinueUpdateRollbackRequest * ContinueUpdateRollbackResponse::request() const
{
    Q_D(const ContinueUpdateRollbackResponse);
    return static_cast<const ContinueUpdateRollbackRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ContinueUpdateRollback response.
 *
 * @param  response  Response to parse.
 */
void ContinueUpdateRollbackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ContinueUpdateRollbackResponsePrivate
 *
 * @brief  Private implementation for ContinueUpdateRollbackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ContinueUpdateRollbackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ContinueUpdateRollbackResponse instance.
 */
ContinueUpdateRollbackResponsePrivate::ContinueUpdateRollbackResponsePrivate(
    ContinueUpdateRollbackQueueResponse * const q) : ContinueUpdateRollbackPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ContinueUpdateRollbackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ContinueUpdateRollbackResponsePrivate::ContinueUpdateRollbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ContinueUpdateRollbackResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
