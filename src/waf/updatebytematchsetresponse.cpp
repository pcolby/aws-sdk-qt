// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebytematchsetresponse.h"
#include "updatebytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::UpdateByteMatchSetResponse
 * \brief The UpdateByteMatchSetResponse class provides an interace for Waf UpdateByteMatchSet responses.
 *
 * \inmodule QtAwsWaf
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The AWS WAF Classic
 *  actions and data types listed in the reference are available for protecting Amazon CloudFront distributions. You can use
 *  these actions and data types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed
 *  information about the AWS WAF Classic API actions, data types, and errors. For detailed information about AWS WAF
 *  Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
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
 * Parses a successful Waf UpdateByteMatchSet \a response.
 */
void UpdateByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateByteMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Waf::UpdateByteMatchSetResponsePrivate
 * \brief The UpdateByteMatchSetResponsePrivate class provides private implementation for UpdateByteMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a UpdateByteMatchSetResponsePrivate object with public implementation \a q.
 */
UpdateByteMatchSetResponsePrivate::UpdateByteMatchSetResponsePrivate(
    UpdateByteMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a Waf UpdateByteMatchSet response element from \a xml.
 */
void UpdateByteMatchSetResponsePrivate::parseUpdateByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateByteMatchSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Waf
} // namespace QtAws
