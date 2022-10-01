// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedefaultparametersresponse.h"
#include "describedefaultparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeDefaultParametersResponse
 * \brief The DescribeDefaultParametersResponse class provides an interace for Dax DescribeDefaultParameters responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeDefaultParameters
 */

/*!
 * Constructs a DescribeDefaultParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDefaultParametersResponse::DescribeDefaultParametersResponse(
        const DescribeDefaultParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DescribeDefaultParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDefaultParametersRequest * DescribeDefaultParametersResponse::request() const
{
    Q_D(const DescribeDefaultParametersResponse);
    return static_cast<const DescribeDefaultParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DescribeDefaultParameters \a response.
 */
void DescribeDefaultParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDefaultParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DescribeDefaultParametersResponsePrivate
 * \brief The DescribeDefaultParametersResponsePrivate class provides private implementation for DescribeDefaultParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeDefaultParametersResponsePrivate object with public implementation \a q.
 */
DescribeDefaultParametersResponsePrivate::DescribeDefaultParametersResponsePrivate(
    DescribeDefaultParametersResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DescribeDefaultParameters response element from \a xml.
 */
void DescribeDefaultParametersResponsePrivate::parseDescribeDefaultParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
