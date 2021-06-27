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

#include "elasticinferencerequest.h"
#include "elasticinferencerequest_p.h"

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::ElasticInferenceRequest
 * \brief The ElasticInferenceRequest class provides an interface for ElasticInference requests.
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * \enum ElasticInferenceRequest::Action
 *
 * This enum describes the actions that can be performed as ElasticInference
 * requests.
 *
 * \value DescribeAcceleratorOfferingsAction ElasticInference DescribeAcceleratorOfferings action.
 * \value DescribeAcceleratorTypesAction ElasticInference DescribeAcceleratorTypes action.
 * \value DescribeAcceleratorsAction ElasticInference DescribeAccelerators action.
 * \value ListTagsForResourceAction ElasticInference ListTagsForResource action.
 * \value TagResourceAction ElasticInference TagResource action.
 * \value UntagResourceAction ElasticInference UntagResource action.
 */

/*!
 * Constructs a ElasticInferenceRequest object for ElasticInference \a action.
 */
ElasticInferenceRequest::ElasticInferenceRequest(const Action action)
    : d_ptr(new ElasticInferenceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticInferenceRequest::ElasticInferenceRequest(const ElasticInferenceRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ElasticInferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticInferenceRequest object to be equal to \a other.
 */
ElasticInferenceRequest& ElasticInferenceRequest::operator=(const ElasticInferenceRequest &other)
{
    Q_D(ElasticInferenceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticInferenceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticInferenceRequestPrivate.
 */
ElasticInferenceRequest::ElasticInferenceRequest(ElasticInferenceRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ElasticInference action to be performed by this request.
 */
ElasticInferenceRequest::Action ElasticInferenceRequest::action() const
{
    Q_D(const ElasticInferenceRequest);
    return d->action;
}

/*!
 * Returns the name of the ElasticInference action to be performed by this request.
 */
QString ElasticInferenceRequest::actionString() const
{
    return ElasticInferenceRequestPrivate::toString(action());
}

/*!
 * Returns the ElasticInference API version implemented by this request.
 */
QString ElasticInferenceRequest::apiVersion() const
{
    Q_D(const ElasticInferenceRequest);
    return d->apiVersion;
}

/*!
 * Sets the ElasticInference action to be performed by this request to \a action.
 */
void ElasticInferenceRequest::setAction(const Action action)
{
    Q_D(ElasticInferenceRequest);
    d->action = action;
}

/*!
 * Sets the ElasticInference API version to include in this request to \a version.
 */
void ElasticInferenceRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticInferenceRequest);
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
bool ElasticInferenceRequest::operator==(const ElasticInferenceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElasticInference queue name.
 *
 * @par From ElasticInference FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticInference queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticInferenceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticInferenceRequest::clearParameter(const QString &name)
{
    Q_D(ElasticInferenceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticInferenceRequest::clearParameters()
{
    Q_D(ElasticInferenceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticInferenceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticInferenceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticInferenceRequest::parameters() const
{
    Q_D(const ElasticInferenceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticInferenceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticInferenceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticInferenceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticInferenceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElasticInference request using the given
 * \a endpoint.
 *
 * This ElasticInference implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticInferenceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ElasticInferenceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElasticInference::ElasticInferenceRequestPrivate
 * \brief The ElasticInferenceRequestPrivate class provides private implementation for ElasticInferenceRequest.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a ElasticInferenceRequestPrivate object for ElasticInference \a action,
 * with public implementation \a q.
 */
ElasticInferenceRequestPrivate::ElasticInferenceRequestPrivate(const ElasticInferenceRequest::Action action, ElasticInferenceRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticInferenceRequest class's copy constructor.
 */
ElasticInferenceRequestPrivate::ElasticInferenceRequestPrivate(const ElasticInferenceRequestPrivate &other,
                                     ElasticInferenceRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticInferenceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticInference service's Action
 * query parameters.
 */
QString ElasticInferenceRequestPrivate::toString(const ElasticInferenceRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticInferenceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticInference
} // namespace QtAws
