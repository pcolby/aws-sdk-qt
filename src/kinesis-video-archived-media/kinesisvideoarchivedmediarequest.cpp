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

#include "kinesisvideoarchivedmediarequest.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaRequest
 * \brief The KinesisVideoArchivedMediaRequest class provides an interface for KinesisVideoArchivedMedia requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * \enum KinesisVideoArchivedMediaRequest::Action
 *
 * This enum describes the actions that can be performed as KinesisVideoArchivedMedia
 * requests.
 *
 * \value GetMediaForFragmentListAction KinesisVideoArchivedMedia GetMediaForFragmentList action.
 * \value ListFragmentsAction KinesisVideoArchivedMedia ListFragments action.
 */

/*!
 * Constructs a KinesisVideoArchivedMediaRequest object for KinesisVideoArchivedMedia \a action.
 */
KinesisVideoArchivedMediaRequest::KinesisVideoArchivedMediaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KinesisVideoArchivedMediaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisVideoArchivedMediaRequest::KinesisVideoArchivedMediaRequest(const KinesisVideoArchivedMediaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KinesisVideoArchivedMediaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisVideoArchivedMediaRequest object to be equal to \a other.
 */
KinesisVideoArchivedMediaRequest& KinesisVideoArchivedMediaRequest::operator=(const KinesisVideoArchivedMediaRequest &other)
{
    Q_D(KinesisVideoArchivedMediaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KinesisVideoArchivedMediaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoArchivedMediaRequestPrivate.
 */
KinesisVideoArchivedMediaRequest::KinesisVideoArchivedMediaRequest(KinesisVideoArchivedMediaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the KinesisVideoArchivedMedia action to be performed by this request.
 */
KinesisVideoArchivedMediaRequest::Action KinesisVideoArchivedMediaRequest::action() const
{
    Q_D(const KinesisVideoArchivedMediaRequest);
    return d->action;
}

/*!
 * Returns the name of the KinesisVideoArchivedMedia action to be performed by this request.
 */
QString KinesisVideoArchivedMediaRequest::actionString() const
{
    return KinesisVideoArchivedMediaRequestPrivate::toString(action());
}

/*!
 * Returns the KinesisVideoArchivedMedia API version implemented by this request.
 */
QString KinesisVideoArchivedMediaRequest::apiVersion() const
{
    Q_D(const KinesisVideoArchivedMediaRequest);
    return d->apiVersion;
}

/*!
 * Sets the KinesisVideoArchivedMedia action to be performed by this request to \a action.
 */
void KinesisVideoArchivedMediaRequest::setAction(const Action action)
{
    Q_D(KinesisVideoArchivedMediaRequest);
    d->action = action;
}

/*!
 * Sets the KinesisVideoArchivedMedia API version to include in this request to \a version.
 */
void KinesisVideoArchivedMediaRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisVideoArchivedMediaRequest);
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
bool KinesisVideoArchivedMediaRequest::operator==(const KinesisVideoArchivedMediaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KinesisVideoArchivedMedia queue name.
 *
 * @par From KinesisVideoArchivedMedia FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KinesisVideoArchivedMedia queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KinesisVideoArchivedMediaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisVideoArchivedMediaRequest::clearParameter(const QString &name)
{
    Q_D(KinesisVideoArchivedMediaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisVideoArchivedMediaRequest::clearParameters()
{
    Q_D(KinesisVideoArchivedMediaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisVideoArchivedMediaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisVideoArchivedMediaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisVideoArchivedMediaRequest::parameters() const
{
    Q_D(const KinesisVideoArchivedMediaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisVideoArchivedMediaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisVideoArchivedMediaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisVideoArchivedMediaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisVideoArchivedMediaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KinesisVideoArchivedMedia request using the given
 * \a endpoint.
 *
 * This KinesisVideoArchivedMedia implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisVideoArchivedMediaRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const KinesisVideoArchivedMediaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaRequestPrivate
 * \brief The KinesisVideoArchivedMediaRequestPrivate class provides private implementation for KinesisVideoArchivedMediaRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a KinesisVideoArchivedMediaRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
KinesisVideoArchivedMediaRequestPrivate::KinesisVideoArchivedMediaRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action, KinesisVideoArchivedMediaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisVideoArchivedMediaRequest class's copy constructor.
 */
KinesisVideoArchivedMediaRequestPrivate::KinesisVideoArchivedMediaRequestPrivate(const KinesisVideoArchivedMediaRequestPrivate &other,
                                     KinesisVideoArchivedMediaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisVideoArchivedMediaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisVideoArchivedMedia service's Action
 * query parameters.
 */
QString KinesisVideoArchivedMediaRequestPrivate::toString(const KinesisVideoArchivedMediaRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisVideoArchivedMediaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
