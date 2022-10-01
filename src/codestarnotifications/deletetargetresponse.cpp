// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetargetresponse.h"
#include "deletetargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodestarNotifications {

/*!
 * \class QtAws::CodestarNotifications::DeleteTargetResponse
 * \brief The DeleteTargetResponse class provides an interace for CodestarNotifications DeleteTarget responses.
 *
 * \inmodule QtAwsCodestarNotifications
 *
 *  This AWS CodeStar Notifications API Reference provides descriptions and usage examples of the operations and data types
 *  for the AWS CodeStar Notifications API. You can use the AWS CodeStar Notifications API to work with the following
 * 
 *  objects>
 * 
 *  Notification rules, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateNotificationRule</a>, which creates a notification rule for a resource in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>DeleteNotificationRule</a>, which deletes a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeNotificationRule</a>, which provides information about a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListNotificationRules</a>, which lists the notification rules associated with your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UpdateNotificationRule</a>, which changes the name, events, or targets associated with a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Subscribe</a>, which subscribes a target to a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Unsubscribe</a>, which removes a target from a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Targets, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>DeleteTarget</a>, which removes a notification rule target from a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListTargets</a>, which lists the targets associated with a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Events, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListEventTypes</a>, which lists the event types you can include in a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Tags, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListTagsForResource</a>, which lists the tags already associated with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>TagResource</a>, which associates a tag you provide with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UntagResource</a>, which removes a tag from a notification rule in your account.
 * 
 *  </p </li> </ul>
 * 
 *  For information about how to use AWS CodeStar Notifications, see the <a
 *  href="https://docs.aws.amazon.com/dtconsole/latest/userguide/what-is-dtconsole.html">Amazon Web Services Developer Tools
 *  Console User Guide</a>.
 *
 * \sa CodestarNotificationsClient::deleteTarget
 */

/*!
 * Constructs a DeleteTargetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTargetResponse::DeleteTargetResponse(
        const DeleteTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodestarNotificationsResponse(new DeleteTargetResponsePrivate(this), parent)
{
    setRequest(new DeleteTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTargetRequest * DeleteTargetResponse::request() const
{
    Q_D(const DeleteTargetResponse);
    return static_cast<const DeleteTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodestarNotifications DeleteTarget \a response.
 */
void DeleteTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodestarNotifications::DeleteTargetResponsePrivate
 * \brief The DeleteTargetResponsePrivate class provides private implementation for DeleteTargetResponse.
 * \internal
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a DeleteTargetResponsePrivate object with public implementation \a q.
 */
DeleteTargetResponsePrivate::DeleteTargetResponsePrivate(
    DeleteTargetResponse * const q) : CodestarNotificationsResponsePrivate(q)
{

}

/*!
 * Parses a CodestarNotifications DeleteTarget response element from \a xml.
 */
void DeleteTargetResponsePrivate::parseDeleteTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodestarNotifications
} // namespace QtAws
