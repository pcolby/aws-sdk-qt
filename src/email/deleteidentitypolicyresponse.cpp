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

#include "deleteidentitypolicyresponse.h"
#include "deleteidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteIdentityPolicyResponse
 *
 * \brief The DeleteIdentityPolicyResponse class provides an interace for SES DeleteIdentityPolicy responses.
 *
 * \ingroup SES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::deleteIdentityPolicy
 */

/*!
 * @brief  Constructs a new DeleteIdentityPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentityPolicyResponse::DeleteIdentityPolicyResponse(
        const DeleteIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityPolicyRequest(request));
    setReply(reply);
}

const DeleteIdentityPolicyRequest * DeleteIdentityPolicyResponse::request() const
{
    Q_D(const DeleteIdentityPolicyResponse);
    return static_cast<const DeleteIdentityPolicyRequest *>(d->request);
}

/*!
 * @brief  Parse a SES DeleteIdentityPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteIdentityPolicyResponsePrivate
 *
 * \brief Private implementation for DeleteIdentityPolicyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIdentityPolicyResponse instance.
 */
DeleteIdentityPolicyResponsePrivate::DeleteIdentityPolicyResponsePrivate(
    DeleteIdentityPolicyResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES DeleteIdentityPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIdentityPolicyResponsePrivate::parseDeleteIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityPolicyResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
