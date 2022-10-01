// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
