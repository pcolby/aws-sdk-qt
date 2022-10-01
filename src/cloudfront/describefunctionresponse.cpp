// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefunctionresponse.h"
#include "describefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DescribeFunctionResponse
 * \brief The DescribeFunctionResponse class provides an interace for CloudFront DescribeFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::describeFunction
 */

/*!
 * Constructs a DescribeFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFunctionResponse::DescribeFunctionResponse(
        const DescribeFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DescribeFunctionResponsePrivate(this), parent)
{
    setRequest(new DescribeFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFunctionRequest * DescribeFunctionResponse::request() const
{
    Q_D(const DescribeFunctionResponse);
    return static_cast<const DescribeFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DescribeFunction \a response.
 */
void DescribeFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DescribeFunctionResponsePrivate
 * \brief The DescribeFunctionResponsePrivate class provides private implementation for DescribeFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DescribeFunctionResponsePrivate object with public implementation \a q.
 */
DescribeFunctionResponsePrivate::DescribeFunctionResponsePrivate(
    DescribeFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DescribeFunction response element from \a xml.
 */
void DescribeFunctionResponsePrivate::parseDescribeFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
