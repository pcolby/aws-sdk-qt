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

#include "migrationhubconfigrequest.h"
#include "migrationhubconfigrequest_p.h"

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::MigrationHubConfigRequest
 * \brief The MigrationHubConfigRequest class provides an interface for MigrationHubConfig requests.
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * \enum MigrationHubConfigRequest::Action
 *
 * This enum describes the actions that can be performed as MigrationHubConfig
 * requests.
 *
 * \value CreateHomeRegionControlAction MigrationHubConfig CreateHomeRegionControl action.
 * \value DescribeHomeRegionControlsAction MigrationHubConfig DescribeHomeRegionControls action.
 * \value GetHomeRegionAction MigrationHubConfig GetHomeRegion action.
 */

/*!
 * Constructs a MigrationHubConfigRequest object for MigrationHubConfig \a action.
 */
MigrationHubConfigRequest::MigrationHubConfigRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubConfigRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MigrationHubConfigRequest::MigrationHubConfigRequest(const MigrationHubConfigRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MigrationHubConfigRequest object to be equal to \a other.
 */
MigrationHubConfigRequest& MigrationHubConfigRequest::operator=(const MigrationHubConfigRequest &other)
{
    Q_D(MigrationHubConfigRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MigrationHubConfigRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubConfigRequestPrivate.
 */
MigrationHubConfigRequest::MigrationHubConfigRequest(MigrationHubConfigRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MigrationHubConfig action to be performed by this request.
 */
MigrationHubConfigRequest::Action MigrationHubConfigRequest::action() const
{
    Q_D(const MigrationHubConfigRequest);
    return d->action;
}

/*!
 * Returns the name of the MigrationHubConfig action to be performed by this request.
 */
QString MigrationHubConfigRequest::actionString() const
{
    return MigrationHubConfigRequestPrivate::toString(action());
}

/*!
 * Returns the MigrationHubConfig API version implemented by this request.
 */
QString MigrationHubConfigRequest::apiVersion() const
{
    Q_D(const MigrationHubConfigRequest);
    return d->apiVersion;
}

/*!
 * Sets the MigrationHubConfig action to be performed by this request to \a action.
 */
void MigrationHubConfigRequest::setAction(const Action action)
{
    Q_D(MigrationHubConfigRequest);
    d->action = action;
}

/*!
 * Sets the MigrationHubConfig API version to include in this request to \a version.
 */
void MigrationHubConfigRequest::setApiVersion(const QString &version)
{
    Q_D(MigrationHubConfigRequest);
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
bool MigrationHubConfigRequest::operator==(const MigrationHubConfigRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MigrationHubConfig queue name.
 *
 * @par From MigrationHubConfig FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MigrationHubConfig queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MigrationHubConfigRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MigrationHubConfigRequest::clearParameter(const QString &name)
{
    Q_D(MigrationHubConfigRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MigrationHubConfigRequest::clearParameters()
{
    Q_D(MigrationHubConfigRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MigrationHubConfigRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MigrationHubConfigRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MigrationHubConfigRequest::parameters() const
{
    Q_D(const MigrationHubConfigRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MigrationHubConfigRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MigrationHubConfigRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MigrationHubConfigRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MigrationHubConfigRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MigrationHubConfig request using the given
 * \a endpoint.
 *
 * This MigrationHubConfig implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MigrationHubConfigRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MigrationHubConfigRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MigrationHubConfig::MigrationHubConfigRequestPrivate
 * \brief The MigrationHubConfigRequestPrivate class provides private implementation for MigrationHubConfigRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a MigrationHubConfigRequestPrivate object for MigrationHubConfig \a action,
 * with public implementation \a q.
 */
MigrationHubConfigRequestPrivate::MigrationHubConfigRequestPrivate(const MigrationHubConfigRequest::Action action, MigrationHubConfigRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-06-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MigrationHubConfigRequest class's copy constructor.
 */
MigrationHubConfigRequestPrivate::MigrationHubConfigRequestPrivate(const MigrationHubConfigRequestPrivate &other,
                                     MigrationHubConfigRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MigrationHubConfigRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MigrationHubConfig service's Action
 * query parameters.
 */
QString MigrationHubConfigRequestPrivate::toString(const MigrationHubConfigRequest::Action &action)
{
    #define ActionToString(action) \
        case MigrationHubConfigRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateHomeRegionControl);
        ActionToString(DescribeHomeRegionControls);
        ActionToString(GetHomeRegion);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MigrationHubConfig
} // namespace QtAws
