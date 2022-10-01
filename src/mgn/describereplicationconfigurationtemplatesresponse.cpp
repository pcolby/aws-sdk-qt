// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationconfigurationtemplatesresponse.h"
#include "describereplicationconfigurationtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeReplicationConfigurationTemplatesResponse
 * \brief The DescribeReplicationConfigurationTemplatesResponse class provides an interace for Mgn DescribeReplicationConfigurationTemplates responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeReplicationConfigurationTemplates
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationConfigurationTemplatesResponse::DescribeReplicationConfigurationTemplatesResponse(
        const DescribeReplicationConfigurationTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DescribeReplicationConfigurationTemplatesResponsePrivate(this), parent)
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
 * Parses a successful Mgn DescribeReplicationConfigurationTemplates \a response.
 */
void DescribeReplicationConfigurationTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationConfigurationTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DescribeReplicationConfigurationTemplatesResponsePrivate
 * \brief The DescribeReplicationConfigurationTemplatesResponsePrivate class provides private implementation for DescribeReplicationConfigurationTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesResponsePrivate object with public implementation \a q.
 */
DescribeReplicationConfigurationTemplatesResponsePrivate::DescribeReplicationConfigurationTemplatesResponsePrivate(
    DescribeReplicationConfigurationTemplatesResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DescribeReplicationConfigurationTemplates response element from \a xml.
 */
void DescribeReplicationConfigurationTemplatesResponsePrivate::parseDescribeReplicationConfigurationTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationConfigurationTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
