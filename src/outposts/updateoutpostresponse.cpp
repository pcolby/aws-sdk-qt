// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateoutpostresponse.h"
#include "updateoutpostresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateOutpostResponse
 * \brief The UpdateOutpostResponse class provides an interace for Outposts UpdateOutpost responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateOutpost
 */

/*!
 * Constructs a UpdateOutpostResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOutpostResponse::UpdateOutpostResponse(
        const UpdateOutpostRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new UpdateOutpostResponsePrivate(this), parent)
{
    setRequest(new UpdateOutpostRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOutpostRequest * UpdateOutpostResponse::request() const
{
    Q_D(const UpdateOutpostResponse);
    return static_cast<const UpdateOutpostRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts UpdateOutpost \a response.
 */
void UpdateOutpostResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOutpostResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::UpdateOutpostResponsePrivate
 * \brief The UpdateOutpostResponsePrivate class provides private implementation for UpdateOutpostResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateOutpostResponsePrivate object with public implementation \a q.
 */
UpdateOutpostResponsePrivate::UpdateOutpostResponsePrivate(
    UpdateOutpostResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts UpdateOutpost response element from \a xml.
 */
void UpdateOutpostResponsePrivate::parseUpdateOutpostResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOutpostResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
