// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeparametersresponse.h"
#include "describeparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeParametersResponse
 * \brief The DescribeParametersResponse class provides an interace for Dax DescribeParameters responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeParameters
 */

/*!
 * Constructs a DescribeParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeParametersResponse::DescribeParametersResponse(
        const DescribeParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DescribeParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeParametersRequest * DescribeParametersResponse::request() const
{
    Q_D(const DescribeParametersResponse);
    return static_cast<const DescribeParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DescribeParameters \a response.
 */
void DescribeParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DescribeParametersResponsePrivate
 * \brief The DescribeParametersResponsePrivate class provides private implementation for DescribeParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeParametersResponsePrivate object with public implementation \a q.
 */
DescribeParametersResponsePrivate::DescribeParametersResponsePrivate(
    DescribeParametersResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DescribeParameters response element from \a xml.
 */
void DescribeParametersResponsePrivate::parseDescribeParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
