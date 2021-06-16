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

#include "transcribestreamingservicerequest.h"
#include "transcribestreamingservicerequest_p.h"

namespace QtAws {
namespace TranscribeStreamingService {

/*!
 * \class QtAws::TranscribeStreamingService::TranscribeStreamingServiceRequest
 * \brief The TranscribeStreamingServiceRequest class provides an interface for TranscribeStreamingService requests.
 *
 * \inmodule QtAwsTranscribeStreamingService
 */

/*!
 * \enum TranscribeStreamingServiceRequest::Action
 *
 * This enum describes the actions that can be performed as TranscribeStreamingService
 * requests.
 *
 * \value StartStreamTranscriptionAction TranscribeStreamingService StartStreamTranscription action.
 */

/*!
 * Constructs a TranscribeStreamingServiceRequest object for TranscribeStreamingService \a action.
 */
TranscribeStreamingServiceRequest::TranscribeStreamingServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TranscribeStreamingServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TranscribeStreamingServiceRequest::TranscribeStreamingServiceRequest(const TranscribeStreamingServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TranscribeStreamingServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TranscribeStreamingServiceRequest object to be equal to \a other.
 */
TranscribeStreamingServiceRequest& TranscribeStreamingServiceRequest::operator=(const TranscribeStreamingServiceRequest &other)
{
    Q_D(TranscribeStreamingServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TranscribeStreamingServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeStreamingServiceRequestPrivate.
 */
TranscribeStreamingServiceRequest::TranscribeStreamingServiceRequest(TranscribeStreamingServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the TranscribeStreamingService action to be performed by this request.
 */
TranscribeStreamingServiceRequest::Action TranscribeStreamingServiceRequest::action() const
{
    Q_D(const TranscribeStreamingServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the TranscribeStreamingService action to be performed by this request.
 */
QString TranscribeStreamingServiceRequest::actionString() const
{
    return TranscribeStreamingServiceRequestPrivate::toString(action());
}

/*!
 * Returns the TranscribeStreamingService API version implemented by this request.
 */
QString TranscribeStreamingServiceRequest::apiVersion() const
{
    Q_D(const TranscribeStreamingServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the TranscribeStreamingService action to be performed by this request to \a action.
 */
void TranscribeStreamingServiceRequest::setAction(const Action action)
{
    Q_D(TranscribeStreamingServiceRequest);
    d->action = action;
}

/*!
 * Sets the TranscribeStreamingService API version to include in this request to \a version.
 */
void TranscribeStreamingServiceRequest::setApiVersion(const QString &version)
{
    Q_D(TranscribeStreamingServiceRequest);
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
bool TranscribeStreamingServiceRequest::operator==(const TranscribeStreamingServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid TranscribeStreamingService queue name.
 *
 * @par From TranscribeStreamingService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid TranscribeStreamingService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TranscribeStreamingServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TranscribeStreamingServiceRequest::clearParameter(const QString &name)
{
    Q_D(TranscribeStreamingServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TranscribeStreamingServiceRequest::clearParameters()
{
    Q_D(TranscribeStreamingServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TranscribeStreamingServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TranscribeStreamingServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TranscribeStreamingServiceRequest::parameters() const
{
    Q_D(const TranscribeStreamingServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TranscribeStreamingServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TranscribeStreamingServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TranscribeStreamingServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TranscribeStreamingServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the TranscribeStreamingService request using the given
 * \a endpoint.
 *
 * This TranscribeStreamingService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TranscribeStreamingServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TranscribeStreamingServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::TranscribeStreamingService::TranscribeStreamingServiceRequestPrivate
 * \brief The TranscribeStreamingServiceRequestPrivate class provides private implementation for TranscribeStreamingServiceRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreamingService
 */

/*!
 * Constructs a TranscribeStreamingServiceRequestPrivate object for TranscribeStreamingService \a action,
 * with public implementation \a q.
 */
TranscribeStreamingServiceRequestPrivate::TranscribeStreamingServiceRequestPrivate(const TranscribeStreamingServiceRequest::Action action, TranscribeStreamingServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TranscribeStreamingServiceRequest class's copy constructor.
 */
TranscribeStreamingServiceRequestPrivate::TranscribeStreamingServiceRequestPrivate(const TranscribeStreamingServiceRequestPrivate &other,
                                     TranscribeStreamingServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TranscribeStreamingServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the TranscribeStreamingService service's Action
 * query parameters.
 */
QString TranscribeStreamingServiceRequestPrivate::toString(const TranscribeStreamingServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case TranscribeStreamingServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace TranscribeStreamingService
} // namespace QtAws
