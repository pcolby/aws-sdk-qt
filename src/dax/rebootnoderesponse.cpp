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

#include "rebootnoderesponse.h"
#include "rebootnoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::RebootNodeResponse
 * \brief The RebootNodeResponse class provides an interace for DAX RebootNode responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::rebootNode
 */

/*!
 * Constructs a RebootNodeResponse object for \a reply to \a request, with parent \a parent.
 */
RebootNodeResponse::RebootNodeResponse(
        const RebootNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new RebootNodeResponsePrivate(this), parent)
{
    setRequest(new RebootNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootNodeRequest * RebootNodeResponse::request() const
{
    Q_D(const RebootNodeResponse);
    return static_cast<const RebootNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX RebootNode \a response.
 */
void RebootNodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(RebootNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::RebootNodeResponsePrivate
 * \brief The RebootNodeResponsePrivate class provides private implementation for RebootNodeResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a RebootNodeResponsePrivate object with public implementation \a q.
 */
RebootNodeResponsePrivate::RebootNodeResponsePrivate(
    RebootNodeResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX RebootNode response element from \a xml.
 */
void RebootNodeResponsePrivate::parseRebootNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootNodeResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
