// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "costandusagereportrequest.h"
#include "costandusagereportrequest_p.h"

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::CostandUsageReportRequest
 * \brief The CostandUsageReportRequest class provides an interface for CostandUsageReport requests.
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * \enum CostandUsageReportRequest::Action
 *
 * This enum describes the actions that can be performed as CostandUsageReport
 * requests.
 *
 * \value DeleteReportDefinitionAction CostandUsageReport DeleteReportDefinition action.
 * \value DescribeReportDefinitionsAction CostandUsageReport DescribeReportDefinitions action.
 * \value ModifyReportDefinitionAction CostandUsageReport ModifyReportDefinition action.
 * \value PutReportDefinitionAction CostandUsageReport PutReportDefinition action.
 */

/*!
 * Constructs a CostandUsageReportRequest object for CostandUsageReport \a action.
 */
CostandUsageReportRequest::CostandUsageReportRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CostandUsageReportRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CostandUsageReportRequest::CostandUsageReportRequest(const CostandUsageReportRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CostandUsageReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CostandUsageReportRequest object to be equal to \a other.
 */
CostandUsageReportRequest& CostandUsageReportRequest::operator=(const CostandUsageReportRequest &other)
{
    Q_D(CostandUsageReportRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CostandUsageReportRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CostandUsageReportRequestPrivate.
 */
CostandUsageReportRequest::CostandUsageReportRequest(CostandUsageReportRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CostandUsageReport action to be performed by this request.
 */
CostandUsageReportRequest::Action CostandUsageReportRequest::action() const
{
    Q_D(const CostandUsageReportRequest);
    return d->action;
}

/*!
 * Returns the name of the CostandUsageReport action to be performed by this request.
 */
QString CostandUsageReportRequest::actionString() const
{
    return CostandUsageReportRequestPrivate::toString(action());
}

/*!
 * Returns the CostandUsageReport API version implemented by this request.
 */
QString CostandUsageReportRequest::apiVersion() const
{
    Q_D(const CostandUsageReportRequest);
    return d->apiVersion;
}

/*!
 * Sets the CostandUsageReport action to be performed by this request to \a action.
 */
void CostandUsageReportRequest::setAction(const Action action)
{
    Q_D(CostandUsageReportRequest);
    d->action = action;
}

/*!
 * Sets the CostandUsageReport API version to include in this request to \a version.
 */
void CostandUsageReportRequest::setApiVersion(const QString &version)
{
    Q_D(CostandUsageReportRequest);
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
bool CostandUsageReportRequest::operator==(const CostandUsageReportRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CostandUsageReport queue name.
 *
 * @par From CostandUsageReport FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CostandUsageReport queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CostandUsageReportRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CostandUsageReportRequest::clearParameter(const QString &name)
{
    Q_D(CostandUsageReportRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CostandUsageReportRequest::clearParameters()
{
    Q_D(CostandUsageReportRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CostandUsageReportRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CostandUsageReportRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CostandUsageReportRequest::parameters() const
{
    Q_D(const CostandUsageReportRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CostandUsageReportRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CostandUsageReportRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CostandUsageReportRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CostandUsageReportRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CostandUsageReport request using the given
 * \a endpoint.
 *
 * This CostandUsageReport implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CostandUsageReportRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CostandUsageReportRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CostandUsageReport::CostandUsageReportRequestPrivate
 * \brief The CostandUsageReportRequestPrivate class provides private implementation for CostandUsageReportRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a CostandUsageReportRequestPrivate object for CostandUsageReport \a action,
 * with public implementation \a q.
 */
CostandUsageReportRequestPrivate::CostandUsageReportRequestPrivate(const CostandUsageReportRequest::Action action, CostandUsageReportRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-01-06"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CostandUsageReportRequest class's copy constructor.
 */
CostandUsageReportRequestPrivate::CostandUsageReportRequestPrivate(const CostandUsageReportRequestPrivate &other,
                                     CostandUsageReportRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CostandUsageReportRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CostandUsageReport service's Action
 * query parameters.
 */
QString CostandUsageReportRequestPrivate::toString(const CostandUsageReportRequest::Action &action)
{
    #define ActionToString(action) \
        case CostandUsageReportRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteReportDefinition);
        ActionToString(DescribeReportDefinitions);
        ActionToString(ModifyReportDefinition);
        ActionToString(PutReportDefinition);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CostandUsageReport
} // namespace QtAws
