// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentec2response.h"
#include "createenvironmentec2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::CreateEnvironmentEC2Response
 * \brief The CreateEnvironmentEC2Response class provides an interace for Cloud9 CreateEnvironmentEC2 responses.
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
 * \sa Cloud9Client::createEnvironmentEC2
 */

/*!
 * Constructs a CreateEnvironmentEC2Response object for \a reply to \a request, with parent \a parent.
 */
CreateEnvironmentEC2Response::CreateEnvironmentEC2Response(
        const CreateEnvironmentEC2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new CreateEnvironmentEC2ResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentEC2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEnvironmentEC2Request * CreateEnvironmentEC2Response::request() const
{
    Q_D(const CreateEnvironmentEC2Response);
    return static_cast<const CreateEnvironmentEC2Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Cloud9 CreateEnvironmentEC2 \a response.
 */
void CreateEnvironmentEC2Response::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEnvironmentEC2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Cloud9::CreateEnvironmentEC2ResponsePrivate
 * \brief The CreateEnvironmentEC2ResponsePrivate class provides private implementation for CreateEnvironmentEC2Response.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a CreateEnvironmentEC2ResponsePrivate object with public implementation \a q.
 */
CreateEnvironmentEC2ResponsePrivate::CreateEnvironmentEC2ResponsePrivate(
    CreateEnvironmentEC2Response * const q) : Cloud9ResponsePrivate(q)
{

}

/*!
 * Parses a Cloud9 CreateEnvironmentEC2 response element from \a xml.
 */
void CreateEnvironmentEC2ResponsePrivate::parseCreateEnvironmentEC2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentEC2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Cloud9
} // namespace QtAws
