// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transferrequest.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TransferRequest
 * \brief The TransferRequest class provides an interface for Transfer requests.
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * \enum TransferRequest::Action
 *
 * This enum describes the actions that can be performed as Transfer
 * requests.
 *
 * \value CreateAccessAction Transfer CreateAccess action.
 * \value CreateAgreementAction Transfer CreateAgreement action.
 * \value CreateConnectorAction Transfer CreateConnector action.
 * \value CreateProfileAction Transfer CreateProfile action.
 * \value CreateServerAction Transfer CreateServer action.
 * \value CreateUserAction Transfer CreateUser action.
 * \value CreateWorkflowAction Transfer CreateWorkflow action.
 * \value DeleteAccessAction Transfer DeleteAccess action.
 * \value DeleteAgreementAction Transfer DeleteAgreement action.
 * \value DeleteCertificateAction Transfer DeleteCertificate action.
 * \value DeleteConnectorAction Transfer DeleteConnector action.
 * \value DeleteHostKeyAction Transfer DeleteHostKey action.
 * \value DeleteProfileAction Transfer DeleteProfile action.
 * \value DeleteServerAction Transfer DeleteServer action.
 * \value DeleteSshPublicKeyAction Transfer DeleteSshPublicKey action.
 * \value DeleteUserAction Transfer DeleteUser action.
 * \value DeleteWorkflowAction Transfer DeleteWorkflow action.
 * \value DescribeAccessAction Transfer DescribeAccess action.
 * \value DescribeAgreementAction Transfer DescribeAgreement action.
 * \value DescribeCertificateAction Transfer DescribeCertificate action.
 * \value DescribeConnectorAction Transfer DescribeConnector action.
 * \value DescribeExecutionAction Transfer DescribeExecution action.
 * \value DescribeHostKeyAction Transfer DescribeHostKey action.
 * \value DescribeProfileAction Transfer DescribeProfile action.
 * \value DescribeSecurityPolicyAction Transfer DescribeSecurityPolicy action.
 * \value DescribeServerAction Transfer DescribeServer action.
 * \value DescribeUserAction Transfer DescribeUser action.
 * \value DescribeWorkflowAction Transfer DescribeWorkflow action.
 * \value ImportCertificateAction Transfer ImportCertificate action.
 * \value ImportHostKeyAction Transfer ImportHostKey action.
 * \value ImportSshPublicKeyAction Transfer ImportSshPublicKey action.
 * \value ListAccessesAction Transfer ListAccesses action.
 * \value ListAgreementsAction Transfer ListAgreements action.
 * \value ListCertificatesAction Transfer ListCertificates action.
 * \value ListConnectorsAction Transfer ListConnectors action.
 * \value ListExecutionsAction Transfer ListExecutions action.
 * \value ListHostKeysAction Transfer ListHostKeys action.
 * \value ListProfilesAction Transfer ListProfiles action.
 * \value ListSecurityPoliciesAction Transfer ListSecurityPolicies action.
 * \value ListServersAction Transfer ListServers action.
 * \value ListTagsForResourceAction Transfer ListTagsForResource action.
 * \value ListUsersAction Transfer ListUsers action.
 * \value ListWorkflowsAction Transfer ListWorkflows action.
 * \value SendWorkflowStepStateAction Transfer SendWorkflowStepState action.
 * \value StartFileTransferAction Transfer StartFileTransfer action.
 * \value StartServerAction Transfer StartServer action.
 * \value StopServerAction Transfer StopServer action.
 * \value TagResourceAction Transfer TagResource action.
 * \value TestIdentityProviderAction Transfer TestIdentityProvider action.
 * \value UntagResourceAction Transfer UntagResource action.
 * \value UpdateAccessAction Transfer UpdateAccess action.
 * \value UpdateAgreementAction Transfer UpdateAgreement action.
 * \value UpdateCertificateAction Transfer UpdateCertificate action.
 * \value UpdateConnectorAction Transfer UpdateConnector action.
 * \value UpdateHostKeyAction Transfer UpdateHostKey action.
 * \value UpdateProfileAction Transfer UpdateProfile action.
 * \value UpdateServerAction Transfer UpdateServer action.
 * \value UpdateUserAction Transfer UpdateUser action.
 */

/*!
 * Constructs a TransferRequest object for Transfer \a action.
 */
TransferRequest::TransferRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TransferRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TransferRequest::TransferRequest(const TransferRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TransferRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TransferRequest object to be equal to \a other.
 */
TransferRequest& TransferRequest::operator=(const TransferRequest &other)
{
    Q_D(TransferRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TransferRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TransferRequestPrivate.
 */
TransferRequest::TransferRequest(TransferRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Transfer action to be performed by this request.
 */
TransferRequest::Action TransferRequest::action() const
{
    Q_D(const TransferRequest);
    return d->action;
}

/*!
 * Returns the name of the Transfer action to be performed by this request.
 */
QString TransferRequest::actionString() const
{
    return TransferRequestPrivate::toString(action());
}

/*!
 * Returns the Transfer API version implemented by this request.
 */
QString TransferRequest::apiVersion() const
{
    Q_D(const TransferRequest);
    return d->apiVersion;
}

/*!
 * Sets the Transfer action to be performed by this request to \a action.
 */
void TransferRequest::setAction(const Action action)
{
    Q_D(TransferRequest);
    d->action = action;
}

/*!
 * Sets the Transfer API version to include in this request to \a version.
 */
void TransferRequest::setApiVersion(const QString &version)
{
    Q_D(TransferRequest);
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
bool TransferRequest::operator==(const TransferRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Transfer queue name.
 *
 * @par From Transfer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Transfer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TransferRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TransferRequest::clearParameter(const QString &name)
{
    Q_D(TransferRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TransferRequest::clearParameters()
{
    Q_D(TransferRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TransferRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TransferRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TransferRequest::parameters() const
{
    Q_D(const TransferRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TransferRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TransferRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TransferRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TransferRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Transfer request using the given
 * \a endpoint.
 *
 * This Transfer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TransferRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TransferRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Transfer::TransferRequestPrivate
 * \brief The TransferRequestPrivate class provides private implementation for TransferRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TransferRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
TransferRequestPrivate::TransferRequestPrivate(const TransferRequest::Action action, TransferRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TransferRequest class's copy constructor.
 */
TransferRequestPrivate::TransferRequestPrivate(const TransferRequestPrivate &other,
                                     TransferRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TransferRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Transfer service's Action
 * query parameters.
 */
QString TransferRequestPrivate::toString(const TransferRequest::Action &action)
{
    #define ActionToString(action) \
        case TransferRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAccess);
        ActionToString(CreateAgreement);
        ActionToString(CreateConnector);
        ActionToString(CreateProfile);
        ActionToString(CreateServer);
        ActionToString(CreateUser);
        ActionToString(CreateWorkflow);
        ActionToString(DeleteAccess);
        ActionToString(DeleteAgreement);
        ActionToString(DeleteCertificate);
        ActionToString(DeleteConnector);
        ActionToString(DeleteHostKey);
        ActionToString(DeleteProfile);
        ActionToString(DeleteServer);
        ActionToString(DeleteSshPublicKey);
        ActionToString(DeleteUser);
        ActionToString(DeleteWorkflow);
        ActionToString(DescribeAccess);
        ActionToString(DescribeAgreement);
        ActionToString(DescribeCertificate);
        ActionToString(DescribeConnector);
        ActionToString(DescribeExecution);
        ActionToString(DescribeHostKey);
        ActionToString(DescribeProfile);
        ActionToString(DescribeSecurityPolicy);
        ActionToString(DescribeServer);
        ActionToString(DescribeUser);
        ActionToString(DescribeWorkflow);
        ActionToString(ImportCertificate);
        ActionToString(ImportHostKey);
        ActionToString(ImportSshPublicKey);
        ActionToString(ListAccesses);
        ActionToString(ListAgreements);
        ActionToString(ListCertificates);
        ActionToString(ListConnectors);
        ActionToString(ListExecutions);
        ActionToString(ListHostKeys);
        ActionToString(ListProfiles);
        ActionToString(ListSecurityPolicies);
        ActionToString(ListServers);
        ActionToString(ListTagsForResource);
        ActionToString(ListUsers);
        ActionToString(ListWorkflows);
        ActionToString(SendWorkflowStepState);
        ActionToString(StartFileTransfer);
        ActionToString(StartServer);
        ActionToString(StopServer);
        ActionToString(TagResource);
        ActionToString(TestIdentityProvider);
        ActionToString(UntagResource);
        ActionToString(UpdateAccess);
        ActionToString(UpdateAgreement);
        ActionToString(UpdateCertificate);
        ActionToString(UpdateConnector);
        ActionToString(UpdateHostKey);
        ActionToString(UpdateProfile);
        ActionToString(UpdateServer);
        ActionToString(UpdateUser);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Transfer
} // namespace QtAws
