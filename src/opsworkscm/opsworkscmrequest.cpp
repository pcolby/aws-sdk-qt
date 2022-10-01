// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "opsworkscmrequest.h"
#include "opsworkscmrequest_p.h"

namespace QtAws {
namespace OpsWorksCm {

/*!
 * \class QtAws::OpsWorksCm::OpsWorksCmRequest
 * \brief The OpsWorksCmRequest class provides an interface for OpsWorksCm requests.
 *
 * \inmodule QtAwsOpsWorksCm
 */

/*!
 * \enum OpsWorksCmRequest::Action
 *
 * This enum describes the actions that can be performed as OpsWorksCm
 * requests.
 *
 * \value AssociateNodeAction OpsWorksCm AssociateNode action.
 * \value CreateBackupAction OpsWorksCm CreateBackup action.
 * \value CreateServerAction OpsWorksCm CreateServer action.
 * \value DeleteBackupAction OpsWorksCm DeleteBackup action.
 * \value DeleteServerAction OpsWorksCm DeleteServer action.
 * \value DescribeAccountAttributesAction OpsWorksCm DescribeAccountAttributes action.
 * \value DescribeBackupsAction OpsWorksCm DescribeBackups action.
 * \value DescribeEventsAction OpsWorksCm DescribeEvents action.
 * \value DescribeNodeAssociationStatusAction OpsWorksCm DescribeNodeAssociationStatus action.
 * \value DescribeServersAction OpsWorksCm DescribeServers action.
 * \value DisassociateNodeAction OpsWorksCm DisassociateNode action.
 * \value ExportServerEngineAttributeAction OpsWorksCm ExportServerEngineAttribute action.
 * \value ListTagsForResourceAction OpsWorksCm ListTagsForResource action.
 * \value RestoreServerAction OpsWorksCm RestoreServer action.
 * \value StartMaintenanceAction OpsWorksCm StartMaintenance action.
 * \value TagResourceAction OpsWorksCm TagResource action.
 * \value UntagResourceAction OpsWorksCm UntagResource action.
 * \value UpdateServerAction OpsWorksCm UpdateServer action.
 * \value UpdateServerEngineAttributesAction OpsWorksCm UpdateServerEngineAttributes action.
 */

/*!
 * Constructs a OpsWorksCmRequest object for OpsWorksCm \a action.
 */
OpsWorksCmRequest::OpsWorksCmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new OpsWorksCmRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
OpsWorksCmRequest::OpsWorksCmRequest(const OpsWorksCmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new OpsWorksCmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the OpsWorksCmRequest object to be equal to \a other.
 */
OpsWorksCmRequest& OpsWorksCmRequest::operator=(const OpsWorksCmRequest &other)
{
    Q_D(OpsWorksCmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa OpsWorksCmRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpsWorksCmRequestPrivate.
 */
OpsWorksCmRequest::OpsWorksCmRequest(OpsWorksCmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the OpsWorksCm action to be performed by this request.
 */
OpsWorksCmRequest::Action OpsWorksCmRequest::action() const
{
    Q_D(const OpsWorksCmRequest);
    return d->action;
}

/*!
 * Returns the name of the OpsWorksCm action to be performed by this request.
 */
QString OpsWorksCmRequest::actionString() const
{
    return OpsWorksCmRequestPrivate::toString(action());
}

/*!
 * Returns the OpsWorksCm API version implemented by this request.
 */
QString OpsWorksCmRequest::apiVersion() const
{
    Q_D(const OpsWorksCmRequest);
    return d->apiVersion;
}

/*!
 * Sets the OpsWorksCm action to be performed by this request to \a action.
 */
void OpsWorksCmRequest::setAction(const Action action)
{
    Q_D(OpsWorksCmRequest);
    d->action = action;
}

/*!
 * Sets the OpsWorksCm API version to include in this request to \a version.
 */
void OpsWorksCmRequest::setApiVersion(const QString &version)
{
    Q_D(OpsWorksCmRequest);
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
bool OpsWorksCmRequest::operator==(const OpsWorksCmRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid OpsWorksCm queue name.
 *
 * @par From OpsWorksCm FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid OpsWorksCm queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool OpsWorksCmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int OpsWorksCmRequest::clearParameter(const QString &name)
{
    Q_D(OpsWorksCmRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void OpsWorksCmRequest::clearParameters()
{
    Q_D(OpsWorksCmRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant OpsWorksCmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const OpsWorksCmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &OpsWorksCmRequest::parameters() const
{
    Q_D(const OpsWorksCmRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void OpsWorksCmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(OpsWorksCmRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void OpsWorksCmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(OpsWorksCmRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the OpsWorksCm request using the given
 * \a endpoint.
 *
 * This OpsWorksCm implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest OpsWorksCmRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const OpsWorksCmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::OpsWorksCm::OpsWorksCmRequestPrivate
 * \brief The OpsWorksCmRequestPrivate class provides private implementation for OpsWorksCmRequest.
 * \internal
 *
 * \inmodule QtAwsOpsWorksCm
 */

/*!
 * Constructs a OpsWorksCmRequestPrivate object for OpsWorksCm \a action,
 * with public implementation \a q.
 */
OpsWorksCmRequestPrivate::OpsWorksCmRequestPrivate(const OpsWorksCmRequest::Action action, OpsWorksCmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the OpsWorksCmRequest class's copy constructor.
 */
OpsWorksCmRequestPrivate::OpsWorksCmRequestPrivate(const OpsWorksCmRequestPrivate &other,
                                     OpsWorksCmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts OpsWorksCmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the OpsWorksCm service's Action
 * query parameters.
 */
QString OpsWorksCmRequestPrivate::toString(const OpsWorksCmRequest::Action &action)
{
    #define ActionToString(action) \
        case OpsWorksCmRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateNode);
        ActionToString(CreateBackup);
        ActionToString(CreateServer);
        ActionToString(DeleteBackup);
        ActionToString(DeleteServer);
        ActionToString(DescribeAccountAttributes);
        ActionToString(DescribeBackups);
        ActionToString(DescribeEvents);
        ActionToString(DescribeNodeAssociationStatus);
        ActionToString(DescribeServers);
        ActionToString(DisassociateNode);
        ActionToString(ExportServerEngineAttribute);
        ActionToString(ListTagsForResource);
        ActionToString(RestoreServer);
        ActionToString(StartMaintenance);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateServer);
        ActionToString(UpdateServerEngineAttributes);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace OpsWorksCm
} // namespace QtAws
