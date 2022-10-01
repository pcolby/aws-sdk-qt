// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "licensemanagerrequest.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::LicenseManagerRequest
 * \brief The LicenseManagerRequest class provides an interface for LicenseManager requests.
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * \enum LicenseManagerRequest::Action
 *
 * This enum describes the actions that can be performed as LicenseManager
 * requests.
 *
 * \value AcceptGrantAction LicenseManager AcceptGrant action.
 * \value CheckInLicenseAction LicenseManager CheckInLicense action.
 * \value CheckoutBorrowLicenseAction LicenseManager CheckoutBorrowLicense action.
 * \value CheckoutLicenseAction LicenseManager CheckoutLicense action.
 * \value CreateGrantAction LicenseManager CreateGrant action.
 * \value CreateGrantVersionAction LicenseManager CreateGrantVersion action.
 * \value CreateLicenseAction LicenseManager CreateLicense action.
 * \value CreateLicenseConfigurationAction LicenseManager CreateLicenseConfiguration action.
 * \value CreateLicenseConversionTaskForResourceAction LicenseManager CreateLicenseConversionTaskForResource action.
 * \value CreateLicenseManagerReportGeneratorAction LicenseManager CreateLicenseManagerReportGenerator action.
 * \value CreateLicenseVersionAction LicenseManager CreateLicenseVersion action.
 * \value CreateTokenAction LicenseManager CreateToken action.
 * \value DeleteGrantAction LicenseManager DeleteGrant action.
 * \value DeleteLicenseAction LicenseManager DeleteLicense action.
 * \value DeleteLicenseConfigurationAction LicenseManager DeleteLicenseConfiguration action.
 * \value DeleteLicenseManagerReportGeneratorAction LicenseManager DeleteLicenseManagerReportGenerator action.
 * \value DeleteTokenAction LicenseManager DeleteToken action.
 * \value ExtendLicenseConsumptionAction LicenseManager ExtendLicenseConsumption action.
 * \value GetAccessTokenAction LicenseManager GetAccessToken action.
 * \value GetGrantAction LicenseManager GetGrant action.
 * \value GetLicenseAction LicenseManager GetLicense action.
 * \value GetLicenseConfigurationAction LicenseManager GetLicenseConfiguration action.
 * \value GetLicenseConversionTaskAction LicenseManager GetLicenseConversionTask action.
 * \value GetLicenseManagerReportGeneratorAction LicenseManager GetLicenseManagerReportGenerator action.
 * \value GetLicenseUsageAction LicenseManager GetLicenseUsage action.
 * \value GetServiceSettingsAction LicenseManager GetServiceSettings action.
 * \value ListAssociationsForLicenseConfigurationAction LicenseManager ListAssociationsForLicenseConfiguration action.
 * \value ListDistributedGrantsAction LicenseManager ListDistributedGrants action.
 * \value ListFailuresForLicenseConfigurationOperationsAction LicenseManager ListFailuresForLicenseConfigurationOperations action.
 * \value ListLicenseConfigurationsAction LicenseManager ListLicenseConfigurations action.
 * \value ListLicenseConversionTasksAction LicenseManager ListLicenseConversionTasks action.
 * \value ListLicenseManagerReportGeneratorsAction LicenseManager ListLicenseManagerReportGenerators action.
 * \value ListLicenseSpecificationsForResourceAction LicenseManager ListLicenseSpecificationsForResource action.
 * \value ListLicenseVersionsAction LicenseManager ListLicenseVersions action.
 * \value ListLicensesAction LicenseManager ListLicenses action.
 * \value ListReceivedGrantsAction LicenseManager ListReceivedGrants action.
 * \value ListReceivedLicensesAction LicenseManager ListReceivedLicenses action.
 * \value ListResourceInventoryAction LicenseManager ListResourceInventory action.
 * \value ListTagsForResourceAction LicenseManager ListTagsForResource action.
 * \value ListTokensAction LicenseManager ListTokens action.
 * \value ListUsageForLicenseConfigurationAction LicenseManager ListUsageForLicenseConfiguration action.
 * \value RejectGrantAction LicenseManager RejectGrant action.
 * \value TagResourceAction LicenseManager TagResource action.
 * \value UntagResourceAction LicenseManager UntagResource action.
 * \value UpdateLicenseConfigurationAction LicenseManager UpdateLicenseConfiguration action.
 * \value UpdateLicenseManagerReportGeneratorAction LicenseManager UpdateLicenseManagerReportGenerator action.
 * \value UpdateLicenseSpecificationsForResourceAction LicenseManager UpdateLicenseSpecificationsForResource action.
 * \value UpdateServiceSettingsAction LicenseManager UpdateServiceSettings action.
 */

/*!
 * Constructs a LicenseManagerRequest object for LicenseManager \a action.
 */
LicenseManagerRequest::LicenseManagerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LicenseManagerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LicenseManagerRequest::LicenseManagerRequest(const LicenseManagerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LicenseManagerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LicenseManagerRequest object to be equal to \a other.
 */
LicenseManagerRequest& LicenseManagerRequest::operator=(const LicenseManagerRequest &other)
{
    Q_D(LicenseManagerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LicenseManagerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LicenseManagerRequestPrivate.
 */
LicenseManagerRequest::LicenseManagerRequest(LicenseManagerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LicenseManager action to be performed by this request.
 */
LicenseManagerRequest::Action LicenseManagerRequest::action() const
{
    Q_D(const LicenseManagerRequest);
    return d->action;
}

/*!
 * Returns the name of the LicenseManager action to be performed by this request.
 */
QString LicenseManagerRequest::actionString() const
{
    return LicenseManagerRequestPrivate::toString(action());
}

/*!
 * Returns the LicenseManager API version implemented by this request.
 */
QString LicenseManagerRequest::apiVersion() const
{
    Q_D(const LicenseManagerRequest);
    return d->apiVersion;
}

/*!
 * Sets the LicenseManager action to be performed by this request to \a action.
 */
void LicenseManagerRequest::setAction(const Action action)
{
    Q_D(LicenseManagerRequest);
    d->action = action;
}

/*!
 * Sets the LicenseManager API version to include in this request to \a version.
 */
void LicenseManagerRequest::setApiVersion(const QString &version)
{
    Q_D(LicenseManagerRequest);
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
bool LicenseManagerRequest::operator==(const LicenseManagerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LicenseManager queue name.
 *
 * @par From LicenseManager FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LicenseManager queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LicenseManagerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LicenseManagerRequest::clearParameter(const QString &name)
{
    Q_D(LicenseManagerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LicenseManagerRequest::clearParameters()
{
    Q_D(LicenseManagerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LicenseManagerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LicenseManagerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LicenseManagerRequest::parameters() const
{
    Q_D(const LicenseManagerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LicenseManagerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LicenseManagerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LicenseManagerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LicenseManagerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LicenseManager request using the given
 * \a endpoint.
 *
 * This LicenseManager implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LicenseManagerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LicenseManagerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LicenseManager::LicenseManagerRequestPrivate
 * \brief The LicenseManagerRequestPrivate class provides private implementation for LicenseManagerRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a LicenseManagerRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
LicenseManagerRequestPrivate::LicenseManagerRequestPrivate(const LicenseManagerRequest::Action action, LicenseManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-08-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LicenseManagerRequest class's copy constructor.
 */
LicenseManagerRequestPrivate::LicenseManagerRequestPrivate(const LicenseManagerRequestPrivate &other,
                                     LicenseManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LicenseManagerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LicenseManager service's Action
 * query parameters.
 */
QString LicenseManagerRequestPrivate::toString(const LicenseManagerRequest::Action &action)
{
    #define ActionToString(action) \
        case LicenseManagerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptGrant);
        ActionToString(CheckInLicense);
        ActionToString(CheckoutBorrowLicense);
        ActionToString(CheckoutLicense);
        ActionToString(CreateGrant);
        ActionToString(CreateGrantVersion);
        ActionToString(CreateLicense);
        ActionToString(CreateLicenseConfiguration);
        ActionToString(CreateLicenseConversionTaskForResource);
        ActionToString(CreateLicenseManagerReportGenerator);
        ActionToString(CreateLicenseVersion);
        ActionToString(CreateToken);
        ActionToString(DeleteGrant);
        ActionToString(DeleteLicense);
        ActionToString(DeleteLicenseConfiguration);
        ActionToString(DeleteLicenseManagerReportGenerator);
        ActionToString(DeleteToken);
        ActionToString(ExtendLicenseConsumption);
        ActionToString(GetAccessToken);
        ActionToString(GetGrant);
        ActionToString(GetLicense);
        ActionToString(GetLicenseConfiguration);
        ActionToString(GetLicenseConversionTask);
        ActionToString(GetLicenseManagerReportGenerator);
        ActionToString(GetLicenseUsage);
        ActionToString(GetServiceSettings);
        ActionToString(ListAssociationsForLicenseConfiguration);
        ActionToString(ListDistributedGrants);
        ActionToString(ListFailuresForLicenseConfigurationOperations);
        ActionToString(ListLicenseConfigurations);
        ActionToString(ListLicenseConversionTasks);
        ActionToString(ListLicenseManagerReportGenerators);
        ActionToString(ListLicenseSpecificationsForResource);
        ActionToString(ListLicenseVersions);
        ActionToString(ListLicenses);
        ActionToString(ListReceivedGrants);
        ActionToString(ListReceivedLicenses);
        ActionToString(ListResourceInventory);
        ActionToString(ListTagsForResource);
        ActionToString(ListTokens);
        ActionToString(ListUsageForLicenseConfiguration);
        ActionToString(RejectGrant);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateLicenseConfiguration);
        ActionToString(UpdateLicenseManagerReportGenerator);
        ActionToString(UpdateLicenseSpecificationsForResource);
        ActionToString(UpdateServiceSettings);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LicenseManager
} // namespace QtAws
