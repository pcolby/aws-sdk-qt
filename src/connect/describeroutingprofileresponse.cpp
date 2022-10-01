// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeroutingprofileresponse.h"
#include "describeroutingprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeRoutingProfileResponse
 * \brief The DescribeRoutingProfileResponse class provides an interace for Connect DescribeRoutingProfile responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::describeRoutingProfile
 */

/*!
 * Constructs a DescribeRoutingProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRoutingProfileResponse::DescribeRoutingProfileResponse(
        const DescribeRoutingProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DescribeRoutingProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeRoutingProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRoutingProfileRequest * DescribeRoutingProfileResponse::request() const
{
    Q_D(const DescribeRoutingProfileResponse);
    return static_cast<const DescribeRoutingProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DescribeRoutingProfile \a response.
 */
void DescribeRoutingProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRoutingProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DescribeRoutingProfileResponsePrivate
 * \brief The DescribeRoutingProfileResponsePrivate class provides private implementation for DescribeRoutingProfileResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeRoutingProfileResponsePrivate object with public implementation \a q.
 */
DescribeRoutingProfileResponsePrivate::DescribeRoutingProfileResponsePrivate(
    DescribeRoutingProfileResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DescribeRoutingProfile response element from \a xml.
 */
void DescribeRoutingProfileResponsePrivate::parseDescribeRoutingProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRoutingProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
