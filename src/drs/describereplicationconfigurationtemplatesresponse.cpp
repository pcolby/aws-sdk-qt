// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationconfigurationtemplatesresponse.h"
#include "describereplicationconfigurationtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeReplicationConfigurationTemplatesResponse
 * \brief The DescribeReplicationConfigurationTemplatesResponse class provides an interace for Drs DescribeReplicationConfigurationTemplates responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeReplicationConfigurationTemplates
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationConfigurationTemplatesResponse::DescribeReplicationConfigurationTemplatesResponse(
        const DescribeReplicationConfigurationTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DescribeReplicationConfigurationTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationConfigurationTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationConfigurationTemplatesRequest * DescribeReplicationConfigurationTemplatesResponse::request() const
{
    Q_D(const DescribeReplicationConfigurationTemplatesResponse);
    return static_cast<const DescribeReplicationConfigurationTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DescribeReplicationConfigurationTemplates \a response.
 */
void DescribeReplicationConfigurationTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationConfigurationTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DescribeReplicationConfigurationTemplatesResponsePrivate
 * \brief The DescribeReplicationConfigurationTemplatesResponsePrivate class provides private implementation for DescribeReplicationConfigurationTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesResponsePrivate object with public implementation \a q.
 */
DescribeReplicationConfigurationTemplatesResponsePrivate::DescribeReplicationConfigurationTemplatesResponsePrivate(
    DescribeReplicationConfigurationTemplatesResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DescribeReplicationConfigurationTemplates response element from \a xml.
 */
void DescribeReplicationConfigurationTemplatesResponsePrivate::parseDescribeReplicationConfigurationTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationConfigurationTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
