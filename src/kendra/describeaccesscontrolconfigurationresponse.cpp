// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccesscontrolconfigurationresponse.h"
#include "describeaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationResponse
 * \brief The DescribeAccessControlConfigurationResponse class provides an interace for Kendra DescribeAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeAccessControlConfiguration
 */

/*!
 * Constructs a DescribeAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccessControlConfigurationResponse::DescribeAccessControlConfigurationResponse(
        const DescribeAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccessControlConfigurationRequest * DescribeAccessControlConfigurationResponse::request() const
{
    Q_D(const DescribeAccessControlConfigurationResponse);
    return static_cast<const DescribeAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeAccessControlConfiguration \a response.
 */
void DescribeAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationResponsePrivate
 * \brief The DescribeAccessControlConfigurationResponsePrivate class provides private implementation for DescribeAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeAccessControlConfigurationResponsePrivate::DescribeAccessControlConfigurationResponsePrivate(
    DescribeAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeAccessControlConfiguration response element from \a xml.
 */
void DescribeAccessControlConfigurationResponsePrivate::parseDescribeAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
