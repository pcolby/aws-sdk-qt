// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompliancedetailsbyconfigruleresponse.h"
#include "getcompliancedetailsbyconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::GetComplianceDetailsByConfigRuleResponse
 * \brief The GetComplianceDetailsByConfigRuleResponse class provides an interace for ConfigService GetComplianceDetailsByConfigRule responses.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>Config</fullname>
 * 
 *  Config provides a way to keep track of the configurations of all the Amazon Web Services resources associated with your
 *  Amazon Web Services account. You can use Config to get the current and historical configurations of each Amazon Web
 *  Services resource and also to get information about the relationship between the resources. An Amazon Web Services
 *  resource can be an Amazon Compute Cloud (Amazon EC2) instance, an Elastic Block Store (EBS) volume, an elastic network
 *  Interface (ENI), or a security group. For a complete list of resources currently supported by Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  Amazon Web Services
 * 
 *  resources</a>>
 * 
 *  You can access and manage Config through the Amazon Web Services Management Console, the Amazon Web Services Command
 *  Line Interface (Amazon Web Services CLI), the Config API, or the Amazon Web Services SDKs for Config. This reference
 *  guide contains documentation for the Config API and the Amazon Web Services CLI commands that you can use to manage
 *  Config. The Config API uses the Signature Version 4 protocol for signing requests. For more information about how to
 *  sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about Config features and their associated actions or commands, as well as how to work with
 *  Amazon Web Services Management Console, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is Config</a> in the <i>Config
 *  Developer
 *
 * \sa ConfigServiceClient::getComplianceDetailsByConfigRule
 */

/*!
 * Constructs a GetComplianceDetailsByConfigRuleResponse object for \a reply to \a request, with parent \a parent.
 */
GetComplianceDetailsByConfigRuleResponse::GetComplianceDetailsByConfigRuleResponse(
        const GetComplianceDetailsByConfigRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetComplianceDetailsByConfigRuleResponsePrivate(this), parent)
{
    setRequest(new GetComplianceDetailsByConfigRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComplianceDetailsByConfigRuleRequest * GetComplianceDetailsByConfigRuleResponse::request() const
{
    Q_D(const GetComplianceDetailsByConfigRuleResponse);
    return static_cast<const GetComplianceDetailsByConfigRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConfigService GetComplianceDetailsByConfigRule \a response.
 */
void GetComplianceDetailsByConfigRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComplianceDetailsByConfigRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConfigService::GetComplianceDetailsByConfigRuleResponsePrivate
 * \brief The GetComplianceDetailsByConfigRuleResponsePrivate class provides private implementation for GetComplianceDetailsByConfigRuleResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a GetComplianceDetailsByConfigRuleResponsePrivate object with public implementation \a q.
 */
GetComplianceDetailsByConfigRuleResponsePrivate::GetComplianceDetailsByConfigRuleResponsePrivate(
    GetComplianceDetailsByConfigRuleResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/*!
 * Parses a ConfigService GetComplianceDetailsByConfigRule response element from \a xml.
 */
void GetComplianceDetailsByConfigRuleResponsePrivate::parseGetComplianceDetailsByConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceDetailsByConfigRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConfigService
} // namespace QtAws
