// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputsecuritygroupsresponse.h"
#include "listinputsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsResponse
 * \brief The ListInputSecurityGroupsResponse class provides an interace for MediaLive ListInputSecurityGroups responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputSecurityGroups
 */

/*!
 * Constructs a ListInputSecurityGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputSecurityGroupsResponse::ListInputSecurityGroupsResponse(
        const ListInputSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInputSecurityGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputSecurityGroupsRequest * ListInputSecurityGroupsResponse::request() const
{
    Q_D(const ListInputSecurityGroupsResponse);
    return static_cast<const ListInputSecurityGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputSecurityGroups \a response.
 */
void ListInputSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsResponsePrivate
 * \brief The ListInputSecurityGroupsResponsePrivate class provides private implementation for ListInputSecurityGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputSecurityGroupsResponsePrivate object with public implementation \a q.
 */
ListInputSecurityGroupsResponsePrivate::ListInputSecurityGroupsResponsePrivate(
    ListInputSecurityGroupsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputSecurityGroups response element from \a xml.
 */
void ListInputSecurityGroupsResponsePrivate::parseListInputSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputSecurityGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
