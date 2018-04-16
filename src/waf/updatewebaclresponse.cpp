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

#include "updatewebaclresponse.h"
#include "updatewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateWebACLResponse
 *
 * \brief The UpdateWebACLResponse class encapsulates WAF UpdateWebACL responses.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::updateWebACL
 */

/*!
 * @brief  Constructs a new UpdateWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateWebACLResponse::UpdateWebACLResponse(
        const UpdateWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateWebACLResponsePrivate(this), parent)
{
    setRequest(new UpdateWebACLRequest(request));
    setReply(reply);
}

const UpdateWebACLRequest * UpdateWebACLResponse::request() const
{
    Q_D(const UpdateWebACLResponse);
    return static_cast<const UpdateWebACLRequest *>(d->request);
}

/*!
 * @brief  Parse a WAF UpdateWebACL response.
 *
 * @param  response  Response to parse.
 */
void UpdateWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateWebACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateWebACLResponsePrivate
 *
 * \brief Private implementation for UpdateWebACLResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateWebACLResponse instance.
 */
UpdateWebACLResponsePrivate::UpdateWebACLResponsePrivate(
    UpdateWebACLResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAF UpdateWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateWebACLResponsePrivate::parseUpdateWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebACLResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
