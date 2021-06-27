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

#include "listexperimentsresponse.h"
#include "listexperimentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::ListExperimentsResponse
 * \brief The ListExperimentsResponse class provides an interace for FIS ListExperiments responses.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::listExperiments
 */

/*!
 * Constructs a ListExperimentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperimentsResponse::ListExperimentsResponse(
        const ListExperimentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new ListExperimentsResponsePrivate(this), parent)
{
    setRequest(new ListExperimentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperimentsRequest * ListExperimentsResponse::request() const
{
    return static_cast<const ListExperimentsRequest *>(FisResponse::request());
}

/*!
 * \reimp
 * Parses a successful FIS ListExperiments \a response.
 */
void ListExperimentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperimentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FIS::ListExperimentsResponsePrivate
 * \brief The ListExperimentsResponsePrivate class provides private implementation for ListExperimentsResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a ListExperimentsResponsePrivate object with public implementation \a q.
 */
ListExperimentsResponsePrivate::ListExperimentsResponsePrivate(
    ListExperimentsResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a FIS ListExperiments response element from \a xml.
 */
void ListExperimentsResponsePrivate::parseListExperimentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperimentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FIS
} // namespace QtAws
