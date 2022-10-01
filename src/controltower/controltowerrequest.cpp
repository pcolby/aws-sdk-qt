// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "controltowerrequest.h"
#include "controltowerrequest_p.h"

namespace QtAws {
namespace ControlTower {

/*!
 * \class QtAws::ControlTower::ControlTowerRequest
 * \brief The ControlTowerRequest class provides an interface for ControlTower requests.
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * \enum ControlTowerRequest::Action
 *
 * This enum describes the actions that can be performed as ControlTower
 * requests.
 *
 * \value DisableControlAction ControlTower DisableControl action.
 * \value EnableControlAction ControlTower EnableControl action.
 * \value GetControlOperationAction ControlTower GetControlOperation action.
 * \value ListEnabledControlsAction ControlTower ListEnabledControls action.
 */

/*!
 * Constructs a ControlTowerRequest object for ControlTower \a action.
 */
ControlTowerRequest::ControlTowerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ControlTowerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ControlTowerRequest::ControlTowerRequest(const ControlTowerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ControlTowerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ControlTowerRequest object to be equal to \a other.
 */
ControlTowerRequest& ControlTowerRequest::operator=(const ControlTowerRequest &other)
{
    Q_D(ControlTowerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ControlTowerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ControlTowerRequestPrivate.
 */
ControlTowerRequest::ControlTowerRequest(ControlTowerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ControlTower action to be performed by this request.
 */
ControlTowerRequest::Action ControlTowerRequest::action() const
{
    Q_D(const ControlTowerRequest);
    return d->action;
}

/*!
 * Returns the name of the ControlTower action to be performed by this request.
 */
QString ControlTowerRequest::actionString() const
{
    return ControlTowerRequestPrivate::toString(action());
}

/*!
 * Returns the ControlTower API version implemented by this request.
 */
QString ControlTowerRequest::apiVersion() const
{
    Q_D(const ControlTowerRequest);
    return d->apiVersion;
}

/*!
 * Sets the ControlTower action to be performed by this request to \a action.
 */
void ControlTowerRequest::setAction(const Action action)
{
    Q_D(ControlTowerRequest);
    d->action = action;
}

/*!
 * Sets the ControlTower API version to include in this request to \a version.
 */
void ControlTowerRequest::setApiVersion(const QString &version)
{
    Q_D(ControlTowerRequest);
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
bool ControlTowerRequest::operator==(const ControlTowerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ControlTower queue name.
 *
 * @par From ControlTower FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ControlTower queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ControlTowerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ControlTowerRequest::clearParameter(const QString &name)
{
    Q_D(ControlTowerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ControlTowerRequest::clearParameters()
{
    Q_D(ControlTowerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ControlTowerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ControlTowerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ControlTowerRequest::parameters() const
{
    Q_D(const ControlTowerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ControlTowerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ControlTowerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ControlTowerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ControlTowerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ControlTower request using the given
 * \a endpoint.
 *
 * This ControlTower implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ControlTowerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ControlTowerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ControlTower::ControlTowerRequestPrivate
 * \brief The ControlTowerRequestPrivate class provides private implementation for ControlTowerRequest.
 * \internal
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ControlTowerRequestPrivate object for ControlTower \a action,
 * with public implementation \a q.
 */
ControlTowerRequestPrivate::ControlTowerRequestPrivate(const ControlTowerRequest::Action action, ControlTowerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ControlTowerRequest class's copy constructor.
 */
ControlTowerRequestPrivate::ControlTowerRequestPrivate(const ControlTowerRequestPrivate &other,
                                     ControlTowerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ControlTowerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ControlTower service's Action
 * query parameters.
 */
QString ControlTowerRequestPrivate::toString(const ControlTowerRequest::Action &action)
{
    #define ActionToString(action) \
        case ControlTowerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DisableControl);
        ActionToString(EnableControl);
        ActionToString(GetControlOperation);
        ActionToString(ListEnabledControls);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ControlTower
} // namespace QtAws
