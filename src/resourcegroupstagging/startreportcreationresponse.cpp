// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreportcreationresponse.h"
#include "startreportcreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::StartReportCreationResponse
 * \brief The StartReportCreationResponse class provides an interace for ResourceGroupsTagging StartReportCreation responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::startReportCreation
 */

/*!
 * Constructs a StartReportCreationResponse object for \a reply to \a request, with parent \a parent.
 */
StartReportCreationResponse::StartReportCreationResponse(
        const StartReportCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new StartReportCreationResponsePrivate(this), parent)
{
    setRequest(new StartReportCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReportCreationRequest * StartReportCreationResponse::request() const
{
    Q_D(const StartReportCreationResponse);
    return static_cast<const StartReportCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTagging StartReportCreation \a response.
 */
void StartReportCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReportCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::StartReportCreationResponsePrivate
 * \brief The StartReportCreationResponsePrivate class provides private implementation for StartReportCreationResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a StartReportCreationResponsePrivate object with public implementation \a q.
 */
StartReportCreationResponsePrivate::StartReportCreationResponsePrivate(
    StartReportCreationResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging StartReportCreation response element from \a xml.
 */
void StartReportCreationResponsePrivate::parseStartReportCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReportCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
