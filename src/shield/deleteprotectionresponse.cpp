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

#include "deleteprotectionresponse.h"
#include "deleteprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteProtectionResponse
 *
 * \brief The DeleteProtectionResponse class encapsulates Shield DeleteProtection responses.
 *
 * \ingroup Shield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::deleteProtection
 */

/*!
 * @brief  Constructs a new DeleteProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProtectionResponse::DeleteProtectionResponse(
        const DeleteProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DeleteProtectionResponsePrivate(this), parent)
{
    setRequest(new DeleteProtectionRequest(request));
    setReply(reply);
}

const DeleteProtectionRequest * DeleteProtectionResponse::request() const
{
    Q_D(const DeleteProtectionResponse);
    return static_cast<const DeleteProtectionRequest *>(d->request);
}

/*!
 * @brief  Parse a Shield DeleteProtection response.
 *
 * @param  response  Response to parse.
 */
void DeleteProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteProtectionResponsePrivate
 *
 * \brief Private implementation for DeleteProtectionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProtectionResponse instance.
 */
DeleteProtectionResponsePrivate::DeleteProtectionResponsePrivate(
    DeleteProtectionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Shield DeleteProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProtectionResponsePrivate::parseDeleteProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProtectionResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
