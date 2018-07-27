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

#include "createclusterresponse.h"
#include "createclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::CreateClusterResponse
 * \brief The CreateClusterResponse class provides an interace for DAX CreateCluster responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createCluster
 */

/*!
 * Constructs a CreateClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateClusterResponse::CreateClusterResponse(
        const CreateClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new CreateClusterResponsePrivate(this), parent)
{
    setRequest(new CreateClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateClusterRequest * CreateClusterResponse::request() const
{
    Q_D(const CreateClusterResponse);
    return static_cast<const CreateClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX CreateCluster \a response.
 */
void CreateClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::CreateClusterResponsePrivate
 * \brief The CreateClusterResponsePrivate class provides private implementation for CreateClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a CreateClusterResponsePrivate object with public implementation \a q.
 */
CreateClusterResponsePrivate::CreateClusterResponsePrivate(
    CreateClusterResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX CreateCluster response element from \a xml.
 */
void CreateClusterResponsePrivate::parseCreateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
