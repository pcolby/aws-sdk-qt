// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesecurityconfigurationresponse.h"
#include "describesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeSecurityConfigurationResponse
 * \brief The DescribeSecurityConfigurationResponse class provides an interace for Emr DescribeSecurityConfiguration responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeSecurityConfiguration
 */

/*!
 * Constructs a DescribeSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSecurityConfigurationResponse::DescribeSecurityConfigurationResponse(
        const DescribeSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSecurityConfigurationRequest * DescribeSecurityConfigurationResponse::request() const
{
    Q_D(const DescribeSecurityConfigurationResponse);
    return static_cast<const DescribeSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DescribeSecurityConfiguration \a response.
 */
void DescribeSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DescribeSecurityConfigurationResponsePrivate
 * \brief The DescribeSecurityConfigurationResponsePrivate class provides private implementation for DescribeSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeSecurityConfigurationResponsePrivate::DescribeSecurityConfigurationResponsePrivate(
    DescribeSecurityConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DescribeSecurityConfiguration response element from \a xml.
 */
void DescribeSecurityConfigurationResponsePrivate::parseDescribeSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
