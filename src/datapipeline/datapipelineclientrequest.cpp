/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "datapipelineclientrequest.h"
#include "datapipelineclientrequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  DataPipelineClientRequest
 *
 * @brief  Interface class for providing DataPipeline requests
 */


/**
 * @brief  Constructs a new DataPipelineClientRequest object.
 *
 * @param  action  The DataPipeline action to request.
 */
DataPipelineClientRequest::DataPipelineClientRequest(const Action action)
    : AwsAbstractRequest(new DataPipelineClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new DataPipelineClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DataPipelineClientRequest::DataPipelineClientRequest(const DataPipelineClientRequest &other)
    : AwsAbstractRequest(new DataPipelineClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
DataPipelineClientRequest& DataPipelineClientRequest::operator=(const DataPipelineClientRequest &other)
{
    Q_D(DataPipelineClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new DataPipelineClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataPipelineClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
DataPipelineClientRequest::DataPipelineClientRequest(DataPipelineClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the DataPipeline action to be performed by this request.
 *
 * @return The DataPipeline action to be performed by this request.
 */
DataPipelineClientRequest::Action DataPipelineClientRequest::action() const
{
    Q_D(const DataPipelineClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the DataPipeline action to be performed by this request.
 *
 * @return The name of the DataPipeline action to be performed by this request.
 */
QString DataPipelineClientRequest::actionString() const
{
    return DataPipelineClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the DataPipeline API version implemented by this request.
 *
 * @return The DataPipeline API version implmented by this request.
 */
QString DataPipelineClientRequest::apiVersion() const
{
    Q_D(const DataPipelineClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the DataPipeline action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void DataPipelineClientRequest::setAction(const Action action)
{
    Q_D(DataPipelineClientRequest);
    d->action = action;
}

/**
 * @brief  Set the DataPipeline API version to include in this request.
 *
 * @param  version  The DataPipeline API version to include in this request.
 */
void DataPipelineClientRequest::setApiVersion(const QString &version)
{
    Q_D(DataPipelineClientRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool DataPipelineClientRequest::operator==(const DataPipelineClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid DataPipeline queue name.
 *
 * @par From DataPipeline FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DataPipeline queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool DataPipelineClientRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int DataPipelineClientRequest::clearParameter(const QString &name)
{
    Q_D(DataPipelineClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void DataPipelineClientRequest::clearParameters()
{
    Q_D(DataPipelineClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this DataPipeline request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant DataPipelineClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DataPipelineClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this DataPipeline request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &DataPipelineClientRequest::parameters() const
{
    Q_D(const DataPipelineClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this DataPipeline request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void DataPipelineClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DataPipelineClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this DataPipeline request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void DataPipelineClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DataPipelineClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this DataPipeline request.
 *
 * This DataPipeline implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this DataPipeline request using the given \a endpoint.
 */
QNetworkRequest DataPipelineClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const DataPipelineClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  DataPipelineClientRequestPrivate
 *
 * @brief  Private implementation for DataPipelineClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DataPipelineClientRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed by the \a q request.
 * @param  q       Pointer to this object's public DataPipelineClientRequest instance.
 */
DataPipelineClientRequestPrivate::DataPipelineClientRequestPrivate(const DataPipelineClientRequest::Action action, DataPipelineClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DataPipelineClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DataPipelineClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DataPipelineClientRequest instance.
 */
DataPipelineClientRequestPrivate::DataPipelineClientRequestPrivate(const DataPipelineClientRequestPrivate &other,
                                     DataPipelineClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and DataPipeline action to a string.
 *
 * This function converts DataPipelineClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DataPipeline service's Action
 * query parameters.
 *
 * @param  action  DataPipeline action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString DataPipelineClientRequestPrivate::toString(const DataPipelineClientRequest::Action &action)
{
    #define ActionToString(action) \
        case DataPipelineClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DataPipeline
} // namespace AWS
