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

#include "s3outpostsrequest.h"
#include "s3outpostsrequest_p.h"

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::S3OutpostsRequest
 * \brief The S3OutpostsRequest class provides an interface for S3Outposts requests.
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * \enum S3OutpostsRequest::Action
 *
 * This enum describes the actions that can be performed as S3Outposts
 * requests.
 *
 * \value CreateEndpointAction S3Outposts CreateEndpoint action.
 * \value DeleteEndpointAction S3Outposts DeleteEndpoint action.
 * \value ListEndpointsAction S3Outposts ListEndpoints action.
 * \value ListSharedEndpointsAction S3Outposts ListSharedEndpoints action.
 */

/*!
 * Constructs a S3OutpostsRequest object for S3Outposts \a action.
 */
S3OutpostsRequest::S3OutpostsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new S3OutpostsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
S3OutpostsRequest::S3OutpostsRequest(const S3OutpostsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new S3OutpostsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the S3OutpostsRequest object to be equal to \a other.
 */
S3OutpostsRequest& S3OutpostsRequest::operator=(const S3OutpostsRequest &other)
{
    Q_D(S3OutpostsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa S3OutpostsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3OutpostsRequestPrivate.
 */
S3OutpostsRequest::S3OutpostsRequest(S3OutpostsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the S3Outposts action to be performed by this request.
 */
S3OutpostsRequest::Action S3OutpostsRequest::action() const
{
    Q_D(const S3OutpostsRequest);
    return d->action;
}

/*!
 * Returns the name of the S3Outposts action to be performed by this request.
 */
QString S3OutpostsRequest::actionString() const
{
    return S3OutpostsRequestPrivate::toString(action());
}

/*!
 * Returns the S3Outposts API version implemented by this request.
 */
QString S3OutpostsRequest::apiVersion() const
{
    Q_D(const S3OutpostsRequest);
    return d->apiVersion;
}

/*!
 * Sets the S3Outposts action to be performed by this request to \a action.
 */
void S3OutpostsRequest::setAction(const Action action)
{
    Q_D(S3OutpostsRequest);
    d->action = action;
}

/*!
 * Sets the S3Outposts API version to include in this request to \a version.
 */
void S3OutpostsRequest::setApiVersion(const QString &version)
{
    Q_D(S3OutpostsRequest);
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
bool S3OutpostsRequest::operator==(const S3OutpostsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid S3Outposts queue name.
 *
 * @par From S3Outposts FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid S3Outposts queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool S3OutpostsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int S3OutpostsRequest::clearParameter(const QString &name)
{
    Q_D(S3OutpostsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void S3OutpostsRequest::clearParameters()
{
    Q_D(S3OutpostsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant S3OutpostsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const S3OutpostsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &S3OutpostsRequest::parameters() const
{
    Q_D(const S3OutpostsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void S3OutpostsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(S3OutpostsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void S3OutpostsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(S3OutpostsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the S3Outposts request using the given
 * \a endpoint.
 *
 * This S3Outposts implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest S3OutpostsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const S3OutpostsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::S3Outposts::S3OutpostsRequestPrivate
 * \brief The S3OutpostsRequestPrivate class provides private implementation for S3OutpostsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a S3OutpostsRequestPrivate object for S3Outposts \a action,
 * with public implementation \a q.
 */
S3OutpostsRequestPrivate::S3OutpostsRequestPrivate(const S3OutpostsRequest::Action action, S3OutpostsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-07-25"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the S3OutpostsRequest class's copy constructor.
 */
S3OutpostsRequestPrivate::S3OutpostsRequestPrivate(const S3OutpostsRequestPrivate &other,
                                     S3OutpostsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts S3OutpostsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the S3Outposts service's Action
 * query parameters.
 */
QString S3OutpostsRequestPrivate::toString(const S3OutpostsRequest::Action &action)
{
    #define ActionToString(action) \
        case S3OutpostsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateEndpoint);
        ActionToString(DeleteEndpoint);
        ActionToString(ListEndpoints);
        ActionToString(ListSharedEndpoints);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace S3Outposts
} // namespace QtAws
