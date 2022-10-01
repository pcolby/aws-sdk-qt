// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoutpostresponse.h"
#include "deleteoutpostresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::DeleteOutpostResponse
 * \brief The DeleteOutpostResponse class provides an interace for Outposts DeleteOutpost responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::deleteOutpost
 */

/*!
 * Constructs a DeleteOutpostResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOutpostResponse::DeleteOutpostResponse(
        const DeleteOutpostRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new DeleteOutpostResponsePrivate(this), parent)
{
    setRequest(new DeleteOutpostRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOutpostRequest * DeleteOutpostResponse::request() const
{
    Q_D(const DeleteOutpostResponse);
    return static_cast<const DeleteOutpostRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts DeleteOutpost \a response.
 */
void DeleteOutpostResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOutpostResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::DeleteOutpostResponsePrivate
 * \brief The DeleteOutpostResponsePrivate class provides private implementation for DeleteOutpostResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a DeleteOutpostResponsePrivate object with public implementation \a q.
 */
DeleteOutpostResponsePrivate::DeleteOutpostResponsePrivate(
    DeleteOutpostResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts DeleteOutpost response element from \a xml.
 */
void DeleteOutpostResponsePrivate::parseDeleteOutpostResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOutpostResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
