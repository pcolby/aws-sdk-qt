// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
