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

#include "adddraftappversionresourcemappingsresponse.h"
#include "adddraftappversionresourcemappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::AddDraftAppVersionResourceMappingsResponse
 * \brief The AddDraftAppVersionResourceMappingsResponse class provides an interace for ResilienceHub AddDraftAppVersionResourceMappings responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::addDraftAppVersionResourceMappings
 */

/*!
 * Constructs a AddDraftAppVersionResourceMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
AddDraftAppVersionResourceMappingsResponse::AddDraftAppVersionResourceMappingsResponse(
        const AddDraftAppVersionResourceMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new AddDraftAppVersionResourceMappingsResponsePrivate(this), parent)
{
    setRequest(new AddDraftAppVersionResourceMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddDraftAppVersionResourceMappingsRequest * AddDraftAppVersionResourceMappingsResponse::request() const
{
    Q_D(const AddDraftAppVersionResourceMappingsResponse);
    return static_cast<const AddDraftAppVersionResourceMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub AddDraftAppVersionResourceMappings \a response.
 */
void AddDraftAppVersionResourceMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddDraftAppVersionResourceMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::AddDraftAppVersionResourceMappingsResponsePrivate
 * \brief The AddDraftAppVersionResourceMappingsResponsePrivate class provides private implementation for AddDraftAppVersionResourceMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a AddDraftAppVersionResourceMappingsResponsePrivate object with public implementation \a q.
 */
AddDraftAppVersionResourceMappingsResponsePrivate::AddDraftAppVersionResourceMappingsResponsePrivate(
    AddDraftAppVersionResourceMappingsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub AddDraftAppVersionResourceMappings response element from \a xml.
 */
void AddDraftAppVersionResourceMappingsResponsePrivate::parseAddDraftAppVersionResourceMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddDraftAppVersionResourceMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
