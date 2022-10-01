// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappversiontemplateresponse.h"
#include "describeappversiontemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionTemplateResponse
 * \brief The DescribeAppVersionTemplateResponse class provides an interace for ResilienceHub DescribeAppVersionTemplate responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeAppVersionTemplate
 */

/*!
 * Constructs a DescribeAppVersionTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppVersionTemplateResponse::DescribeAppVersionTemplateResponse(
        const DescribeAppVersionTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DescribeAppVersionTemplateResponsePrivate(this), parent)
{
    setRequest(new DescribeAppVersionTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppVersionTemplateRequest * DescribeAppVersionTemplateResponse::request() const
{
    Q_D(const DescribeAppVersionTemplateResponse);
    return static_cast<const DescribeAppVersionTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DescribeAppVersionTemplate \a response.
 */
void DescribeAppVersionTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppVersionTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionTemplateResponsePrivate
 * \brief The DescribeAppVersionTemplateResponsePrivate class provides private implementation for DescribeAppVersionTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppVersionTemplateResponsePrivate object with public implementation \a q.
 */
DescribeAppVersionTemplateResponsePrivate::DescribeAppVersionTemplateResponsePrivate(
    DescribeAppVersionTemplateResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DescribeAppVersionTemplate response element from \a xml.
 */
void DescribeAppVersionTemplateResponsePrivate::parseDescribeAppVersionTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppVersionTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
