// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationsetresponse.h"
#include "describeconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeConfigurationSetResponse
 * \brief The DescribeConfigurationSetResponse class provides an interace for Ses DescribeConfigurationSet responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::describeConfigurationSet
 */

/*!
 * Constructs a DescribeConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationSetResponse::DescribeConfigurationSetResponse(
        const DescribeConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DescribeConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConfigurationSetRequest * DescribeConfigurationSetResponse::request() const
{
    Q_D(const DescribeConfigurationSetResponse);
    return static_cast<const DescribeConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DescribeConfigurationSet \a response.
 */
void DescribeConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DescribeConfigurationSetResponsePrivate
 * \brief The DescribeConfigurationSetResponsePrivate class provides private implementation for DescribeConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeConfigurationSetResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationSetResponsePrivate::DescribeConfigurationSetResponsePrivate(
    DescribeConfigurationSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DescribeConfigurationSet response element from \a xml.
 */
void DescribeConfigurationSetResponsePrivate::parseDescribeConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
