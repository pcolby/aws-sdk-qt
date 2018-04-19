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

#include "updateregexpatternsetresponse.h"
#include "updateregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateRegexPatternSetResponse
 * \brief The UpdateRegexPatternSetResponse class provides an interace for WAF UpdateRegexPatternSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::updateRegexPatternSet
 */

/*!
 * Constructs a UpdateRegexPatternSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRegexPatternSetResponse::UpdateRegexPatternSetResponse(
        const UpdateRegexPatternSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new UpdateRegexPatternSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRegexPatternSetRequest * UpdateRegexPatternSetResponse::request() const
{
    Q_D(const UpdateRegexPatternSetResponse);
    return static_cast<const UpdateRegexPatternSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF UpdateRegexPatternSet \a response.
 */
void UpdateRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRegexPatternSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::UpdateRegexPatternSetResponsePrivate
 * \brief The UpdateRegexPatternSetResponsePrivate class provides private implementation for UpdateRegexPatternSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateRegexPatternSetResponsePrivate object with public implementation \a q.
 */
UpdateRegexPatternSetResponsePrivate::UpdateRegexPatternSetResponsePrivate(
    UpdateRegexPatternSetResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF UpdateRegexPatternSet response element from \a xml.
 */
void UpdateRegexPatternSetResponsePrivate::parseUpdateRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
