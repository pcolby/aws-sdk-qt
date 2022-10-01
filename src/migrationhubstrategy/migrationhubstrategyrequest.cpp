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

#include "migrationhubstrategyrequest.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::MigrationHubStrategyRequest
 * \brief The MigrationHubStrategyRequest class provides an interface for MigrationHubStrategy requests.
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * \enum MigrationHubStrategyRequest::Action
 *
 * This enum describes the actions that can be performed as MigrationHubStrategy
 * requests.
 *
 * \value GetApplicationComponentDetailsAction MigrationHubStrategy GetApplicationComponentDetails action.
 * \value GetApplicationComponentStrategiesAction MigrationHubStrategy GetApplicationComponentStrategies action.
 * \value GetAssessmentAction MigrationHubStrategy GetAssessment action.
 * \value GetImportFileTaskAction MigrationHubStrategy GetImportFileTask action.
 * \value GetPortfolioPreferencesAction MigrationHubStrategy GetPortfolioPreferences action.
 * \value GetPortfolioSummaryAction MigrationHubStrategy GetPortfolioSummary action.
 * \value GetRecommendationReportDetailsAction MigrationHubStrategy GetRecommendationReportDetails action.
 * \value GetServerDetailsAction MigrationHubStrategy GetServerDetails action.
 * \value GetServerStrategiesAction MigrationHubStrategy GetServerStrategies action.
 * \value ListApplicationComponentsAction MigrationHubStrategy ListApplicationComponents action.
 * \value ListCollectorsAction MigrationHubStrategy ListCollectors action.
 * \value ListImportFileTaskAction MigrationHubStrategy ListImportFileTask action.
 * \value ListServersAction MigrationHubStrategy ListServers action.
 * \value PutPortfolioPreferencesAction MigrationHubStrategy PutPortfolioPreferences action.
 * \value StartAssessmentAction MigrationHubStrategy StartAssessment action.
 * \value StartImportFileTaskAction MigrationHubStrategy StartImportFileTask action.
 * \value StartRecommendationReportGenerationAction MigrationHubStrategy StartRecommendationReportGeneration action.
 * \value StopAssessmentAction MigrationHubStrategy StopAssessment action.
 * \value UpdateApplicationComponentConfigAction MigrationHubStrategy UpdateApplicationComponentConfig action.
 * \value UpdateServerConfigAction MigrationHubStrategy UpdateServerConfig action.
 */

/*!
 * Constructs a MigrationHubStrategyRequest object for MigrationHubStrategy \a action.
 */
MigrationHubStrategyRequest::MigrationHubStrategyRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubStrategyRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MigrationHubStrategyRequest::MigrationHubStrategyRequest(const MigrationHubStrategyRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubStrategyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MigrationHubStrategyRequest object to be equal to \a other.
 */
MigrationHubStrategyRequest& MigrationHubStrategyRequest::operator=(const MigrationHubStrategyRequest &other)
{
    Q_D(MigrationHubStrategyRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MigrationHubStrategyRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubStrategyRequestPrivate.
 */
MigrationHubStrategyRequest::MigrationHubStrategyRequest(MigrationHubStrategyRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MigrationHubStrategy action to be performed by this request.
 */
MigrationHubStrategyRequest::Action MigrationHubStrategyRequest::action() const
{
    Q_D(const MigrationHubStrategyRequest);
    return d->action;
}

/*!
 * Returns the name of the MigrationHubStrategy action to be performed by this request.
 */
QString MigrationHubStrategyRequest::actionString() const
{
    return MigrationHubStrategyRequestPrivate::toString(action());
}

/*!
 * Returns the MigrationHubStrategy API version implemented by this request.
 */
QString MigrationHubStrategyRequest::apiVersion() const
{
    Q_D(const MigrationHubStrategyRequest);
    return d->apiVersion;
}

/*!
 * Sets the MigrationHubStrategy action to be performed by this request to \a action.
 */
void MigrationHubStrategyRequest::setAction(const Action action)
{
    Q_D(MigrationHubStrategyRequest);
    d->action = action;
}

/*!
 * Sets the MigrationHubStrategy API version to include in this request to \a version.
 */
void MigrationHubStrategyRequest::setApiVersion(const QString &version)
{
    Q_D(MigrationHubStrategyRequest);
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
bool MigrationHubStrategyRequest::operator==(const MigrationHubStrategyRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MigrationHubStrategy queue name.
 *
 * @par From MigrationHubStrategy FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MigrationHubStrategy queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MigrationHubStrategyRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MigrationHubStrategyRequest::clearParameter(const QString &name)
{
    Q_D(MigrationHubStrategyRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MigrationHubStrategyRequest::clearParameters()
{
    Q_D(MigrationHubStrategyRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MigrationHubStrategyRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MigrationHubStrategyRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MigrationHubStrategyRequest::parameters() const
{
    Q_D(const MigrationHubStrategyRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MigrationHubStrategyRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MigrationHubStrategyRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MigrationHubStrategyRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MigrationHubStrategyRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MigrationHubStrategy request using the given
 * \a endpoint.
 *
 * This MigrationHubStrategy implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MigrationHubStrategyRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MigrationHubStrategyRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MigrationHubStrategy::MigrationHubStrategyRequestPrivate
 * \brief The MigrationHubStrategyRequestPrivate class provides private implementation for MigrationHubStrategyRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a MigrationHubStrategyRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
MigrationHubStrategyRequestPrivate::MigrationHubStrategyRequestPrivate(const MigrationHubStrategyRequest::Action action, MigrationHubStrategyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-02-19"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MigrationHubStrategyRequest class's copy constructor.
 */
MigrationHubStrategyRequestPrivate::MigrationHubStrategyRequestPrivate(const MigrationHubStrategyRequestPrivate &other,
                                     MigrationHubStrategyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MigrationHubStrategyRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MigrationHubStrategy service's Action
 * query parameters.
 */
QString MigrationHubStrategyRequestPrivate::toString(const MigrationHubStrategyRequest::Action &action)
{
    #define ActionToString(action) \
        case MigrationHubStrategyRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetApplicationComponentDetails);
        ActionToString(GetApplicationComponentStrategies);
        ActionToString(GetAssessment);
        ActionToString(GetImportFileTask);
        ActionToString(GetPortfolioPreferences);
        ActionToString(GetPortfolioSummary);
        ActionToString(GetRecommendationReportDetails);
        ActionToString(GetServerDetails);
        ActionToString(GetServerStrategies);
        ActionToString(ListApplicationComponents);
        ActionToString(ListCollectors);
        ActionToString(ListImportFileTask);
        ActionToString(ListServers);
        ActionToString(PutPortfolioPreferences);
        ActionToString(StartAssessment);
        ActionToString(StartImportFileTask);
        ActionToString(StartRecommendationReportGeneration);
        ActionToString(StopAssessment);
        ActionToString(UpdateApplicationComponentConfig);
        ActionToString(UpdateServerConfig);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MigrationHubStrategy
} // namespace QtAws
