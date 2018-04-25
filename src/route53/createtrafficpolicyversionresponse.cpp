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

#include "createtrafficpolicyversionresponse.h"
#include "createtrafficpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionResponse
 * \brief The CreateTrafficPolicyVersionResponse class provides an interace for Route53 CreateTrafficPolicyVersion responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createTrafficPolicyVersion
 */

/*!
 * Constructs a CreateTrafficPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficPolicyVersionResponse::CreateTrafficPolicyVersionResponse(
        const CreateTrafficPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficPolicyVersionRequest * CreateTrafficPolicyVersionResponse::request() const
{
    Q_D(const CreateTrafficPolicyVersionResponse);
    return static_cast<const CreateTrafficPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateTrafficPolicyVersion \a response.
 */
void CreateTrafficPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrafficPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionResponsePrivate
 * \brief The CreateTrafficPolicyVersionResponsePrivate class provides private implementation for CreateTrafficPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyVersionResponsePrivate object with public implementation \a q.
 */
CreateTrafficPolicyVersionResponsePrivate::CreateTrafficPolicyVersionResponsePrivate(
    CreateTrafficPolicyVersionResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateTrafficPolicyVersion response element from \a xml.
 */
void CreateTrafficPolicyVersionResponsePrivate::parseCreateTrafficPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyVersionResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
