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

#include "increasereplicationfactorresponse.h"
#include "increasereplicationfactorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::IncreaseReplicationFactorResponse
 * \brief The IncreaseReplicationFactorResponse class provides an interace for DAX IncreaseReplicationFactor responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::increaseReplicationFactor
 */

/*!
 * Constructs a IncreaseReplicationFactorResponse object for \a reply to \a request, with parent \a parent.
 */
IncreaseReplicationFactorResponse::IncreaseReplicationFactorResponse(
        const IncreaseReplicationFactorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new IncreaseReplicationFactorResponsePrivate(this), parent)
{
    setRequest(new IncreaseReplicationFactorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IncreaseReplicationFactorRequest * IncreaseReplicationFactorResponse::request() const
{
    Q_D(const IncreaseReplicationFactorResponse);
    return static_cast<const IncreaseReplicationFactorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX IncreaseReplicationFactor \a response.
 */
void IncreaseReplicationFactorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(IncreaseReplicationFactorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::IncreaseReplicationFactorResponsePrivate
 * \brief The IncreaseReplicationFactorResponsePrivate class provides private implementation for IncreaseReplicationFactorResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a IncreaseReplicationFactorResponsePrivate object with public implementation \a q.
 */
IncreaseReplicationFactorResponsePrivate::IncreaseReplicationFactorResponsePrivate(
    IncreaseReplicationFactorResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX IncreaseReplicationFactor response element from \a xml.
 */
void IncreaseReplicationFactorResponsePrivate::parseIncreaseReplicationFactorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IncreaseReplicationFactorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
