/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "costandusagereportservicerequest.h"
#include "costandusagereportservicerequest_p.h"

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::CostandUsageReportServiceRequest
 * \brief The CostandUsageReportServiceRequest class provides an interface for CostandUsageReportService requests.
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * \enum CostandUsageReportServiceRequest::Action
 *
 * This enum describes the actions that can be performed as CostandUsageReportService
 * requests.
 *
 * \value DeleteReportDefinitionAction CostandUsageReportService DeleteReportDefinition action.
 * \value DescribeReportDefinitionsAction CostandUsageReportService DescribeReportDefinitions action.
 * \value PutReportDefinitionAction CostandUsageReportService PutReportDefinition action.
 */

/*!
 * Constructs a[n] CostandUsageReportServiceRequest object for CostandUsageReportService \a action.
 */
CostandUsageReportServiceRequest::CostandUsageReportServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CostandUsageReportServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CostandUsageReportServiceRequest::CostandUsageReportServiceRequest(const CostandUsageReportServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CostandUsageReportServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CostandUsageReportServiceRequest object to be equal to \a other.
 */
CostandUsageReportServiceRequest& CostandUsageReportServiceRequest::operator=(const CostandUsageReportServiceRequest &other)
{
    Q_D(CostandUsageReportServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CostandUsageReportServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CostandUsageReportServiceRequestPrivate.
 */
CostandUsageReportServiceRequest::CostandUsageReportServiceRequest(CostandUsageReportServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CostandUsageReportService action to be performed by this request.
 */
CostandUsageReportServiceRequest::Action CostandUsageReportServiceRequest::action() const
{
    Q_D(const CostandUsageReportServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the CostandUsageReportService action to be performed by this request.
 */
QString CostandUsageReportServiceRequest::actionString() const
{
    return CostandUsageReportServiceRequestPrivate::toString(action());
}

/*!
 * Returns the CostandUsageReportService API version implemented by this request.
 */
QString CostandUsageReportServiceRequest::apiVersion() const
{
    Q_D(const CostandUsageReportServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the CostandUsageReportService action to be performed by this request to \a action.
 */
void CostandUsageReportServiceRequest::setAction(const Action action)
{
    Q_D(CostandUsageReportServiceRequest);
    d->action = action;
}

/*!
 * Sets the CostandUsageReportService API version to include in this request to \a version.
 */
void CostandUsageReportServiceRequest::setApiVersion(const QString &version)
{
    Q_D(CostandUsageReportServiceRequest);
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
bool CostandUsageReportServiceRequest::operator==(const CostandUsageReportServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CostandUsageReportService queue name.
 *
 * @par From CostandUsageReportService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CostandUsageReportService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CostandUsageReportServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CostandUsageReportServiceRequest::clearParameter(const QString &name)
{
    Q_D(CostandUsageReportServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CostandUsageReportServiceRequest::clearParameters()
{
    Q_D(CostandUsageReportServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CostandUsageReportServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CostandUsageReportServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CostandUsageReportServiceRequest::parameters() const
{
    Q_D(const CostandUsageReportServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CostandUsageReportServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CostandUsageReportServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CostandUsageReportServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CostandUsageReportServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CostandUsageReportService request using the given
 * \a endpoint.
 *
 * This CostandUsageReportService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CostandUsageReportServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CostandUsageReportServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CostandUsageReportService::CostandUsageReportServiceRequestPrivate
 * \brief The CostandUsageReportServiceRequestPrivate class provides private implementation for CostandUsageReportServiceRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a CostandUsageReportServiceRequestPrivate object for CostandUsageReportService \a action with,
 * public implementation \a q.
 */
CostandUsageReportServiceRequestPrivate::CostandUsageReportServiceRequestPrivate(const CostandUsageReportServiceRequest::Action action, CostandUsageReportServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CostandUsageReportServiceRequest class's copy constructor.
 */
CostandUsageReportServiceRequestPrivate::CostandUsageReportServiceRequestPrivate(const CostandUsageReportServiceRequestPrivate &other,
                                     CostandUsageReportServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CostandUsageReportServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CostandUsageReportService service's Action
 * query parameters.
 */
QString CostandUsageReportServiceRequestPrivate::toString(const CostandUsageReportServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case CostandUsageReportServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CostandUsageReportService
} // namespace QtAws
