/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "outpostsrequest.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::OutpostsRequest
 * \brief The OutpostsRequest class provides an interface for Outposts requests.
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * \enum OutpostsRequest::Action
 *
 * This enum describes the actions that can be performed as Outposts
 * requests.
 *
 * \value CreateOutpostAction Outposts CreateOutpost action.
 * \value DeleteOutpostAction Outposts DeleteOutpost action.
 * \value DeleteSiteAction Outposts DeleteSite action.
 * \value GetOutpostAction Outposts GetOutpost action.
 * \value GetOutpostInstanceTypesAction Outposts GetOutpostInstanceTypes action.
 * \value ListOutpostsAction Outposts ListOutposts action.
 * \value ListSitesAction Outposts ListSites action.
 * \value ListTagsForResourceAction Outposts ListTagsForResource action.
 * \value TagResourceAction Outposts TagResource action.
 * \value UntagResourceAction Outposts UntagResource action.
 */

/*!
 * Constructs a OutpostsRequest object for Outposts \a action.
 */
OutpostsRequest::OutpostsRequest(const Action action)
    : d_ptr(new OutpostsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
OutpostsRequest::OutpostsRequest(const OutpostsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new OutpostsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the OutpostsRequest object to be equal to \a other.
 */
OutpostsRequest& OutpostsRequest::operator=(const OutpostsRequest &other)
{
    Q_D(OutpostsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa OutpostsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OutpostsRequestPrivate.
 */
OutpostsRequest::OutpostsRequest(OutpostsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Outposts action to be performed by this request.
 */
OutpostsRequest::Action OutpostsRequest::action() const
{
    Q_D(const OutpostsRequest);
    return d->action;
}

/*!
 * Returns the name of the Outposts action to be performed by this request.
 */
QString OutpostsRequest::actionString() const
{
    return OutpostsRequestPrivate::toString(action());
}

/*!
 * Returns the Outposts API version implemented by this request.
 */
QString OutpostsRequest::apiVersion() const
{
    Q_D(const OutpostsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Outposts action to be performed by this request to \a action.
 */
void OutpostsRequest::setAction(const Action action)
{
    Q_D(OutpostsRequest);
    d->action = action;
}

/*!
 * Sets the Outposts API version to include in this request to \a version.
 */
void OutpostsRequest::setApiVersion(const QString &version)
{
    Q_D(OutpostsRequest);
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
bool OutpostsRequest::operator==(const OutpostsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Outposts queue name.
 *
 * @par From Outposts FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Outposts queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool OutpostsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int OutpostsRequest::clearParameter(const QString &name)
{
    Q_D(OutpostsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void OutpostsRequest::clearParameters()
{
    Q_D(OutpostsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant OutpostsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const OutpostsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &OutpostsRequest::parameters() const
{
    Q_D(const OutpostsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void OutpostsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(OutpostsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void OutpostsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(OutpostsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Outposts request using the given
 * \a endpoint.
 *
 * This Outposts implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest OutpostsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const OutpostsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Outposts::OutpostsRequestPrivate
 * \brief The OutpostsRequestPrivate class provides private implementation for OutpostsRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
OutpostsRequestPrivate::OutpostsRequestPrivate(const OutpostsRequest::Action action, OutpostsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the OutpostsRequest class's copy constructor.
 */
OutpostsRequestPrivate::OutpostsRequestPrivate(const OutpostsRequestPrivate &other,
                                     OutpostsRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts OutpostsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Outposts service's Action
 * query parameters.
 */
QString OutpostsRequestPrivate::toString(const OutpostsRequest::Action &action)
{
    #define ActionToString(action) \
        case OutpostsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Outposts
} // namespace QtAws
