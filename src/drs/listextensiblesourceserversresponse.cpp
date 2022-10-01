// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listextensiblesourceserversresponse.h"
#include "listextensiblesourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersResponse
 * \brief The ListExtensibleSourceServersResponse class provides an interace for Drs ListExtensibleSourceServers responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::listExtensibleSourceServers
 */

/*!
 * Constructs a ListExtensibleSourceServersResponse object for \a reply to \a request, with parent \a parent.
 */
ListExtensibleSourceServersResponse::ListExtensibleSourceServersResponse(
        const ListExtensibleSourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new ListExtensibleSourceServersResponsePrivate(this), parent)
{
    setRequest(new ListExtensibleSourceServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExtensibleSourceServersRequest * ListExtensibleSourceServersResponse::request() const
{
    Q_D(const ListExtensibleSourceServersResponse);
    return static_cast<const ListExtensibleSourceServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs ListExtensibleSourceServers \a response.
 */
void ListExtensibleSourceServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExtensibleSourceServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersResponsePrivate
 * \brief The ListExtensibleSourceServersResponsePrivate class provides private implementation for ListExtensibleSourceServersResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a ListExtensibleSourceServersResponsePrivate object with public implementation \a q.
 */
ListExtensibleSourceServersResponsePrivate::ListExtensibleSourceServersResponsePrivate(
    ListExtensibleSourceServersResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs ListExtensibleSourceServers response element from \a xml.
 */
void ListExtensibleSourceServersResponsePrivate::parseListExtensibleSourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExtensibleSourceServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
