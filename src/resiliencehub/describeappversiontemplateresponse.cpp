/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
