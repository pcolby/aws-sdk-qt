// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloggingconfigurationresponse.h"
#include "describeloggingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeLoggingConfigurationResponse
 * \brief The DescribeLoggingConfigurationResponse class provides an interace for Amp DescribeLoggingConfiguration responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeLoggingConfiguration
 */

/*!
 * Constructs a DescribeLoggingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoggingConfigurationResponse::DescribeLoggingConfigurationResponse(
        const DescribeLoggingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DescribeLoggingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeLoggingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoggingConfigurationRequest * DescribeLoggingConfigurationResponse::request() const
{
    Q_D(const DescribeLoggingConfigurationResponse);
    return static_cast<const DescribeLoggingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DescribeLoggingConfiguration \a response.
 */
void DescribeLoggingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoggingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DescribeLoggingConfigurationResponsePrivate
 * \brief The DescribeLoggingConfigurationResponsePrivate class provides private implementation for DescribeLoggingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeLoggingConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeLoggingConfigurationResponsePrivate::DescribeLoggingConfigurationResponsePrivate(
    DescribeLoggingConfigurationResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DescribeLoggingConfiguration response element from \a xml.
 */
void DescribeLoggingConfigurationResponsePrivate::parseDescribeLoggingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoggingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
