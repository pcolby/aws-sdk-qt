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

#include "updaterulesetresponse.h"
#include "updaterulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateRulesetResponse
 * \brief The UpdateRulesetResponse class provides an interace for DataBrew UpdateRuleset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateRuleset
 */

/*!
 * Constructs a UpdateRulesetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRulesetResponse::UpdateRulesetResponse(
        const UpdateRulesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new UpdateRulesetResponsePrivate(this), parent)
{
    setRequest(new UpdateRulesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRulesetRequest * UpdateRulesetResponse::request() const
{
    Q_D(const UpdateRulesetResponse);
    return static_cast<const UpdateRulesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew UpdateRuleset \a response.
 */
void UpdateRulesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRulesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::UpdateRulesetResponsePrivate
 * \brief The UpdateRulesetResponsePrivate class provides private implementation for UpdateRulesetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateRulesetResponsePrivate object with public implementation \a q.
 */
UpdateRulesetResponsePrivate::UpdateRulesetResponsePrivate(
    UpdateRulesetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew UpdateRuleset response element from \a xml.
 */
void UpdateRulesetResponsePrivate::parseUpdateRulesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRulesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
