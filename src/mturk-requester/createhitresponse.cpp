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

#include "createhitresponse.h"
#include "createhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITResponse
 *
 * \brief The CreateHITResponse class provides an interace for MTurk CreateHIT responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::createHIT
 */

/*!
 * @brief  Constructs a new CreateHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHITResponse::CreateHITResponse(
        const CreateHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITResponsePrivate(this), parent)
{
    setRequest(new CreateHITRequest(request));
    setReply(reply);
}

const CreateHITRequest * CreateHITResponse::request() const
{
    Q_D(const CreateHITResponse);
    return static_cast<const CreateHITRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk CreateHIT response.
 *
 * @param  response  Response to parse.
 */
void CreateHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateHITResponsePrivate
 *
 * \brief Private implementation for CreateHITResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHITResponse instance.
 */
CreateHITResponsePrivate::CreateHITResponsePrivate(
    CreateHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk CreateHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHITResponsePrivate::parseCreateHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
