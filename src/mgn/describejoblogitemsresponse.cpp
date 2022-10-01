// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejoblogitemsresponse.h"
#include "describejoblogitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeJobLogItemsResponse
 * \brief The DescribeJobLogItemsResponse class provides an interace for Mgn DescribeJobLogItems responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeJobLogItems
 */

/*!
 * Constructs a DescribeJobLogItemsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobLogItemsResponse::DescribeJobLogItemsResponse(
        const DescribeJobLogItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DescribeJobLogItemsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobLogItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobLogItemsRequest * DescribeJobLogItemsResponse::request() const
{
    Q_D(const DescribeJobLogItemsResponse);
    return static_cast<const DescribeJobLogItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DescribeJobLogItems \a response.
 */
void DescribeJobLogItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobLogItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DescribeJobLogItemsResponsePrivate
 * \brief The DescribeJobLogItemsResponsePrivate class provides private implementation for DescribeJobLogItemsResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeJobLogItemsResponsePrivate object with public implementation \a q.
 */
DescribeJobLogItemsResponsePrivate::DescribeJobLogItemsResponsePrivate(
    DescribeJobLogItemsResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DescribeJobLogItems response element from \a xml.
 */
void DescribeJobLogItemsResponsePrivate::parseDescribeJobLogItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobLogItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
