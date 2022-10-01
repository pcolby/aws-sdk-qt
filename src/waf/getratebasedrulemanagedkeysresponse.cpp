// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getratebasedrulemanagedkeysresponse.h"
#include "getratebasedrulemanagedkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::GetRateBasedRuleManagedKeysResponse
 * \brief The GetRateBasedRuleManagedKeysResponse class provides an interace for Waf GetRateBasedRuleManagedKeys responses.
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
 * \sa WafClient::getRateBasedRuleManagedKeys
 */

/*!
 * Constructs a GetRateBasedRuleManagedKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetRateBasedRuleManagedKeysResponse::GetRateBasedRuleManagedKeysResponse(
        const GetRateBasedRuleManagedKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new GetRateBasedRuleManagedKeysResponsePrivate(this), parent)
{
    setRequest(new GetRateBasedRuleManagedKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRateBasedRuleManagedKeysRequest * GetRateBasedRuleManagedKeysResponse::request() const
{
    Q_D(const GetRateBasedRuleManagedKeysResponse);
    return static_cast<const GetRateBasedRuleManagedKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Waf GetRateBasedRuleManagedKeys \a response.
 */
void GetRateBasedRuleManagedKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRateBasedRuleManagedKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Waf::GetRateBasedRuleManagedKeysResponsePrivate
 * \brief The GetRateBasedRuleManagedKeysResponsePrivate class provides private implementation for GetRateBasedRuleManagedKeysResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a GetRateBasedRuleManagedKeysResponsePrivate object with public implementation \a q.
 */
GetRateBasedRuleManagedKeysResponsePrivate::GetRateBasedRuleManagedKeysResponsePrivate(
    GetRateBasedRuleManagedKeysResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a Waf GetRateBasedRuleManagedKeys response element from \a xml.
 */
void GetRateBasedRuleManagedKeysResponsePrivate::parseGetRateBasedRuleManagedKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRateBasedRuleManagedKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Waf
} // namespace QtAws
