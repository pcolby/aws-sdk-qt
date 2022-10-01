// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobrunresponse.h"
#include "startjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::StartJobRunResponse
 * \brief The StartJobRunResponse class provides an interace for DataBrew StartJobRun responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::startJobRun
 */

/*!
 * Constructs a StartJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartJobRunResponse::StartJobRunResponse(
        const StartJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new StartJobRunResponsePrivate(this), parent)
{
    setRequest(new StartJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartJobRunRequest * StartJobRunResponse::request() const
{
    Q_D(const StartJobRunResponse);
    return static_cast<const StartJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew StartJobRun \a response.
 */
void StartJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::StartJobRunResponsePrivate
 * \brief The StartJobRunResponsePrivate class provides private implementation for StartJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a StartJobRunResponsePrivate object with public implementation \a q.
 */
StartJobRunResponsePrivate::StartJobRunResponsePrivate(
    StartJobRunResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew StartJobRun response element from \a xml.
 */
void StartJobRunResponsePrivate::parseStartJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
