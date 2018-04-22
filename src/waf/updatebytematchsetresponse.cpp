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
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateByteMatchSetResponse
 * \brief The UpdateByteMatchSetResponse class provides an interace for WAF UpdateByteMatchSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::updateByteMatchSet
 */

/*!
 * Constructs a UpdateByteMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateByteMatchSetResponse::UpdateByteMatchSetResponse(
        const UpdateByteMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new UpdateByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateByteMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateByteMatchSetRequest * UpdateByteMatchSetResponse::request() const
{
    Q_D(const UpdateByteMatchSetResponse);
    return static_cast<const UpdateByteMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF UpdateByteMatchSet \a response.
 */
void UpdateByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateByteMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::UpdateByteMatchSetResponsePrivate
 * \brief The UpdateByteMatchSetResponsePrivate class provides private implementation for UpdateByteMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateByteMatchSetResponsePrivate object with public implementation \a q.
 */
UpdateByteMatchSetResponsePrivate::UpdateByteMatchSetResponsePrivate(
    UpdateByteMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF UpdateByteMatchSet response element from \a xml.
 */
void UpdateByteMatchSetResponsePrivate::parseUpdateByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateByteMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
