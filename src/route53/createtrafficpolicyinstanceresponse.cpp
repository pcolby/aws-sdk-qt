/*
    Copyright 2013-2019 Paul Colby

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

#include "createtrafficpolicyinstanceresponse.h"
#include "createtrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceResponse
 * \brief The CreateTrafficPolicyInstanceResponse class provides an interace for Route53 CreateTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createTrafficPolicyInstance
 */

/*!
 * Constructs a CreateTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficPolicyInstanceResponse::CreateTrafficPolicyInstanceResponse(
        const CreateTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficPolicyInstanceRequest * CreateTrafficPolicyInstanceResponse::request() const
{
    Q_D(const CreateTrafficPolicyInstanceResponse);
    return static_cast<const CreateTrafficPolicyInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateTrafficPolicyInstance \a response.
 */
void CreateTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceResponsePrivate
 * \brief The CreateTrafficPolicyInstanceResponsePrivate class provides private implementation for CreateTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
CreateTrafficPolicyInstanceResponsePrivate::CreateTrafficPolicyInstanceResponsePrivate(
    CreateTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateTrafficPolicyInstance response element from \a xml.
 */
void CreateTrafficPolicyInstanceResponsePrivate::parseCreateTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
