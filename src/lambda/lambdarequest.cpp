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

#include "lambdarequest.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::LambdaRequest
 * \brief The LambdaRequest class provides an interface for Lambda requests.
 *
 * \inmodule QtAwsLambda
 */

/*!
 * \enum LambdaRequest::Action
 *
 * This enum describes the actions that can be performed as Lambda
 * requests.
 *
 * \value AddLayerVersionPermissionAction Lambda AddLayerVersionPermission action.
 * \value AddPermissionAction Lambda AddPermission action.
 * \value CreateAliasAction Lambda CreateAlias action.
 * \value CreateEventSourceMappingAction Lambda CreateEventSourceMapping action.
 * \value CreateFunctionAction Lambda CreateFunction action.
 * \value DeleteAliasAction Lambda DeleteAlias action.
 * \value DeleteEventSourceMappingAction Lambda DeleteEventSourceMapping action.
 * \value DeleteFunctionAction Lambda DeleteFunction action.
 * \value DeleteFunctionConcurrencyAction Lambda DeleteFunctionConcurrency action.
 * \value DeleteLayerVersionAction Lambda DeleteLayerVersion action.
 * \value GetAccountSettingsAction Lambda GetAccountSettings action.
 * \value GetAliasAction Lambda GetAlias action.
 * \value GetEventSourceMappingAction Lambda GetEventSourceMapping action.
 * \value GetFunctionAction Lambda GetFunction action.
 * \value GetFunctionConfigurationAction Lambda GetFunctionConfiguration action.
 * \value GetLayerVersionAction Lambda GetLayerVersion action.
 * \value GetLayerVersionByArnAction Lambda GetLayerVersionByArn action.
 * \value GetLayerVersionPolicyAction Lambda GetLayerVersionPolicy action.
 * \value GetPolicyAction Lambda GetPolicy action.
 * \value InvokeAction Lambda Invoke action.
 * \value InvokeAsyncAction Lambda InvokeAsync action.
 * \value ListAliasesAction Lambda ListAliases action.
 * \value ListEventSourceMappingsAction Lambda ListEventSourceMappings action.
 * \value ListFunctionsAction Lambda ListFunctions action.
 * \value ListLayerVersionsAction Lambda ListLayerVersions action.
 * \value ListLayersAction Lambda ListLayers action.
 * \value ListTagsAction Lambda ListTags action.
 * \value ListVersionsByFunctionAction Lambda ListVersionsByFunction action.
 * \value PublishLayerVersionAction Lambda PublishLayerVersion action.
 * \value PublishVersionAction Lambda PublishVersion action.
 * \value PutFunctionConcurrencyAction Lambda PutFunctionConcurrency action.
 * \value RemoveLayerVersionPermissionAction Lambda RemoveLayerVersionPermission action.
 * \value RemovePermissionAction Lambda RemovePermission action.
 * \value TagResourceAction Lambda TagResource action.
 * \value UntagResourceAction Lambda UntagResource action.
 * \value UpdateAliasAction Lambda UpdateAlias action.
 * \value UpdateEventSourceMappingAction Lambda UpdateEventSourceMapping action.
 * \value UpdateFunctionCodeAction Lambda UpdateFunctionCode action.
 * \value UpdateFunctionConfigurationAction Lambda UpdateFunctionConfiguration action.
 */

/*!
 * Constructs a LambdaRequest object for Lambda \a action.
 */
LambdaRequest::LambdaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LambdaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LambdaRequest::LambdaRequest(const LambdaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LambdaRequest object to be equal to \a other.
 */
LambdaRequest& LambdaRequest::operator=(const LambdaRequest &other)
{
    Q_D(LambdaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LambdaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LambdaRequestPrivate.
 */
LambdaRequest::LambdaRequest(LambdaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Lambda action to be performed by this request.
 */
LambdaRequest::Action LambdaRequest::action() const
{
    Q_D(const LambdaRequest);
    return d->action;
}

/*!
 * Returns the name of the Lambda action to be performed by this request.
 */
QString LambdaRequest::actionString() const
{
    return LambdaRequestPrivate::toString(action());
}

/*!
 * Returns the Lambda API version implemented by this request.
 */
QString LambdaRequest::apiVersion() const
{
    Q_D(const LambdaRequest);
    return d->apiVersion;
}

/*!
 * Sets the Lambda action to be performed by this request to \a action.
 */
void LambdaRequest::setAction(const Action action)
{
    Q_D(LambdaRequest);
    d->action = action;
}

/*!
 * Sets the Lambda API version to include in this request to \a version.
 */
void LambdaRequest::setApiVersion(const QString &version)
{
    Q_D(LambdaRequest);
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
bool LambdaRequest::operator==(const LambdaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Lambda queue name.
 *
 * @par From Lambda FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Lambda queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LambdaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LambdaRequest::clearParameter(const QString &name)
{
    Q_D(LambdaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LambdaRequest::clearParameters()
{
    Q_D(LambdaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LambdaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LambdaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LambdaRequest::parameters() const
{
    Q_D(const LambdaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LambdaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LambdaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LambdaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LambdaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Lambda request using the given
 * \a endpoint.
 *
 * This Lambda implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LambdaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LambdaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Lambda::LambdaRequestPrivate
 * \brief The LambdaRequestPrivate class provides private implementation for LambdaRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a LambdaRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
LambdaRequestPrivate::LambdaRequestPrivate(const LambdaRequest::Action action, LambdaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LambdaRequest class's copy constructor.
 */
LambdaRequestPrivate::LambdaRequestPrivate(const LambdaRequestPrivate &other,
                                     LambdaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LambdaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Lambda service's Action
 * query parameters.
 */
QString LambdaRequestPrivate::toString(const LambdaRequest::Action &action)
{
    #define ActionToString(action) \
        case LambdaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Lambda
} // namespace QtAws
