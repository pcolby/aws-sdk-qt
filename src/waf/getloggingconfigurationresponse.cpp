// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloggingconfigurationresponse.h"
#include "getloggingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::GetLoggingConfigurationResponse
 * \brief The GetLoggingConfigurationResponse class provides an interace for Waf GetLoggingConfiguration responses.
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
 * \sa WafClient::getLoggingConfiguration
 */

/*!
 * Constructs a GetLoggingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLoggingConfigurationResponse::GetLoggingConfigurationResponse(
        const GetLoggingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new GetLoggingConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetLoggingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLoggingConfigurationRequest * GetLoggingConfigurationResponse::request() const
{
    Q_D(const GetLoggingConfigurationResponse);
    return static_cast<const GetLoggingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Waf GetLoggingConfiguration \a response.
 */
void GetLoggingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLoggingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Waf::GetLoggingConfigurationResponsePrivate
 * \brief The GetLoggingConfigurationResponsePrivate class provides private implementation for GetLoggingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a GetLoggingConfigurationResponsePrivate object with public implementation \a q.
 */
GetLoggingConfigurationResponsePrivate::GetLoggingConfigurationResponsePrivate(
    GetLoggingConfigurationResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a Waf GetLoggingConfiguration response element from \a xml.
 */
void GetLoggingConfigurationResponsePrivate::parseGetLoggingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Waf
} // namespace QtAws
