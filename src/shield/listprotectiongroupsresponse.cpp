// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprotectiongroupsresponse.h"
#include "listprotectiongroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ListProtectionGroupsResponse
 * \brief The ListProtectionGroupsResponse class provides an interace for Shield ListProtectionGroups responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::listProtectionGroups
 */

/*!
 * Constructs a ListProtectionGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProtectionGroupsResponse::ListProtectionGroupsResponse(
        const ListProtectionGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new ListProtectionGroupsResponsePrivate(this), parent)
{
    setRequest(new ListProtectionGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProtectionGroupsRequest * ListProtectionGroupsResponse::request() const
{
    Q_D(const ListProtectionGroupsResponse);
    return static_cast<const ListProtectionGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield ListProtectionGroups \a response.
 */
void ListProtectionGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProtectionGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::ListProtectionGroupsResponsePrivate
 * \brief The ListProtectionGroupsResponsePrivate class provides private implementation for ListProtectionGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ListProtectionGroupsResponsePrivate object with public implementation \a q.
 */
ListProtectionGroupsResponsePrivate::ListProtectionGroupsResponsePrivate(
    ListProtectionGroupsResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield ListProtectionGroups response element from \a xml.
 */
void ListProtectionGroupsResponsePrivate::parseListProtectionGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProtectionGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
