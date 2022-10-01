/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listenvironmentsresponse.h"
#include "listenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::ListEnvironmentsResponse
 * \brief The ListEnvironmentsResponse class provides an interace for Cloud9 ListEnvironments responses.
 *
 * \inmodule QtAwsCloud9
 *
 *  <fullname>Cloud9</fullname>
 * 
 *  Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 * 
 *  cloud>
 * 
 *  For more information about Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
 * 
 *  Guide</a>>
 * 
 *  Cloud9 supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment, launches an Amazon EC2 instance, and then
 *  connects from the instance to the
 * 
 *  environment> </li> <li>
 * 
 *  <code>CreateEnvironmentMembership</code>: Adds an environment member to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2 instance is connected to the environment, also
 *  terminates the
 * 
 *  instance> </li> <li>
 * 
 *  <code>DeleteEnvironmentMembership</code>: Deletes an environment member from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironmentMemberships</code>: Gets information about environment members for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironments</code>: Gets information about
 * 
 *  environments> </li> <li>
 * 
 *  <code>DescribeEnvironmentStatus</code>: Gets status information for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>ListEnvironments</code>: Gets a list of environment
 * 
 *  identifiers> </li> <li>
 * 
 *  <code>ListTagsForResource</code>: Gets the tags for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>TagResource</code>: Adds tags to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UntagResource</code>: Removes tags from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironment</code>: Changes the settings of an existing
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironmentMembership</code>: Changes the settings of an existing environment member for an
 *
 * \sa Cloud9Client::listEnvironments
 */

/*!
 * Constructs a ListEnvironmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEnvironmentsResponse::ListEnvironmentsResponse(
        const ListEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new ListEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ListEnvironmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEnvironmentsRequest * ListEnvironmentsResponse::request() const
{
    Q_D(const ListEnvironmentsResponse);
    return static_cast<const ListEnvironmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Cloud9 ListEnvironments \a response.
 */
void ListEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Cloud9::ListEnvironmentsResponsePrivate
 * \brief The ListEnvironmentsResponsePrivate class provides private implementation for ListEnvironmentsResponse.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a ListEnvironmentsResponsePrivate object with public implementation \a q.
 */
ListEnvironmentsResponsePrivate::ListEnvironmentsResponsePrivate(
    ListEnvironmentsResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/*!
 * Parses a Cloud9 ListEnvironments response element from \a xml.
 */
void ListEnvironmentsResponsePrivate::parseListEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEnvironmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Cloud9
} // namespace QtAws
