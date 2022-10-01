// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
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
    Q_D(const ListEntitiesDetectionV2JobsResponse);
    return static_cast<const ListEntitiesDetectionV2JobsRequest *>(d->request);
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
