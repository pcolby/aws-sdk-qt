// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettriggerresponse.h"
#include "gettriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggerResponse
 * \brief The GetTriggerResponse class provides an interace for Glue GetTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTrigger
 */

/*!
 * Constructs a GetTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
GetTriggerResponse::GetTriggerResponse(
        const GetTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTriggerResponsePrivate(this), parent)
{
    setRequest(new GetTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTriggerRequest * GetTriggerResponse::request() const
{
    Q_D(const GetTriggerResponse);
    return static_cast<const GetTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTrigger \a response.
 */
void GetTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTriggerResponsePrivate
 * \brief The GetTriggerResponsePrivate class provides private implementation for GetTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggerResponsePrivate object with public implementation \a q.
 */
GetTriggerResponsePrivate::GetTriggerResponsePrivate(
    GetTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTrigger response element from \a xml.
 */
void GetTriggerResponsePrivate::parseGetTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
