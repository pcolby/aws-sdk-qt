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

#include "cloudsearchrequest.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::CloudSearchRequest
 * \brief The CloudSearchRequest class provides an interface for CloudSearch requests.
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * \enum CloudSearchRequest::Action
 *
 * This enum describes the actions that can be performed as CloudSearch
 * requests.
 *
 * \value BuildSuggestersAction CloudSearch BuildSuggesters action.
 * \value CreateDomainAction CloudSearch CreateDomain action.
 * \value DefineAnalysisSchemeAction CloudSearch DefineAnalysisScheme action.
 * \value DefineExpressionAction CloudSearch DefineExpression action.
 * \value DefineIndexFieldAction CloudSearch DefineIndexField action.
 * \value DefineSuggesterAction CloudSearch DefineSuggester action.
 * \value DeleteAnalysisSchemeAction CloudSearch DeleteAnalysisScheme action.
 * \value DeleteDomainAction CloudSearch DeleteDomain action.
 * \value DeleteExpressionAction CloudSearch DeleteExpression action.
 * \value DeleteIndexFieldAction CloudSearch DeleteIndexField action.
 * \value DeleteSuggesterAction CloudSearch DeleteSuggester action.
 * \value DescribeAnalysisSchemesAction CloudSearch DescribeAnalysisSchemes action.
 * \value DescribeAvailabilityOptionsAction CloudSearch DescribeAvailabilityOptions action.
 * \value DescribeDomainEndpointOptionsAction CloudSearch DescribeDomainEndpointOptions action.
 * \value DescribeDomainsAction CloudSearch DescribeDomains action.
 * \value DescribeExpressionsAction CloudSearch DescribeExpressions action.
 * \value DescribeIndexFieldsAction CloudSearch DescribeIndexFields action.
 * \value DescribeScalingParametersAction CloudSearch DescribeScalingParameters action.
 * \value DescribeServiceAccessPoliciesAction CloudSearch DescribeServiceAccessPolicies action.
 * \value DescribeSuggestersAction CloudSearch DescribeSuggesters action.
 * \value IndexDocumentsAction CloudSearch IndexDocuments action.
 * \value ListDomainNamesAction CloudSearch ListDomainNames action.
 * \value UpdateAvailabilityOptionsAction CloudSearch UpdateAvailabilityOptions action.
 * \value UpdateDomainEndpointOptionsAction CloudSearch UpdateDomainEndpointOptions action.
 * \value UpdateScalingParametersAction CloudSearch UpdateScalingParameters action.
 * \value UpdateServiceAccessPoliciesAction CloudSearch UpdateServiceAccessPolicies action.
 */

/*!
 * Constructs a CloudSearchRequest object for CloudSearch \a action.
 */
CloudSearchRequest::CloudSearchRequest(const Action action)
    : d_ptr(new CloudSearchRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudSearchRequest::CloudSearchRequest(const CloudSearchRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new CloudSearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudSearchRequest object to be equal to \a other.
 */
CloudSearchRequest& CloudSearchRequest::operator=(const CloudSearchRequest &other)
{
    Q_D(CloudSearchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudSearchRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchRequestPrivate.
 */
CloudSearchRequest::CloudSearchRequest(CloudSearchRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the CloudSearch action to be performed by this request.
 */
CloudSearchRequest::Action CloudSearchRequest::action() const
{
    Q_D(const CloudSearchRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudSearch action to be performed by this request.
 */
QString CloudSearchRequest::actionString() const
{
    return CloudSearchRequestPrivate::toString(action());
}

/*!
 * Returns the CloudSearch API version implemented by this request.
 */
QString CloudSearchRequest::apiVersion() const
{
    Q_D(const CloudSearchRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudSearch action to be performed by this request to \a action.
 */
void CloudSearchRequest::setAction(const Action action)
{
    Q_D(CloudSearchRequest);
    d->action = action;
}

/*!
 * Sets the CloudSearch API version to include in this request to \a version.
 */
void CloudSearchRequest::setApiVersion(const QString &version)
{
    Q_D(CloudSearchRequest);
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
bool CloudSearchRequest::operator==(const CloudSearchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudSearch queue name.
 *
 * @par From CloudSearch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudSearch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudSearchRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudSearchRequest::clearParameter(const QString &name)
{
    Q_D(CloudSearchRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudSearchRequest::clearParameters()
{
    Q_D(CloudSearchRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudSearchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudSearchRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudSearchRequest::parameters() const
{
    Q_D(const CloudSearchRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudSearchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudSearchRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudSearchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudSearchRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudSearch request using the given
 * \a endpoint.
 *
 * This CloudSearch implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudSearchRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudSearchRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudSearch::CloudSearchRequestPrivate
 * \brief The CloudSearchRequestPrivate class provides private implementation for CloudSearchRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a CloudSearchRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
CloudSearchRequestPrivate::CloudSearchRequestPrivate(const CloudSearchRequest::Action action, CloudSearchRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudSearchRequest class's copy constructor.
 */
CloudSearchRequestPrivate::CloudSearchRequestPrivate(const CloudSearchRequestPrivate &other,
                                     CloudSearchRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudSearchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudSearch service's Action
 * query parameters.
 */
QString CloudSearchRequestPrivate::toString(const CloudSearchRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudSearchRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudSearch
} // namespace QtAws
