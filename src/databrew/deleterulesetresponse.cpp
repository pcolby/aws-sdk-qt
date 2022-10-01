// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterulesetresponse.h"
#include "deleterulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteRulesetResponse
 * \brief The DeleteRulesetResponse class provides an interace for DataBrew DeleteRuleset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteRuleset
 */

/*!
 * Constructs a DeleteRulesetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRulesetResponse::DeleteRulesetResponse(
        const DeleteRulesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DeleteRulesetResponsePrivate(this), parent)
{
    setRequest(new DeleteRulesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRulesetRequest * DeleteRulesetResponse::request() const
{
    Q_D(const DeleteRulesetResponse);
    return static_cast<const DeleteRulesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DeleteRuleset \a response.
 */
void DeleteRulesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRulesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DeleteRulesetResponsePrivate
 * \brief The DeleteRulesetResponsePrivate class provides private implementation for DeleteRulesetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteRulesetResponsePrivate object with public implementation \a q.
 */
DeleteRulesetResponsePrivate::DeleteRulesetResponsePrivate(
    DeleteRulesetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DeleteRuleset response element from \a xml.
 */
void DeleteRulesetResponsePrivate::parseDeleteRulesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRulesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
