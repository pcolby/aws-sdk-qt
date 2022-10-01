// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesourceserversresponse.h"
#include "describesourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeSourceServersResponse
 * \brief The DescribeSourceServersResponse class provides an interace for Drs DescribeSourceServers responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeSourceServers
 */

/*!
 * Constructs a DescribeSourceServersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSourceServersResponse::DescribeSourceServersResponse(
        const DescribeSourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DescribeSourceServersResponsePrivate(this), parent)
{
    setRequest(new DescribeSourceServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSourceServersRequest * DescribeSourceServersResponse::request() const
{
    Q_D(const DescribeSourceServersResponse);
    return static_cast<const DescribeSourceServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DescribeSourceServers \a response.
 */
void DescribeSourceServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSourceServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DescribeSourceServersResponsePrivate
 * \brief The DescribeSourceServersResponsePrivate class provides private implementation for DescribeSourceServersResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeSourceServersResponsePrivate object with public implementation \a q.
 */
DescribeSourceServersResponsePrivate::DescribeSourceServersResponsePrivate(
    DescribeSourceServersResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DescribeSourceServers response element from \a xml.
 */
void DescribeSourceServersResponsePrivate::parseDescribeSourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSourceServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
