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

#include "evaluatemappingtemplateresponse.h"
#include "evaluatemappingtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::EvaluateMappingTemplateResponse
 * \brief The EvaluateMappingTemplateResponse class provides an interace for AppSync EvaluateMappingTemplate responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::evaluateMappingTemplate
 */

/*!
 * Constructs a EvaluateMappingTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
EvaluateMappingTemplateResponse::EvaluateMappingTemplateResponse(
        const EvaluateMappingTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new EvaluateMappingTemplateResponsePrivate(this), parent)
{
    setRequest(new EvaluateMappingTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EvaluateMappingTemplateRequest * EvaluateMappingTemplateResponse::request() const
{
    Q_D(const EvaluateMappingTemplateResponse);
    return static_cast<const EvaluateMappingTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync EvaluateMappingTemplate \a response.
 */
void EvaluateMappingTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EvaluateMappingTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::EvaluateMappingTemplateResponsePrivate
 * \brief The EvaluateMappingTemplateResponsePrivate class provides private implementation for EvaluateMappingTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a EvaluateMappingTemplateResponsePrivate object with public implementation \a q.
 */
EvaluateMappingTemplateResponsePrivate::EvaluateMappingTemplateResponsePrivate(
    EvaluateMappingTemplateResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync EvaluateMappingTemplate response element from \a xml.
 */
void EvaluateMappingTemplateResponsePrivate::parseEvaluateMappingTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EvaluateMappingTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
