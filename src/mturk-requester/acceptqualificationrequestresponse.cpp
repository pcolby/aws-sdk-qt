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

#include "acceptqualificationrequestresponse.h"
#include "acceptqualificationrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  AcceptQualificationRequestResponse
 *
 * @brief  Handles MTurk AcceptQualificationRequest responses.
 *
 * @see    MTurkClient::acceptQualificationRequest
 */

/**
 * @brief  Constructs a new AcceptQualificationRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptQualificationRequestResponse::AcceptQualificationRequestResponse(
        const AcceptQualificationRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new AcceptQualificationRequestResponsePrivate(this), parent)
{
    setRequest(new AcceptQualificationRequestRequest(request));
    setReply(reply);
}

const AcceptQualificationRequestRequest * AcceptQualificationRequestResponse::request() const
{
    Q_D(const AcceptQualificationRequestResponse);
    return static_cast<const AcceptQualificationRequestRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk AcceptQualificationRequest response.
 *
 * @param  response  Response to parse.
 */
void AcceptQualificationRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptQualificationRequestResponsePrivate
 *
 * @brief  Private implementation for AcceptQualificationRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptQualificationRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptQualificationRequestResponse instance.
 */
AcceptQualificationRequestResponsePrivate::AcceptQualificationRequestResponsePrivate(
    AcceptQualificationRequestResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk AcceptQualificationRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptQualificationRequestResponsePrivate::AcceptQualificationRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptQualificationRequestResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
