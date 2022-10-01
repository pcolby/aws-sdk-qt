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

#include "schemasrequest.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SchemasRequest
 * \brief The SchemasRequest class provides an interface for Schemas requests.
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * \enum SchemasRequest::Action
 *
 * This enum describes the actions that can be performed as Schemas
 * requests.
 *
 * \value CreateDiscovererAction Schemas CreateDiscoverer action.
 * \value CreateRegistryAction Schemas CreateRegistry action.
 * \value CreateSchemaAction Schemas CreateSchema action.
 * \value DeleteDiscovererAction Schemas DeleteDiscoverer action.
 * \value DeleteRegistryAction Schemas DeleteRegistry action.
 * \value DeleteResourcePolicyAction Schemas DeleteResourcePolicy action.
 * \value DeleteSchemaAction Schemas DeleteSchema action.
 * \value DeleteSchemaVersionAction Schemas DeleteSchemaVersion action.
 * \value DescribeCodeBindingAction Schemas DescribeCodeBinding action.
 * \value DescribeDiscovererAction Schemas DescribeDiscoverer action.
 * \value DescribeRegistryAction Schemas DescribeRegistry action.
 * \value DescribeSchemaAction Schemas DescribeSchema action.
 * \value ExportSchemaAction Schemas ExportSchema action.
 * \value GetCodeBindingSourceAction Schemas GetCodeBindingSource action.
 * \value GetDiscoveredSchemaAction Schemas GetDiscoveredSchema action.
 * \value GetResourcePolicyAction Schemas GetResourcePolicy action.
 * \value ListDiscoverersAction Schemas ListDiscoverers action.
 * \value ListRegistriesAction Schemas ListRegistries action.
 * \value ListSchemaVersionsAction Schemas ListSchemaVersions action.
 * \value ListSchemasAction Schemas ListSchemas action.
 * \value ListTagsForResourceAction Schemas ListTagsForResource action.
 * \value PutCodeBindingAction Schemas PutCodeBinding action.
 * \value PutResourcePolicyAction Schemas PutResourcePolicy action.
 * \value SearchSchemasAction Schemas SearchSchemas action.
 * \value StartDiscovererAction Schemas StartDiscoverer action.
 * \value StopDiscovererAction Schemas StopDiscoverer action.
 * \value TagResourceAction Schemas TagResource action.
 * \value UntagResourceAction Schemas UntagResource action.
 * \value UpdateDiscovererAction Schemas UpdateDiscoverer action.
 * \value UpdateRegistryAction Schemas UpdateRegistry action.
 * \value UpdateSchemaAction Schemas UpdateSchema action.
 */

/*!
 * Constructs a SchemasRequest object for Schemas \a action.
 */
SchemasRequest::SchemasRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SchemasRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SchemasRequest::SchemasRequest(const SchemasRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SchemasRequest object to be equal to \a other.
 */
SchemasRequest& SchemasRequest::operator=(const SchemasRequest &other)
{
    Q_D(SchemasRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SchemasRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SchemasRequestPrivate.
 */
SchemasRequest::SchemasRequest(SchemasRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Schemas action to be performed by this request.
 */
SchemasRequest::Action SchemasRequest::action() const
{
    Q_D(const SchemasRequest);
    return d->action;
}

/*!
 * Returns the name of the Schemas action to be performed by this request.
 */
QString SchemasRequest::actionString() const
{
    return SchemasRequestPrivate::toString(action());
}

/*!
 * Returns the Schemas API version implemented by this request.
 */
QString SchemasRequest::apiVersion() const
{
    Q_D(const SchemasRequest);
    return d->apiVersion;
}

/*!
 * Sets the Schemas action to be performed by this request to \a action.
 */
void SchemasRequest::setAction(const Action action)
{
    Q_D(SchemasRequest);
    d->action = action;
}

/*!
 * Sets the Schemas API version to include in this request to \a version.
 */
void SchemasRequest::setApiVersion(const QString &version)
{
    Q_D(SchemasRequest);
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
bool SchemasRequest::operator==(const SchemasRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Schemas queue name.
 *
 * @par From Schemas FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Schemas queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SchemasRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SchemasRequest::clearParameter(const QString &name)
{
    Q_D(SchemasRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SchemasRequest::clearParameters()
{
    Q_D(SchemasRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SchemasRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SchemasRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SchemasRequest::parameters() const
{
    Q_D(const SchemasRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SchemasRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SchemasRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SchemasRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SchemasRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Schemas request using the given
 * \a endpoint.
 *
 * This Schemas implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SchemasRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SchemasRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Schemas::SchemasRequestPrivate
 * \brief The SchemasRequestPrivate class provides private implementation for SchemasRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SchemasRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
SchemasRequestPrivate::SchemasRequestPrivate(const SchemasRequest::Action action, SchemasRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-02"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SchemasRequest class's copy constructor.
 */
SchemasRequestPrivate::SchemasRequestPrivate(const SchemasRequestPrivate &other,
                                     SchemasRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SchemasRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Schemas service's Action
 * query parameters.
 */
QString SchemasRequestPrivate::toString(const SchemasRequest::Action &action)
{
    #define ActionToString(action) \
        case SchemasRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDiscoverer);
        ActionToString(CreateRegistry);
        ActionToString(CreateSchema);
        ActionToString(DeleteDiscoverer);
        ActionToString(DeleteRegistry);
        ActionToString(DeleteResourcePolicy);
        ActionToString(DeleteSchema);
        ActionToString(DeleteSchemaVersion);
        ActionToString(DescribeCodeBinding);
        ActionToString(DescribeDiscoverer);
        ActionToString(DescribeRegistry);
        ActionToString(DescribeSchema);
        ActionToString(ExportSchema);
        ActionToString(GetCodeBindingSource);
        ActionToString(GetDiscoveredSchema);
        ActionToString(GetResourcePolicy);
        ActionToString(ListDiscoverers);
        ActionToString(ListRegistries);
        ActionToString(ListSchemaVersions);
        ActionToString(ListSchemas);
        ActionToString(ListTagsForResource);
        ActionToString(PutCodeBinding);
        ActionToString(PutResourcePolicy);
        ActionToString(SearchSchemas);
        ActionToString(StartDiscoverer);
        ActionToString(StopDiscoverer);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDiscoverer);
        ActionToString(UpdateRegistry);
        ActionToString(UpdateSchema);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Schemas
} // namespace QtAws
