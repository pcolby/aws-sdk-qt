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

#include "updatebytematchsetresponse.h"
#include "updatebytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::UpdateByteMatchSetResponse
 *
 * \brief The UpdateByteMatchSetResponse class encapsulates WAFRegional UpdateByteMatchSet responses.
 *
 * \ingroup WAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::updateByteMatchSet
 */

/*!
 * @brief  Constructs a new UpdateByteMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateByteMatchSetResponse::UpdateByteMatchSetResponse(
        const UpdateByteMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateByteMatchSetRequest(request));
    setReply(reply);
}

const UpdateByteMatchSetRequest * UpdateByteMatchSetResponse::request() const
{
    Q_D(const UpdateByteMatchSetResponse);
    return static_cast<const UpdateByteMatchSetRequest *>(d->request);
}

/*!
 * @brief  Parse a WAFRegional UpdateByteMatchSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateByteMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateByteMatchSetResponsePrivate
 *
 * \brief Private implementation for UpdateByteMatchSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateByteMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateByteMatchSetResponse instance.
 */
UpdateByteMatchSetResponsePrivate::UpdateByteMatchSetResponsePrivate(
    UpdateByteMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAFRegional UpdateByteMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateByteMatchSetResponsePrivate::parseUpdateByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateByteMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
