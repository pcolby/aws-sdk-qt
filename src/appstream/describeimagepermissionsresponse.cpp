// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagepermissionsresponse.h"
#include "describeimagepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImagePermissionsResponse
 * \brief The DescribeImagePermissionsResponse class provides an interace for AppStream DescribeImagePermissions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::describeImagePermissions
 */

/*!
 * Constructs a DescribeImagePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImagePermissionsResponse::DescribeImagePermissionsResponse(
        const DescribeImagePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeImagePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeImagePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImagePermissionsRequest * DescribeImagePermissionsResponse::request() const
{
    Q_D(const DescribeImagePermissionsResponse);
    return static_cast<const DescribeImagePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeImagePermissions \a response.
 */
void DescribeImagePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImagePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeImagePermissionsResponsePrivate
 * \brief The DescribeImagePermissionsResponsePrivate class provides private implementation for DescribeImagePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeImagePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeImagePermissionsResponsePrivate::DescribeImagePermissionsResponsePrivate(
    DescribeImagePermissionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeImagePermissions response element from \a xml.
 */
void DescribeImagePermissionsResponsePrivate::parseDescribeImagePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImagePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
