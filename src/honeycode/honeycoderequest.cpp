// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "honeycoderequest.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::HoneycodeRequest
 * \brief The HoneycodeRequest class provides an interface for Honeycode requests.
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * \enum HoneycodeRequest::Action
 *
 * This enum describes the actions that can be performed as Honeycode
 * requests.
 *
 * \value BatchCreateTableRowsAction Honeycode BatchCreateTableRows action.
 * \value BatchDeleteTableRowsAction Honeycode BatchDeleteTableRows action.
 * \value BatchUpdateTableRowsAction Honeycode BatchUpdateTableRows action.
 * \value BatchUpsertTableRowsAction Honeycode BatchUpsertTableRows action.
 * \value DescribeTableDataImportJobAction Honeycode DescribeTableDataImportJob action.
 * \value GetScreenDataAction Honeycode GetScreenData action.
 * \value InvokeScreenAutomationAction Honeycode InvokeScreenAutomation action.
 * \value ListTableColumnsAction Honeycode ListTableColumns action.
 * \value ListTableRowsAction Honeycode ListTableRows action.
 * \value ListTablesAction Honeycode ListTables action.
 * \value ListTagsForResourceAction Honeycode ListTagsForResource action.
 * \value QueryTableRowsAction Honeycode QueryTableRows action.
 * \value StartTableDataImportJobAction Honeycode StartTableDataImportJob action.
 * \value TagResourceAction Honeycode TagResource action.
 * \value UntagResourceAction Honeycode UntagResource action.
 */

/*!
 * Constructs a HoneycodeRequest object for Honeycode \a action.
 */
HoneycodeRequest::HoneycodeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new HoneycodeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
HoneycodeRequest::HoneycodeRequest(const HoneycodeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new HoneycodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the HoneycodeRequest object to be equal to \a other.
 */
HoneycodeRequest& HoneycodeRequest::operator=(const HoneycodeRequest &other)
{
    Q_D(HoneycodeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa HoneycodeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HoneycodeRequestPrivate.
 */
HoneycodeRequest::HoneycodeRequest(HoneycodeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Honeycode action to be performed by this request.
 */
HoneycodeRequest::Action HoneycodeRequest::action() const
{
    Q_D(const HoneycodeRequest);
    return d->action;
}

/*!
 * Returns the name of the Honeycode action to be performed by this request.
 */
QString HoneycodeRequest::actionString() const
{
    return HoneycodeRequestPrivate::toString(action());
}

/*!
 * Returns the Honeycode API version implemented by this request.
 */
QString HoneycodeRequest::apiVersion() const
{
    Q_D(const HoneycodeRequest);
    return d->apiVersion;
}

/*!
 * Sets the Honeycode action to be performed by this request to \a action.
 */
void HoneycodeRequest::setAction(const Action action)
{
    Q_D(HoneycodeRequest);
    d->action = action;
}

/*!
 * Sets the Honeycode API version to include in this request to \a version.
 */
void HoneycodeRequest::setApiVersion(const QString &version)
{
    Q_D(HoneycodeRequest);
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
bool HoneycodeRequest::operator==(const HoneycodeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Honeycode queue name.
 *
 * @par From Honeycode FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Honeycode queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool HoneycodeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int HoneycodeRequest::clearParameter(const QString &name)
{
    Q_D(HoneycodeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void HoneycodeRequest::clearParameters()
{
    Q_D(HoneycodeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant HoneycodeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const HoneycodeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &HoneycodeRequest::parameters() const
{
    Q_D(const HoneycodeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void HoneycodeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(HoneycodeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void HoneycodeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(HoneycodeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Honeycode request using the given
 * \a endpoint.
 *
 * This Honeycode implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest HoneycodeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const HoneycodeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Honeycode::HoneycodeRequestPrivate
 * \brief The HoneycodeRequestPrivate class provides private implementation for HoneycodeRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a HoneycodeRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
HoneycodeRequestPrivate::HoneycodeRequestPrivate(const HoneycodeRequest::Action action, HoneycodeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-03-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the HoneycodeRequest class's copy constructor.
 */
HoneycodeRequestPrivate::HoneycodeRequestPrivate(const HoneycodeRequestPrivate &other,
                                     HoneycodeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts HoneycodeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Honeycode service's Action
 * query parameters.
 */
QString HoneycodeRequestPrivate::toString(const HoneycodeRequest::Action &action)
{
    #define ActionToString(action) \
        case HoneycodeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchCreateTableRows);
        ActionToString(BatchDeleteTableRows);
        ActionToString(BatchUpdateTableRows);
        ActionToString(BatchUpsertTableRows);
        ActionToString(DescribeTableDataImportJob);
        ActionToString(GetScreenData);
        ActionToString(InvokeScreenAutomation);
        ActionToString(ListTableColumns);
        ActionToString(ListTableRows);
        ActionToString(ListTables);
        ActionToString(ListTagsForResource);
        ActionToString(QueryTableRows);
        ActionToString(StartTableDataImportJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Honeycode
} // namespace QtAws
