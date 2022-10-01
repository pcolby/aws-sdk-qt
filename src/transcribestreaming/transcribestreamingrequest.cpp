// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transcribestreamingrequest.h"
#include "transcribestreamingrequest_p.h"

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::TranscribeStreamingRequest
 * \brief The TranscribeStreamingRequest class provides an interface for TranscribeStreaming requests.
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * \enum TranscribeStreamingRequest::Action
 *
 * This enum describes the actions that can be performed as TranscribeStreaming
 * requests.
 *
 * \value StartMedicalStreamTranscriptionAction TranscribeStreaming StartMedicalStreamTranscription action.
 * \value StartStreamTranscriptionAction TranscribeStreaming StartStreamTranscription action.
 */

/*!
 * Constructs a TranscribeStreamingRequest object for TranscribeStreaming \a action.
 */
TranscribeStreamingRequest::TranscribeStreamingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TranscribeStreamingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TranscribeStreamingRequest::TranscribeStreamingRequest(const TranscribeStreamingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TranscribeStreamingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TranscribeStreamingRequest object to be equal to \a other.
 */
TranscribeStreamingRequest& TranscribeStreamingRequest::operator=(const TranscribeStreamingRequest &other)
{
    Q_D(TranscribeStreamingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TranscribeStreamingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeStreamingRequestPrivate.
 */
TranscribeStreamingRequest::TranscribeStreamingRequest(TranscribeStreamingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the TranscribeStreaming action to be performed by this request.
 */
TranscribeStreamingRequest::Action TranscribeStreamingRequest::action() const
{
    Q_D(const TranscribeStreamingRequest);
    return d->action;
}

/*!
 * Returns the name of the TranscribeStreaming action to be performed by this request.
 */
QString TranscribeStreamingRequest::actionString() const
{
    return TranscribeStreamingRequestPrivate::toString(action());
}

/*!
 * Returns the TranscribeStreaming API version implemented by this request.
 */
QString TranscribeStreamingRequest::apiVersion() const
{
    Q_D(const TranscribeStreamingRequest);
    return d->apiVersion;
}

/*!
 * Sets the TranscribeStreaming action to be performed by this request to \a action.
 */
void TranscribeStreamingRequest::setAction(const Action action)
{
    Q_D(TranscribeStreamingRequest);
    d->action = action;
}

/*!
 * Sets the TranscribeStreaming API version to include in this request to \a version.
 */
void TranscribeStreamingRequest::setApiVersion(const QString &version)
{
    Q_D(TranscribeStreamingRequest);
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
bool TranscribeStreamingRequest::operator==(const TranscribeStreamingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid TranscribeStreaming queue name.
 *
 * @par From TranscribeStreaming FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid TranscribeStreaming queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TranscribeStreamingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TranscribeStreamingRequest::clearParameter(const QString &name)
{
    Q_D(TranscribeStreamingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TranscribeStreamingRequest::clearParameters()
{
    Q_D(TranscribeStreamingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TranscribeStreamingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TranscribeStreamingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TranscribeStreamingRequest::parameters() const
{
    Q_D(const TranscribeStreamingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TranscribeStreamingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TranscribeStreamingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TranscribeStreamingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TranscribeStreamingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the TranscribeStreaming request using the given
 * \a endpoint.
 *
 * This TranscribeStreaming implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TranscribeStreamingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TranscribeStreamingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::TranscribeStreaming::TranscribeStreamingRequestPrivate
 * \brief The TranscribeStreamingRequestPrivate class provides private implementation for TranscribeStreamingRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a TranscribeStreamingRequestPrivate object for TranscribeStreaming \a action,
 * with public implementation \a q.
 */
TranscribeStreamingRequestPrivate::TranscribeStreamingRequestPrivate(const TranscribeStreamingRequest::Action action, TranscribeStreamingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-10-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TranscribeStreamingRequest class's copy constructor.
 */
TranscribeStreamingRequestPrivate::TranscribeStreamingRequestPrivate(const TranscribeStreamingRequestPrivate &other,
                                     TranscribeStreamingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TranscribeStreamingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the TranscribeStreaming service's Action
 * query parameters.
 */
QString TranscribeStreamingRequestPrivate::toString(const TranscribeStreamingRequest::Action &action)
{
    #define ActionToString(action) \
        case TranscribeStreamingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(StartMedicalStreamTranscription);
        ActionToString(StartStreamTranscription);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace TranscribeStreaming
} // namespace QtAws
