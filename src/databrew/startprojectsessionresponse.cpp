// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startprojectsessionresponse.h"
#include "startprojectsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::StartProjectSessionResponse
 * \brief The StartProjectSessionResponse class provides an interace for DataBrew StartProjectSession responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::startProjectSession
 */

/*!
 * Constructs a StartProjectSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StartProjectSessionResponse::StartProjectSessionResponse(
        const StartProjectSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new StartProjectSessionResponsePrivate(this), parent)
{
    setRequest(new StartProjectSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartProjectSessionRequest * StartProjectSessionResponse::request() const
{
    Q_D(const StartProjectSessionResponse);
    return static_cast<const StartProjectSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew StartProjectSession \a response.
 */
void StartProjectSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartProjectSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::StartProjectSessionResponsePrivate
 * \brief The StartProjectSessionResponsePrivate class provides private implementation for StartProjectSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a StartProjectSessionResponsePrivate object with public implementation \a q.
 */
StartProjectSessionResponsePrivate::StartProjectSessionResponsePrivate(
    StartProjectSessionResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew StartProjectSession response element from \a xml.
 */
void StartProjectSessionResponsePrivate::parseStartProjectSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartProjectSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
