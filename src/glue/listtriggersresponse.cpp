// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtriggersresponse.h"
#include "listtriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListTriggersResponse
 * \brief The ListTriggersResponse class provides an interace for Glue ListTriggers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listTriggers
 */

/*!
 * Constructs a ListTriggersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTriggersResponse::ListTriggersResponse(
        const ListTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListTriggersResponsePrivate(this), parent)
{
    setRequest(new ListTriggersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTriggersRequest * ListTriggersResponse::request() const
{
    Q_D(const ListTriggersResponse);
    return static_cast<const ListTriggersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListTriggers \a response.
 */
void ListTriggersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTriggersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListTriggersResponsePrivate
 * \brief The ListTriggersResponsePrivate class provides private implementation for ListTriggersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListTriggersResponsePrivate object with public implementation \a q.
 */
ListTriggersResponsePrivate::ListTriggersResponsePrivate(
    ListTriggersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListTriggers response element from \a xml.
 */
void ListTriggersResponsePrivate::parseListTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTriggersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
