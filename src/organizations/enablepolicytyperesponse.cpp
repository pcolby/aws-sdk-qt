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

#include "enablepolicytyperesponse.h"
#include "enablepolicytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  EnablePolicyTypeResponse
 *
 * @brief  Handles Organizations EnablePolicyType responses.
 *
 * @see    OrganizationsClient::enablePolicyType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnablePolicyTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new EnablePolicyTypeResponsePrivate(this), parent)
{
    setRequest(new EnablePolicyTypeRequest(request));
    setReply(reply);
}

const EnablePolicyTypeRequest * EnablePolicyTypeResponse::request() const
{
    Q_D(const EnablePolicyTypeResponse);
    return static_cast<const EnablePolicyTypeRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations EnablePolicyType response.
 *
 * @param  response  Response to parse.
 */
void EnablePolicyTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnablePolicyTypeResponsePrivate
 *
 * @brief  Private implementation for EnablePolicyTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnablePolicyTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnablePolicyTypeResponse instance.
 */
EnablePolicyTypeResponsePrivate::EnablePolicyTypeResponsePrivate(
    EnablePolicyTypeQueueResponse * const q) : EnablePolicyTypePrivate(q)
{

}

/**
 * @brief  Parse an Organizations EnablePolicyTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnablePolicyTypeResponsePrivate::EnablePolicyTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnablePolicyTypeResponse"));
    /// @todo
}
