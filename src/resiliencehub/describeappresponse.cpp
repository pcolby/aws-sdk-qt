// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappresponse.h"
#include "describeappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppResponse
 * \brief The DescribeAppResponse class provides an interace for ResilienceHub DescribeApp responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeApp
 */

/*!
 * Constructs a DescribeAppResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppResponse::DescribeAppResponse(
        const DescribeAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DescribeAppResponsePrivate(this), parent)
{
    setRequest(new DescribeAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppRequest * DescribeAppResponse::request() const
{
    Q_D(const DescribeAppResponse);
    return static_cast<const DescribeAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DescribeApp \a response.
 */
void DescribeAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppResponsePrivate
 * \brief The DescribeAppResponsePrivate class provides private implementation for DescribeAppResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppResponsePrivate object with public implementation \a q.
 */
DescribeAppResponsePrivate::DescribeAppResponsePrivate(
    DescribeAppResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DescribeApp response element from \a xml.
 */
void DescribeAppResponsePrivate::parseDescribeAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
