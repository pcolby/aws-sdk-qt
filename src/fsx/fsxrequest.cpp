/*
    Copyright 2013-2020 Paul Colby

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

#include "fsxrequest.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::FSxRequest
 * \brief The FSxRequest class provides an interface for FSx requests.
 *
 * \inmodule QtAwsFSx
 */

/*!
 * \enum FSxRequest::Action
 *
 * This enum describes the actions that can be performed as FSx
 * requests.
 *
 * \value CreateBackupAction FSx CreateBackup action.
 * \value CreateFileSystemAction FSx CreateFileSystem action.
 * \value CreateFileSystemFromBackupAction FSx CreateFileSystemFromBackup action.
 * \value DeleteBackupAction FSx DeleteBackup action.
 * \value DeleteFileSystemAction FSx DeleteFileSystem action.
 * \value DescribeBackupsAction FSx DescribeBackups action.
 * \value DescribeFileSystemsAction FSx DescribeFileSystems action.
 * \value ListTagsForResourceAction FSx ListTagsForResource action.
 * \value TagResourceAction FSx TagResource action.
 * \value UntagResourceAction FSx UntagResource action.
 * \value UpdateFileSystemAction FSx UpdateFileSystem action.
 */

/*!
 * Constructs a FSxRequest object for FSx \a action.
 */
FSxRequest::FSxRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FSxRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FSxRequest::FSxRequest(const FSxRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FSxRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FSxRequest object to be equal to \a other.
 */
FSxRequest& FSxRequest::operator=(const FSxRequest &other)
{
    Q_D(FSxRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FSxRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FSxRequestPrivate.
 */
FSxRequest::FSxRequest(FSxRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the FSx action to be performed by this request.
 */
FSxRequest::Action FSxRequest::action() const
{
    Q_D(const FSxRequest);
    return d->action;
}

/*!
 * Returns the name of the FSx action to be performed by this request.
 */
QString FSxRequest::actionString() const
{
    return FSxRequestPrivate::toString(action());
}

/*!
 * Returns the FSx API version implemented by this request.
 */
QString FSxRequest::apiVersion() const
{
    Q_D(const FSxRequest);
    return d->apiVersion;
}

/*!
 * Sets the FSx action to be performed by this request to \a action.
 */
void FSxRequest::setAction(const Action action)
{
    Q_D(FSxRequest);
    d->action = action;
}

/*!
 * Sets the FSx API version to include in this request to \a version.
 */
void FSxRequest::setApiVersion(const QString &version)
{
    Q_D(FSxRequest);
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
bool FSxRequest::operator==(const FSxRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid FSx queue name.
 *
 * @par From FSx FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid FSx queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FSxRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FSxRequest::clearParameter(const QString &name)
{
    Q_D(FSxRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FSxRequest::clearParameters()
{
    Q_D(FSxRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FSxRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FSxRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FSxRequest::parameters() const
{
    Q_D(const FSxRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FSxRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FSxRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FSxRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FSxRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the FSx request using the given
 * \a endpoint.
 *
 * This FSx implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FSxRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FSxRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::FSx::FSxRequestPrivate
 * \brief The FSxRequestPrivate class provides private implementation for FSxRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a FSxRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
FSxRequestPrivate::FSxRequestPrivate(const FSxRequest::Action action, FSxRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FSxRequest class's copy constructor.
 */
FSxRequestPrivate::FSxRequestPrivate(const FSxRequestPrivate &other,
                                     FSxRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FSxRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the FSx service's Action
 * query parameters.
 */
QString FSxRequestPrivate::toString(const FSxRequest::Action &action)
{
    #define ActionToString(action) \
        case FSxRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace FSx
} // namespace QtAws
