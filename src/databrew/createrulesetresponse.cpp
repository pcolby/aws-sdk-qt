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

#include "createrulesetresponse.h"
#include "createrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateRulesetResponse
 * \brief The CreateRulesetResponse class provides an interace for DataBrew CreateRuleset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createRuleset
 */

/*!
 * Constructs a CreateRulesetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRulesetResponse::CreateRulesetResponse(
        const CreateRulesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new CreateRulesetResponsePrivate(this), parent)
{
    setRequest(new CreateRulesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRulesetRequest * CreateRulesetResponse::request() const
{
    Q_D(const CreateRulesetResponse);
    return static_cast<const CreateRulesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew CreateRuleset \a response.
 */
void CreateRulesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRulesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::CreateRulesetResponsePrivate
 * \brief The CreateRulesetResponsePrivate class provides private implementation for CreateRulesetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateRulesetResponsePrivate object with public implementation \a q.
 */
CreateRulesetResponsePrivate::CreateRulesetResponsePrivate(
    CreateRulesetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew CreateRuleset response element from \a xml.
 */
void CreateRulesetResponsePrivate::parseCreateRulesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRulesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
