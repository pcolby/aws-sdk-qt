// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevcenterclientsresponse.h"
#include "describevcenterclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeVcenterClientsResponse
 * \brief The DescribeVcenterClientsResponse class provides an interace for Mgn DescribeVcenterClients responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeVcenterClients
 */

/*!
 * Constructs a DescribeVcenterClientsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVcenterClientsResponse::DescribeVcenterClientsResponse(
        const DescribeVcenterClientsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DescribeVcenterClientsResponsePrivate(this), parent)
{
    setRequest(new DescribeVcenterClientsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVcenterClientsRequest * DescribeVcenterClientsResponse::request() const
{
    Q_D(const DescribeVcenterClientsResponse);
    return static_cast<const DescribeVcenterClientsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DescribeVcenterClients \a response.
 */
void DescribeVcenterClientsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVcenterClientsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DescribeVcenterClientsResponsePrivate
 * \brief The DescribeVcenterClientsResponsePrivate class provides private implementation for DescribeVcenterClientsResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeVcenterClientsResponsePrivate object with public implementation \a q.
 */
DescribeVcenterClientsResponsePrivate::DescribeVcenterClientsResponsePrivate(
    DescribeVcenterClientsResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DescribeVcenterClients response element from \a xml.
 */
void DescribeVcenterClientsResponsePrivate::parseDescribeVcenterClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVcenterClientsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
