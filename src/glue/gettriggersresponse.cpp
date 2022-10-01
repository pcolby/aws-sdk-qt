// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettriggersresponse.h"
#include "gettriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggersResponse
 * \brief The GetTriggersResponse class provides an interace for Glue GetTriggers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTriggers
 */

/*!
 * Constructs a GetTriggersResponse object for \a reply to \a request, with parent \a parent.
 */
GetTriggersResponse::GetTriggersResponse(
        const GetTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTriggersResponsePrivate(this), parent)
{
    setRequest(new GetTriggersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTriggersRequest * GetTriggersResponse::request() const
{
    Q_D(const GetTriggersResponse);
    return static_cast<const GetTriggersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTriggers \a response.
 */
void GetTriggersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTriggersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTriggersResponsePrivate
 * \brief The GetTriggersResponsePrivate class provides private implementation for GetTriggersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggersResponsePrivate object with public implementation \a q.
 */
GetTriggersResponsePrivate::GetTriggersResponsePrivate(
    GetTriggersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTriggers response element from \a xml.
 */
void GetTriggersResponsePrivate::parseGetTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTriggersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
