// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtargetsrequest.h"
#include "listtargetsrequest_p.h"
#include "listtargetsresponse.h"
#include "codestarnotificationsrequest_p.h"

namespace QtAws {
namespace CodestarNotifications {

/*!
 * \class QtAws::CodestarNotifications::ListTargetsRequest
 * \brief The ListTargetsRequest class provides an interface for CodestarNotifications ListTargets requests.
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
 * \sa CodestarNotificationsClient::listTargets
 */

/*!
 * Constructs a copy of \a other.
 */
ListTargetsRequest::ListTargetsRequest(const ListTargetsRequest &other)
    : CodestarNotificationsRequest(new ListTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTargetsRequest object.
 */
ListTargetsRequest::ListTargetsRequest()
    : CodestarNotificationsRequest(new ListTargetsRequestPrivate(CodestarNotificationsRequest::ListTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTargetsRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::CodestarNotifications::ListTargetsRequestPrivate
 * \brief The ListTargetsRequestPrivate class provides private implementation for ListTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a ListTargetsRequestPrivate object for CodestarNotifications \a action,
 * with public implementation \a q.
 */
ListTargetsRequestPrivate::ListTargetsRequestPrivate(
    const CodestarNotificationsRequest::Action action, ListTargetsRequest * const q)
    : CodestarNotificationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTargetsRequest
 * class' copy constructor.
 */
ListTargetsRequestPrivate::ListTargetsRequestPrivate(
    const ListTargetsRequestPrivate &other, ListTargetsRequest * const q)
    : CodestarNotificationsRequestPrivate(other, q)
{

}

} // namespace CodestarNotifications
} // namespace QtAws
