// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createxssmatchsetresponse.h"
#include "createxssmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::CreateXssMatchSetResponse
 * \brief The CreateXssMatchSetResponse class provides an interace for Waf CreateXssMatchSet responses.
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
 * \sa WafClient::createXssMatchSet
 */

/*!
 * Constructs a CreateXssMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateXssMatchSetResponse::CreateXssMatchSetResponse(
        const CreateXssMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new CreateXssMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateXssMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateXssMatchSetRequest * CreateXssMatchSetResponse::request() const
{
    Q_D(const CreateXssMatchSetResponse);
    return static_cast<const CreateXssMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Waf CreateXssMatchSet \a response.
 */
void CreateXssMatchSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateXssMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Waf::CreateXssMatchSetResponsePrivate
 * \brief The CreateXssMatchSetResponsePrivate class provides private implementation for CreateXssMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a CreateXssMatchSetResponsePrivate object with public implementation \a q.
 */
CreateXssMatchSetResponsePrivate::CreateXssMatchSetResponsePrivate(
    CreateXssMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a Waf CreateXssMatchSet response element from \a xml.
 */
void CreateXssMatchSetResponsePrivate::parseCreateXssMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateXssMatchSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Waf
} // namespace QtAws
