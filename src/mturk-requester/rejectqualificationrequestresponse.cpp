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

#include "rejectqualificationrequestresponse.h"
#include "rejectqualificationrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  RejectQualificationRequestResponse
 *
 * @brief  Handles MTurk RejectQualificationRequest responses.
 *
 * @see    MTurkClient::rejectQualificationRequest
 */

/**
 * @brief  Constructs a new RejectQualificationRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectQualificationRequestResponse::RejectQualificationRequestResponse(
        const RejectQualificationRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new RejectQualificationRequestResponsePrivate(this), parent)
{
    setRequest(new RejectQualificationRequestRequest(request));
    setReply(reply);
}

const RejectQualificationRequestRequest * RejectQualificationRequestResponse::request() const
{
    Q_D(const RejectQualificationRequestResponse);
    return static_cast<const RejectQualificationRequestRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk RejectQualificationRequest response.
 *
 * @param  response  Response to parse.
 */
void RejectQualificationRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RejectQualificationRequestResponsePrivate
 *
 * @brief  Private implementation for RejectQualificationRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectQualificationRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RejectQualificationRequestResponse instance.
 */
RejectQualificationRequestResponsePrivate::RejectQualificationRequestResponsePrivate(
    RejectQualificationRequestResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk RejectQualificationRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RejectQualificationRequestResponsePrivate::RejectQualificationRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectQualificationRequestResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
