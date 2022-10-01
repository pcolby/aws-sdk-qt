// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeoriginendpointresponse.h"
#include "describeoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointResponse
 * \brief The DescribeOriginEndpointResponse class provides an interace for MediaPackage DescribeOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeOriginEndpoint
 */

/*!
 * Constructs a DescribeOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOriginEndpointResponse::DescribeOriginEndpointResponse(
        const DescribeOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DescribeOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new DescribeOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOriginEndpointRequest * DescribeOriginEndpointResponse::request() const
{
    Q_D(const DescribeOriginEndpointResponse);
    return static_cast<const DescribeOriginEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DescribeOriginEndpoint \a response.
 */
void DescribeOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointResponsePrivate
 * \brief The DescribeOriginEndpointResponsePrivate class provides private implementation for DescribeOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeOriginEndpointResponsePrivate object with public implementation \a q.
 */
DescribeOriginEndpointResponsePrivate::DescribeOriginEndpointResponsePrivate(
    DescribeOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DescribeOriginEndpoint response element from \a xml.
 */
void DescribeOriginEndpointResponsePrivate::parseDescribeOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
