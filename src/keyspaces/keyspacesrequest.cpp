// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "keyspacesrequest.h"
#include "keyspacesrequest_p.h"

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::KeyspacesRequest
 * \brief The KeyspacesRequest class provides an interface for Keyspaces requests.
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * \enum KeyspacesRequest::Action
 *
 * This enum describes the actions that can be performed as Keyspaces
 * requests.
 *
 * \value CreateKeyspaceAction Keyspaces CreateKeyspace action.
 * \value CreateTableAction Keyspaces CreateTable action.
 * \value DeleteKeyspaceAction Keyspaces DeleteKeyspace action.
 * \value DeleteTableAction Keyspaces DeleteTable action.
 * \value GetKeyspaceAction Keyspaces GetKeyspace action.
 * \value GetTableAction Keyspaces GetTable action.
 * \value ListKeyspacesAction Keyspaces ListKeyspaces action.
 * \value ListTablesAction Keyspaces ListTables action.
 * \value ListTagsForResourceAction Keyspaces ListTagsForResource action.
 * \value RestoreTableAction Keyspaces RestoreTable action.
 * \value TagResourceAction Keyspaces TagResource action.
 * \value UntagResourceAction Keyspaces UntagResource action.
 * \value UpdateTableAction Keyspaces UpdateTable action.
 */

/*!
 * Constructs a KeyspacesRequest object for Keyspaces \a action.
 */
KeyspacesRequest::KeyspacesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KeyspacesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KeyspacesRequest::KeyspacesRequest(const KeyspacesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KeyspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KeyspacesRequest object to be equal to \a other.
 */
KeyspacesRequest& KeyspacesRequest::operator=(const KeyspacesRequest &other)
{
    Q_D(KeyspacesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KeyspacesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KeyspacesRequestPrivate.
 */
KeyspacesRequest::KeyspacesRequest(KeyspacesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Keyspaces action to be performed by this request.
 */
KeyspacesRequest::Action KeyspacesRequest::action() const
{
    Q_D(const KeyspacesRequest);
    return d->action;
}

/*!
 * Returns the name of the Keyspaces action to be performed by this request.
 */
QString KeyspacesRequest::actionString() const
{
    return KeyspacesRequestPrivate::toString(action());
}

/*!
 * Returns the Keyspaces API version implemented by this request.
 */
QString KeyspacesRequest::apiVersion() const
{
    Q_D(const KeyspacesRequest);
    return d->apiVersion;
}

/*!
 * Sets the Keyspaces action to be performed by this request to \a action.
 */
void KeyspacesRequest::setAction(const Action action)
{
    Q_D(KeyspacesRequest);
    d->action = action;
}

/*!
 * Sets the Keyspaces API version to include in this request to \a version.
 */
void KeyspacesRequest::setApiVersion(const QString &version)
{
    Q_D(KeyspacesRequest);
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
bool KeyspacesRequest::operator==(const KeyspacesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Keyspaces queue name.
 *
 * @par From Keyspaces FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Keyspaces queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KeyspacesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KeyspacesRequest::clearParameter(const QString &name)
{
    Q_D(KeyspacesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KeyspacesRequest::clearParameters()
{
    Q_D(KeyspacesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KeyspacesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KeyspacesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KeyspacesRequest::parameters() const
{
    Q_D(const KeyspacesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KeyspacesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KeyspacesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KeyspacesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KeyspacesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Keyspaces request using the given
 * \a endpoint.
 *
 * This Keyspaces implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KeyspacesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KeyspacesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Keyspaces::KeyspacesRequestPrivate
 * \brief The KeyspacesRequestPrivate class provides private implementation for KeyspacesRequest.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a KeyspacesRequestPrivate object for Keyspaces \a action,
 * with public implementation \a q.
 */
KeyspacesRequestPrivate::KeyspacesRequestPrivate(const KeyspacesRequest::Action action, KeyspacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2022-02-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KeyspacesRequest class's copy constructor.
 */
KeyspacesRequestPrivate::KeyspacesRequestPrivate(const KeyspacesRequestPrivate &other,
                                     KeyspacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KeyspacesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Keyspaces service's Action
 * query parameters.
 */
QString KeyspacesRequestPrivate::toString(const KeyspacesRequest::Action &action)
{
    #define ActionToString(action) \
        case KeyspacesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateKeyspace);
        ActionToString(CreateTable);
        ActionToString(DeleteKeyspace);
        ActionToString(DeleteTable);
        ActionToString(GetKeyspace);
        ActionToString(GetTable);
        ActionToString(ListKeyspaces);
        ActionToString(ListTables);
        ActionToString(ListTagsForResource);
        ActionToString(RestoreTable);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateTable);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Keyspaces
} // namespace QtAws
