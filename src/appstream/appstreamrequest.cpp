/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "appstreamrequest.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamRequest
 * \brief The AppStreamRequest class provides an interface for AppStream requests.
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * \enum AppStreamRequest::Action
 *
 * This enum describes the actions that can be performed as AppStream
 * requests.
 *
 * \value AssociateFleetAction AppStream AssociateFleet action.
 * \value CopyImageAction AppStream CopyImage action.
 * \value CreateDirectoryConfigAction AppStream CreateDirectoryConfig action.
 * \value CreateFleetAction AppStream CreateFleet action.
 * \value CreateImageBuilderAction AppStream CreateImageBuilder action.
 * \value CreateImageBuilderStreamingURLAction AppStream CreateImageBuilderStreamingURL action.
 * \value CreateStackAction AppStream CreateStack action.
 * \value CreateStreamingURLAction AppStream CreateStreamingURL action.
 * \value DeleteDirectoryConfigAction AppStream DeleteDirectoryConfig action.
 * \value DeleteFleetAction AppStream DeleteFleet action.
 * \value DeleteImageAction AppStream DeleteImage action.
 * \value DeleteImageBuilderAction AppStream DeleteImageBuilder action.
 * \value DeleteStackAction AppStream DeleteStack action.
 * \value DescribeDirectoryConfigsAction AppStream DescribeDirectoryConfigs action.
 * \value DescribeFleetsAction AppStream DescribeFleets action.
 * \value DescribeImageBuildersAction AppStream DescribeImageBuilders action.
 * \value DescribeImagesAction AppStream DescribeImages action.
 * \value DescribeSessionsAction AppStream DescribeSessions action.
 * \value DescribeStacksAction AppStream DescribeStacks action.
 * \value DisassociateFleetAction AppStream DisassociateFleet action.
 * \value ExpireSessionAction AppStream ExpireSession action.
 * \value ListAssociatedFleetsAction AppStream ListAssociatedFleets action.
 * \value ListAssociatedStacksAction AppStream ListAssociatedStacks action.
 * \value ListTagsForResourceAction AppStream ListTagsForResource action.
 * \value StartFleetAction AppStream StartFleet action.
 * \value StartImageBuilderAction AppStream StartImageBuilder action.
 * \value StopFleetAction AppStream StopFleet action.
 * \value StopImageBuilderAction AppStream StopImageBuilder action.
 * \value TagResourceAction AppStream TagResource action.
 * \value UntagResourceAction AppStream UntagResource action.
 * \value UpdateDirectoryConfigAction AppStream UpdateDirectoryConfig action.
 * \value UpdateFleetAction AppStream UpdateFleet action.
 * \value UpdateStackAction AppStream UpdateStack action.
 */

/*!
 * Constructs a AppStreamRequest object for AppStream \a action.
 */
AppStreamRequest::AppStreamRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppStreamRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppStreamRequest::AppStreamRequest(const AppStreamRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppStreamRequest object to be equal to \a other.
 */
AppStreamRequest& AppStreamRequest::operator=(const AppStreamRequest &other)
{
    Q_D(AppStreamRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppStreamRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppStreamRequestPrivate.
 */
AppStreamRequest::AppStreamRequest(AppStreamRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppStream action to be performed by this request.
 */
AppStreamRequest::Action AppStreamRequest::action() const
{
    Q_D(const AppStreamRequest);
    return d->action;
}

/*!
 * Returns the name of the AppStream action to be performed by this request.
 */
QString AppStreamRequest::actionString() const
{
    return AppStreamRequestPrivate::toString(action());
}

/*!
 * Returns the AppStream API version implemented by this request.
 */
QString AppStreamRequest::apiVersion() const
{
    Q_D(const AppStreamRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppStream action to be performed by this request to \a action.
 */
void AppStreamRequest::setAction(const Action action)
{
    Q_D(AppStreamRequest);
    d->action = action;
}

/*!
 * Sets the AppStream API version to include in this request to \a version.
 */
void AppStreamRequest::setApiVersion(const QString &version)
{
    Q_D(AppStreamRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool AppStreamRequest::operator==(const AppStreamRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppStream queue name.
 *
 * @par From AppStream FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppStream queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppStreamRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppStreamRequest::clearParameter(const QString &name)
{
    Q_D(AppStreamRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppStreamRequest::clearParameters()
{
    Q_D(AppStreamRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppStreamRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppStreamRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppStreamRequest::parameters() const
{
    Q_D(const AppStreamRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppStreamRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppStreamRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppStreamRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppStreamRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppStream request using the given
 * \a endpoint.
 *
 * This AppStream implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppStreamRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const AppStreamRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppStream::AppStreamRequestPrivate
 * \brief The AppStreamRequestPrivate class provides private implementation for AppStreamRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
AppStreamRequestPrivate::AppStreamRequestPrivate(const AppStreamRequest::Action action, AppStreamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppStreamRequest class's copy constructor.
 */
AppStreamRequestPrivate::AppStreamRequestPrivate(const AppStreamRequestPrivate &other,
                                     AppStreamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppStreamRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppStream service's Action
 * query parameters.
 */
QString AppStreamRequestPrivate::toString(const AppStreamRequest::Action &action)
{
    #define ActionToString(action) \
        case AppStreamRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppStream
} // namespace QtAws
