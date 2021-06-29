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

#include "dataexchangerequest.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::DataExchangeRequest
 * \brief The DataExchangeRequest class provides an interface for DataExchange requests.
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * \enum DataExchangeRequest::Action
 *
 * This enum describes the actions that can be performed as DataExchange
 * requests.
 *
 * \value CancelJobAction DataExchange CancelJob action.
 * \value CreateDataSetAction DataExchange CreateDataSet action.
 * \value CreateJobAction DataExchange CreateJob action.
 * \value CreateRevisionAction DataExchange CreateRevision action.
 * \value DeleteAssetAction DataExchange DeleteAsset action.
 * \value DeleteDataSetAction DataExchange DeleteDataSet action.
 * \value DeleteRevisionAction DataExchange DeleteRevision action.
 * \value GetAssetAction DataExchange GetAsset action.
 * \value GetDataSetAction DataExchange GetDataSet action.
 * \value GetJobAction DataExchange GetJob action.
 * \value GetRevisionAction DataExchange GetRevision action.
 * \value ListDataSetRevisionsAction DataExchange ListDataSetRevisions action.
 * \value ListDataSetsAction DataExchange ListDataSets action.
 * \value ListJobsAction DataExchange ListJobs action.
 * \value ListRevisionAssetsAction DataExchange ListRevisionAssets action.
 * \value ListTagsForResourceAction DataExchange ListTagsForResource action.
 * \value StartJobAction DataExchange StartJob action.
 * \value TagResourceAction DataExchange TagResource action.
 * \value UntagResourceAction DataExchange UntagResource action.
 * \value UpdateAssetAction DataExchange UpdateAsset action.
 * \value UpdateDataSetAction DataExchange UpdateDataSet action.
 * \value UpdateRevisionAction DataExchange UpdateRevision action.
 */

/*!
 * Constructs a DataExchangeRequest object for DataExchange \a action.
 */
DataExchangeRequest::DataExchangeRequest(const Action action)
    : d_ptr(new DataExchangeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DataExchangeRequest::DataExchangeRequest(const DataExchangeRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new DataExchangeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DataExchangeRequest object to be equal to \a other.
 */
DataExchangeRequest& DataExchangeRequest::operator=(const DataExchangeRequest &other)
{
    Q_D(DataExchangeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DataExchangeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataExchangeRequestPrivate.
 */
DataExchangeRequest::DataExchangeRequest(DataExchangeRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the DataExchange action to be performed by this request.
 */
DataExchangeRequest::Action DataExchangeRequest::action() const
{
    Q_D(const DataExchangeRequest);
    return d->action;
}

/*!
 * Returns the name of the DataExchange action to be performed by this request.
 */
QString DataExchangeRequest::actionString() const
{
    return DataExchangeRequestPrivate::toString(action());
}

/*!
 * Returns the DataExchange API version implemented by this request.
 */
QString DataExchangeRequest::apiVersion() const
{
    Q_D(const DataExchangeRequest);
    return d->apiVersion;
}

/*!
 * Sets the DataExchange action to be performed by this request to \a action.
 */
void DataExchangeRequest::setAction(const Action action)
{
    Q_D(DataExchangeRequest);
    d->action = action;
}

/*!
 * Sets the DataExchange API version to include in this request to \a version.
 */
void DataExchangeRequest::setApiVersion(const QString &version)
{
    Q_D(DataExchangeRequest);
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
bool DataExchangeRequest::operator==(const DataExchangeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DataExchange queue name.
 *
 * @par From DataExchange FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DataExchange queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DataExchangeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DataExchangeRequest::clearParameter(const QString &name)
{
    Q_D(DataExchangeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DataExchangeRequest::clearParameters()
{
    Q_D(DataExchangeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DataExchangeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DataExchangeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DataExchangeRequest::parameters() const
{
    Q_D(const DataExchangeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DataExchangeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DataExchangeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DataExchangeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DataExchangeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DataExchange request using the given
 * \a endpoint.
 *
 * This DataExchange implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DataExchangeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DataExchangeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DataExchange::DataExchangeRequestPrivate
 * \brief The DataExchangeRequestPrivate class provides private implementation for DataExchangeRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a DataExchangeRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
DataExchangeRequestPrivate::DataExchangeRequestPrivate(const DataExchangeRequest::Action action, DataExchangeRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DataExchangeRequest class's copy constructor.
 */
DataExchangeRequestPrivate::DataExchangeRequestPrivate(const DataExchangeRequestPrivate &other,
                                     DataExchangeRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DataExchangeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DataExchange service's Action
 * query parameters.
 */
QString DataExchangeRequestPrivate::toString(const DataExchangeRequest::Action &action)
{
    #define ActionToString(action) \
        case DataExchangeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelJob);
        ActionToString(CreateDataSet);
        ActionToString(CreateJob);
        ActionToString(CreateRevision);
        ActionToString(DeleteAsset);
        ActionToString(DeleteDataSet);
        ActionToString(DeleteRevision);
        ActionToString(GetAsset);
        ActionToString(GetDataSet);
        ActionToString(GetJob);
        ActionToString(GetRevision);
        ActionToString(ListDataSetRevisions);
        ActionToString(ListDataSets);
        ActionToString(ListJobs);
        ActionToString(ListRevisionAssets);
        ActionToString(ListTagsForResource);
        ActionToString(StartJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAsset);
        ActionToString(UpdateDataSet);
        ActionToString(UpdateRevision);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DataExchange
} // namespace QtAws
