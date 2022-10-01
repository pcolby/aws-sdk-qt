// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserprofileresponse.h"
#include "describeuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::DescribeUserProfileResponse
 * \brief The DescribeUserProfileResponse class provides an interace for CodeStar DescribeUserProfile responses.
 *
 * \inmodule QtAwsCodeStar
 *
 *  <fullname>AWS CodeStar</fullname>
 * 
 *  This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 *  the AWS CodeStar API along with usage
 * 
 *  examples>
 * 
 *  You can use the AWS CodeStar API to work
 * 
 *  with>
 * 
 *  Projects and their resources, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>DeleteProject</code>, which deletes a
 * 
 *  project> </li> <li>
 * 
 *  <code>DescribeProject</code>, which lists the attributes of a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListProjects</code>, which lists all projects associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <code>ListResources</code>, which lists the resources associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTagsForProject</code>, which lists the tags associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>TagProject</code>, which adds tags to a
 * 
 *  project> </li> <li>
 * 
 *  <code>UntagProject</code>, which removes tags from a
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>, which updates the attributes of a
 * 
 *  project> </li> </ul>
 * 
 *  Teams and team members, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 * 
 *  attributes> </li> <li>
 * 
 *  <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 * 
 *  project> </li> </ul>
 * 
 *  Users, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DeleteUserProfile</code>, which deletes all user profile information across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DescribeUserProfile</code>, which describes the profile of a
 * 
 *  user> </li> <li>
 * 
 *  <code>ListUserProfiles</code>, which lists all user
 * 
 *  profiles> </li> <li>
 * 
 *  <code>UpdateUserProfile</code>, which updates the profile for a
 *
 * \sa CodeStarClient::describeUserProfile
 */

/*!
 * Constructs a DescribeUserProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserProfileResponse::DescribeUserProfileResponse(
        const DescribeUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new DescribeUserProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeUserProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserProfileRequest * DescribeUserProfileResponse::request() const
{
    Q_D(const DescribeUserProfileResponse);
    return static_cast<const DescribeUserProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeStar DescribeUserProfile \a response.
 */
void DescribeUserProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeStar::DescribeUserProfileResponsePrivate
 * \brief The DescribeUserProfileResponsePrivate class provides private implementation for DescribeUserProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a DescribeUserProfileResponsePrivate object with public implementation \a q.
 */
DescribeUserProfileResponsePrivate::DescribeUserProfileResponsePrivate(
    DescribeUserProfileResponse * const q) : CodeStarResponsePrivate(q)
{

}

/*!
 * Parses a CodeStar DescribeUserProfile response element from \a xml.
 */
void DescribeUserProfileResponsePrivate::parseDescribeUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeStar
} // namespace QtAws
