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

#include "createsubscriberresponse.h"
#include "createsubscriberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  CreateSubscriberResponse
 *
 * @brief  Handles Budgets CreateSubscriber responses.
 *
 * @see    BudgetsClient::createSubscriber
 */

/**
 * @brief  Constructs a new CreateSubscriberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubscriberResponse::CreateSubscriberResponse(
        const CreateSubscriberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new CreateSubscriberResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriberRequest(request));
    setReply(reply);
}

const CreateSubscriberRequest * CreateSubscriberResponse::request() const
{
    Q_D(const CreateSubscriberResponse);
    return static_cast<const CreateSubscriberRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets CreateSubscriber response.
 *
 * @param  response  Response to parse.
 */
void CreateSubscriberResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSubscriberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSubscriberResponsePrivate
 *
 * @brief  Private implementation for CreateSubscriberResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriberResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSubscriberResponse instance.
 */
CreateSubscriberResponsePrivate::CreateSubscriberResponsePrivate(
    CreateSubscriberResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets CreateSubscriberResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSubscriberResponsePrivate::parseCreateSubscriberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriberResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
