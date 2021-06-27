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

#include "listentitiesdetectionv2jobsresponse.h"
#include "listentitiesdetectionv2jobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListEntitiesDetectionV2JobsResponse
 * \brief The ListEntitiesDetectionV2JobsResponse class provides an interace for ComprehendMedical ListEntitiesDetectionV2Jobs responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::listEntitiesDetectionV2Jobs
 */

/*!
 * Constructs a ListEntitiesDetectionV2JobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitiesDetectionV2JobsResponse::ListEntitiesDetectionV2JobsResponse(
        const ListEntitiesDetectionV2JobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new ListEntitiesDetectionV2JobsResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesDetectionV2JobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitiesDetectionV2JobsRequest * ListEntitiesDetectionV2JobsResponse::request() const
{
    return static_cast<const ListEntitiesDetectionV2JobsRequest *>(ComprehendMedicalResponse::request());
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical ListEntitiesDetectionV2Jobs \a response.
 */
void ListEntitiesDetectionV2JobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitiesDetectionV2JobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::ListEntitiesDetectionV2JobsResponsePrivate
 * \brief The ListEntitiesDetectionV2JobsResponsePrivate class provides private implementation for ListEntitiesDetectionV2JobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListEntitiesDetectionV2JobsResponsePrivate object with public implementation \a q.
 */
ListEntitiesDetectionV2JobsResponsePrivate::ListEntitiesDetectionV2JobsResponsePrivate(
    ListEntitiesDetectionV2JobsResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical ListEntitiesDetectionV2Jobs response element from \a xml.
 */
void ListEntitiesDetectionV2JobsResponsePrivate::parseListEntitiesDetectionV2JobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesDetectionV2JobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
