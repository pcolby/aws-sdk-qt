// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "declinehandshakeresponse.h"
#include "declinehandshakeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/*!
 * \class QtAws::Organizations::DeclineHandshakeResponse
 * \brief The DeclineHandshakeResponse class provides an interace for Organizations DeclineHandshake responses.
 *
 * \inmodule QtAwsOrganizations
 *
 *  Organizations is a web service that enables you to consolidate your multiple Amazon Web Services accounts into an
 *  <i>organization</i> and centrally manage your accounts and their
 * 
 *  resources>
 * 
 *  This guide provides descriptions of the Organizations operations. For more information about using this service, see the
 *  <a href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">Organizations User
 * 
 *  Guide</a>>
 * 
 *  <b>Support and feedback for Organizations</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a> or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=219">Organizations support forum</a>. For more
 *  information about the Amazon Web Services support forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Endpoint to call When using the CLI or the Amazon Web Services SDK</b>
 * 
 *  </p
 * 
 *  For the current release of Organizations, specify the <code>us-east-1</code> region for all Amazon Web Services API and
 *  CLI calls made from the commercial Amazon Web Services Regions outside of China. If calling from one of the Amazon Web
 *  Services Regions in China, then specify <code>cn-northwest-1</code>. You can do this in the CLI by using these
 *  parameters and
 * 
 *  commands> <ul> <li>
 * 
 *  Use the following parameter with each command to specify both the endpoint and its
 * 
 *  region>
 * 
 *  <code>--endpoint-url https://organizations.us-east-1.amazonaws.com</code> <i>(from commercial Amazon Web Services
 *  Regions outside of China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>--endpoint-url https://organizations.cn-northwest-1.amazonaws.com.cn</code> <i>(from Amazon Web Services Regions
 *  in China)</i>
 * 
 *  </p </li> <li>
 * 
 *  Use the default endpoint, but configure your default region with this
 * 
 *  command>
 * 
 *  <code>aws configure set default.region us-east-1</code> <i>(from commercial Amazon Web Services Regions outside of
 *  China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>aws configure set default.region cn-northwest-1</code> <i>(from Amazon Web Services Regions in China)</i>
 * 
 *  </p </li> <li>
 * 
 *  Use the following parameter with each command to specify the
 * 
 *  endpoint>
 * 
 *  <code>--region us-east-1</code> <i>(from commercial Amazon Web Services Regions outside of China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>--region cn-northwest-1</code> <i>(from Amazon Web Services Regions in China)</i>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  Organizations supports CloudTrail, a service that records Amazon Web Services API calls for your Amazon Web Services
 *  account and delivers log files to an Amazon S3 bucket. By using information collected by CloudTrail, you can determine
 *  which requests the Organizations service received, who made the request and when, and so on. For more about
 *  Organizations and its support for CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_incident-response.html#orgs_cloudtrail-integration">Logging
 *  Organizations Events with CloudTrail</a> in the <i>Organizations User Guide</i>. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">CloudTrail User
 *
 * \sa OrganizationsClient::declineHandshake
 */

/*!
 * Constructs a DeclineHandshakeResponse object for \a reply to \a request, with parent \a parent.
 */
DeclineHandshakeResponse::DeclineHandshakeResponse(
        const DeclineHandshakeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DeclineHandshakeResponsePrivate(this), parent)
{
    setRequest(new DeclineHandshakeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeclineHandshakeRequest * DeclineHandshakeResponse::request() const
{
    Q_D(const DeclineHandshakeResponse);
    return static_cast<const DeclineHandshakeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Organizations DeclineHandshake \a response.
 */
void DeclineHandshakeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeclineHandshakeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Organizations::DeclineHandshakeResponsePrivate
 * \brief The DeclineHandshakeResponsePrivate class provides private implementation for DeclineHandshakeResponse.
 * \internal
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a DeclineHandshakeResponsePrivate object with public implementation \a q.
 */
DeclineHandshakeResponsePrivate::DeclineHandshakeResponsePrivate(
    DeclineHandshakeResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/*!
 * Parses a Organizations DeclineHandshake response element from \a xml.
 */
void DeclineHandshakeResponsePrivate::parseDeclineHandshakeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeclineHandshakeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Organizations
} // namespace QtAws
