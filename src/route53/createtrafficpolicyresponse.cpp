/*
    Copyright 2013-2018 Paul Colby

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

#include "createtrafficpolicyresponse.h"
#include "createtrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyResponse
 * \brief The CreateTrafficPolicyResponse class provides an interace for Route53 CreateTrafficPolicy responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createTrafficPolicy
 */

/*!
 * Constructs a CreateTrafficPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficPolicyResponse::CreateTrafficPolicyResponse(
        const CreateTrafficPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficPolicyRequest * CreateTrafficPolicyResponse::request() const
{
    Q_D(const CreateTrafficPolicyResponse);
    return static_cast<const CreateTrafficPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateTrafficPolicy \a response.
 */
void CreateTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrafficPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyResponsePrivate
 * \brief The CreateTrafficPolicyResponsePrivate class provides private implementation for CreateTrafficPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyResponsePrivate object with public implementation \a q.
 */
CreateTrafficPolicyResponsePrivate::CreateTrafficPolicyResponsePrivate(
    CreateTrafficPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateTrafficPolicy response element from \a xml.
 */
void CreateTrafficPolicyResponsePrivate::parseCreateTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
