// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsqlinjectionmatchsetresponse.h"
#include "createsqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::CreateSqlInjectionMatchSetResponse
 * \brief The CreateSqlInjectionMatchSetResponse class provides an interace for Waf CreateSqlInjectionMatchSet responses.
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
 * \sa WafClient::createSqlInjectionMatchSet
 */

/*!
 * Constructs a CreateSqlInjectionMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSqlInjectionMatchSetResponse::CreateSqlInjectionMatchSetResponse(
        const CreateSqlInjectionMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new CreateSqlInjectionMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateSqlInjectionMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSqlInjectionMatchSetRequest * CreateSqlInjectionMatchSetResponse::request() const
{
    Q_D(const CreateSqlInjectionMatchSetResponse);
    return static_cast<const CreateSqlInjectionMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Waf CreateSqlInjectionMatchSet \a response.
 */
void CreateSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSqlInjectionMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Waf::CreateSqlInjectionMatchSetResponsePrivate
 * \brief The CreateSqlInjectionMatchSetResponsePrivate class provides private implementation for CreateSqlInjectionMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a CreateSqlInjectionMatchSetResponsePrivate object with public implementation \a q.
 */
CreateSqlInjectionMatchSetResponsePrivate::CreateSqlInjectionMatchSetResponsePrivate(
    CreateSqlInjectionMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a Waf CreateSqlInjectionMatchSet response element from \a xml.
 */
void CreateSqlInjectionMatchSetResponsePrivate::parseCreateSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSqlInjectionMatchSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Waf
} // namespace QtAws
