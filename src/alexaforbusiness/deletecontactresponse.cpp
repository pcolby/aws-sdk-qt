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

#include "deletecontactresponse.h"
#include "deletecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteContactResponse
 *
 * \brief The DeleteContactResponse class encapsulates AlexaForBusiness DeleteContact responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::deleteContact
 */

/*!
 * @brief  Constructs a new DeleteContactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteContactResponse::DeleteContactResponse(
        const DeleteContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteContactResponsePrivate(this), parent)
{
    setRequest(new DeleteContactRequest(request));
    setReply(reply);
}

const DeleteContactRequest * DeleteContactResponse::request() const
{
    Q_D(const DeleteContactResponse);
    return static_cast<const DeleteContactRequest *>(d->request);
}

/*!
 * @brief  Parse a AlexaForBusiness DeleteContact response.
 *
 * @param  response  Response to parse.
 */
void DeleteContactResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteContactResponsePrivate
 *
 * \brief Private implementation for DeleteContactResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteContactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteContactResponse instance.
 */
DeleteContactResponsePrivate::DeleteContactResponsePrivate(
    DeleteContactResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness DeleteContactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteContactResponsePrivate::parseDeleteContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContactResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
