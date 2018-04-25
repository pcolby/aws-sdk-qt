/*
    Copyright 2013-2018 Paul Colby

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

#include "costexplorerrequest.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CostExplorerRequest
 * \brief The CostExplorerRequest class provides an interface for CostExplorer requests.
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * \enum CostExplorerRequest::Action
 *
 * This enum describes the actions that can be performed as CostExplorer
 * requests.
 *
 * \value GetCostAndUsageAction CostExplorer GetCostAndUsage action.
 * \value GetDimensionValuesAction CostExplorer GetDimensionValues action.
 * \value GetReservationCoverageAction CostExplorer GetReservationCoverage action.
 * \value GetReservationPurchaseRecommendationAction CostExplorer GetReservationPurchaseRecommendation action.
 * \value GetReservationUtilizationAction CostExplorer GetReservationUtilization action.
 * \value GetTagsAction CostExplorer GetTags action.
 */

/*!
 * Constructs a CostExplorerRequest object for CostExplorer \a action.
 */
CostExplorerRequest::CostExplorerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CostExplorerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CostExplorerRequest::CostExplorerRequest(const CostExplorerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CostExplorerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CostExplorerRequest object to be equal to \a other.
 */
CostExplorerRequest& CostExplorerRequest::operator=(const CostExplorerRequest &other)
{
    Q_D(CostExplorerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CostExplorerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CostExplorerRequestPrivate.
 */
CostExplorerRequest::CostExplorerRequest(CostExplorerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CostExplorer action to be performed by this request.
 */
CostExplorerRequest::Action CostExplorerRequest::action() const
{
    Q_D(const CostExplorerRequest);
    return d->action;
}

/*!
 * Returns the name of the CostExplorer action to be performed by this request.
 */
QString CostExplorerRequest::actionString() const
{
    return CostExplorerRequestPrivate::toString(action());
}

/*!
 * Returns the CostExplorer API version implemented by this request.
 */
QString CostExplorerRequest::apiVersion() const
{
    Q_D(const CostExplorerRequest);
    return d->apiVersion;
}

/*!
 * Sets the CostExplorer action to be performed by this request to \a action.
 */
void CostExplorerRequest::setAction(const Action action)
{
    Q_D(CostExplorerRequest);
    d->action = action;
}

/*!
 * Sets the CostExplorer API version to include in this request to \a version.
 */
void CostExplorerRequest::setApiVersion(const QString &version)
{
    Q_D(CostExplorerRequest);
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
bool CostExplorerRequest::operator==(const CostExplorerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CostExplorer queue name.
 *
 * @par From CostExplorer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CostExplorer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CostExplorerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CostExplorerRequest::clearParameter(const QString &name)
{
    Q_D(CostExplorerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CostExplorerRequest::clearParameters()
{
    Q_D(CostExplorerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CostExplorerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CostExplorerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CostExplorerRequest::parameters() const
{
    Q_D(const CostExplorerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CostExplorerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CostExplorerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CostExplorerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CostExplorerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CostExplorer request using the given
 * \a endpoint.
 *
 * This CostExplorer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CostExplorerRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CostExplorerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CostExplorer::CostExplorerRequestPrivate
 * \brief The CostExplorerRequestPrivate class provides private implementation for CostExplorerRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CostExplorerRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
CostExplorerRequestPrivate::CostExplorerRequestPrivate(const CostExplorerRequest::Action action, CostExplorerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CostExplorerRequest class's copy constructor.
 */
CostExplorerRequestPrivate::CostExplorerRequestPrivate(const CostExplorerRequestPrivate &other,
                                     CostExplorerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CostExplorerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CostExplorer service's Action
 * query parameters.
 */
QString CostExplorerRequestPrivate::toString(const CostExplorerRequest::Action &action)
{
    #define ActionToString(action) \
        case CostExplorerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CostExplorer
} // namespace QtAws
