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

#include "updateregexmatchsetresponse.h"
#include "updateregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateRegexMatchSetResponse
 *
 * \brief The UpdateRegexMatchSetResponse class encapsulates WAF UpdateRegexMatchSet responses.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::updateRegexMatchSet
 */

/*!
 * @brief  Constructs a new UpdateRegexMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRegexMatchSetResponse::UpdateRegexMatchSetResponse(
        const UpdateRegexMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateRegexMatchSetRequest(request));
    setReply(reply);
}

const UpdateRegexMatchSetRequest * UpdateRegexMatchSetResponse::request() const
{
    Q_D(const UpdateRegexMatchSetResponse);
    return static_cast<const UpdateRegexMatchSetRequest *>(d->request);
}

/*!
 * @brief  Parse a WAF UpdateRegexMatchSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRegexMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateRegexMatchSetResponsePrivate
 *
 * \brief Private implementation for UpdateRegexMatchSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateRegexMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRegexMatchSetResponse instance.
 */
UpdateRegexMatchSetResponsePrivate::UpdateRegexMatchSetResponsePrivate(
    UpdateRegexMatchSetResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAF UpdateRegexMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRegexMatchSetResponsePrivate::parseUpdateRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
