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

#include "createparametergroupresponse.h"
#include "createparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::CreateParameterGroupResponse
 * \brief The CreateParameterGroupResponse class provides an interace for DAX CreateParameterGroup responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createParameterGroup
 */

/*!
 * Constructs a CreateParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateParameterGroupResponse::CreateParameterGroupResponse(
        const CreateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new CreateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateParameterGroupRequest * CreateParameterGroupResponse::request() const
{
    return static_cast<const CreateParameterGroupRequest *>(DaxResponse::request());
}

/*!
 * \reimp
 * Parses a successful DAX CreateParameterGroup \a response.
 */
void CreateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::CreateParameterGroupResponsePrivate
 * \brief The CreateParameterGroupResponsePrivate class provides private implementation for CreateParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a CreateParameterGroupResponsePrivate object with public implementation \a q.
 */
CreateParameterGroupResponsePrivate::CreateParameterGroupResponsePrivate(
    CreateParameterGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX CreateParameterGroup response element from \a xml.
 */
void CreateParameterGroupResponsePrivate::parseCreateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
