// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoutpostresponse.h"
#include "createoutpostresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CreateOutpostResponse
 * \brief The CreateOutpostResponse class provides an interace for Outposts CreateOutpost responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::createOutpost
 */

/*!
 * Constructs a CreateOutpostResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOutpostResponse::CreateOutpostResponse(
        const CreateOutpostRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new CreateOutpostResponsePrivate(this), parent)
{
    setRequest(new CreateOutpostRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOutpostRequest * CreateOutpostResponse::request() const
{
    Q_D(const CreateOutpostResponse);
    return static_cast<const CreateOutpostRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts CreateOutpost \a response.
 */
void CreateOutpostResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOutpostResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::CreateOutpostResponsePrivate
 * \brief The CreateOutpostResponsePrivate class provides private implementation for CreateOutpostResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CreateOutpostResponsePrivate object with public implementation \a q.
 */
CreateOutpostResponsePrivate::CreateOutpostResponsePrivate(
    CreateOutpostResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts CreateOutpost response element from \a xml.
 */
void CreateOutpostResponsePrivate::parseCreateOutpostResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOutpostResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
