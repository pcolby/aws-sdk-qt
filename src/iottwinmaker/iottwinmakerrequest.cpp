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

#include "iottwinmakerrequest.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::IoTTwinMakerRequest
 * \brief The IoTTwinMakerRequest class provides an interface for IoTTwinMaker requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * \enum IoTTwinMakerRequest::Action
 *
 * This enum describes the actions that can be performed as IoTTwinMaker
 * requests.
 *
 * \value BatchPutPropertyValuesAction IoTTwinMaker BatchPutPropertyValues action.
 * \value CreateComponentTypeAction IoTTwinMaker CreateComponentType action.
 * \value CreateEntityAction IoTTwinMaker CreateEntity action.
 * \value CreateSceneAction IoTTwinMaker CreateScene action.
 * \value CreateWorkspaceAction IoTTwinMaker CreateWorkspace action.
 * \value DeleteComponentTypeAction IoTTwinMaker DeleteComponentType action.
 * \value DeleteEntityAction IoTTwinMaker DeleteEntity action.
 * \value DeleteSceneAction IoTTwinMaker DeleteScene action.
 * \value DeleteWorkspaceAction IoTTwinMaker DeleteWorkspace action.
 * \value GetComponentTypeAction IoTTwinMaker GetComponentType action.
 * \value GetEntityAction IoTTwinMaker GetEntity action.
 * \value GetPropertyValueAction IoTTwinMaker GetPropertyValue action.
 * \value GetPropertyValueHistoryAction IoTTwinMaker GetPropertyValueHistory action.
 * \value GetSceneAction IoTTwinMaker GetScene action.
 * \value GetWorkspaceAction IoTTwinMaker GetWorkspace action.
 * \value ListComponentTypesAction IoTTwinMaker ListComponentTypes action.
 * \value ListEntitiesAction IoTTwinMaker ListEntities action.
 * \value ListScenesAction IoTTwinMaker ListScenes action.
 * \value ListTagsForResourceAction IoTTwinMaker ListTagsForResource action.
 * \value ListWorkspacesAction IoTTwinMaker ListWorkspaces action.
 * \value TagResourceAction IoTTwinMaker TagResource action.
 * \value UntagResourceAction IoTTwinMaker UntagResource action.
 * \value UpdateComponentTypeAction IoTTwinMaker UpdateComponentType action.
 * \value UpdateEntityAction IoTTwinMaker UpdateEntity action.
 * \value UpdateSceneAction IoTTwinMaker UpdateScene action.
 * \value UpdateWorkspaceAction IoTTwinMaker UpdateWorkspace action.
 */

/*!
 * Constructs a IoTTwinMakerRequest object for IoTTwinMaker \a action.
 */
IoTTwinMakerRequest::IoTTwinMakerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTTwinMakerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTTwinMakerRequest::IoTTwinMakerRequest(const IoTTwinMakerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTTwinMakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTTwinMakerRequest object to be equal to \a other.
 */
IoTTwinMakerRequest& IoTTwinMakerRequest::operator=(const IoTTwinMakerRequest &other)
{
    Q_D(IoTTwinMakerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTTwinMakerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTTwinMakerRequestPrivate.
 */
IoTTwinMakerRequest::IoTTwinMakerRequest(IoTTwinMakerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTTwinMaker action to be performed by this request.
 */
IoTTwinMakerRequest::Action IoTTwinMakerRequest::action() const
{
    Q_D(const IoTTwinMakerRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTTwinMaker action to be performed by this request.
 */
QString IoTTwinMakerRequest::actionString() const
{
    return IoTTwinMakerRequestPrivate::toString(action());
}

/*!
 * Returns the IoTTwinMaker API version implemented by this request.
 */
QString IoTTwinMakerRequest::apiVersion() const
{
    Q_D(const IoTTwinMakerRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTTwinMaker action to be performed by this request to \a action.
 */
void IoTTwinMakerRequest::setAction(const Action action)
{
    Q_D(IoTTwinMakerRequest);
    d->action = action;
}

/*!
 * Sets the IoTTwinMaker API version to include in this request to \a version.
 */
void IoTTwinMakerRequest::setApiVersion(const QString &version)
{
    Q_D(IoTTwinMakerRequest);
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
bool IoTTwinMakerRequest::operator==(const IoTTwinMakerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTTwinMaker queue name.
 *
 * @par From IoTTwinMaker FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTTwinMaker queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTTwinMakerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTTwinMakerRequest::clearParameter(const QString &name)
{
    Q_D(IoTTwinMakerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTTwinMakerRequest::clearParameters()
{
    Q_D(IoTTwinMakerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTTwinMakerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTTwinMakerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTTwinMakerRequest::parameters() const
{
    Q_D(const IoTTwinMakerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTTwinMakerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTTwinMakerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTTwinMakerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTTwinMakerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTTwinMaker request using the given
 * \a endpoint.
 *
 * This IoTTwinMaker implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTTwinMakerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTTwinMakerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTTwinMaker::IoTTwinMakerRequestPrivate
 * \brief The IoTTwinMakerRequestPrivate class provides private implementation for IoTTwinMakerRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a IoTTwinMakerRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
IoTTwinMakerRequestPrivate::IoTTwinMakerRequestPrivate(const IoTTwinMakerRequest::Action action, IoTTwinMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-11-29"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTTwinMakerRequest class's copy constructor.
 */
IoTTwinMakerRequestPrivate::IoTTwinMakerRequestPrivate(const IoTTwinMakerRequestPrivate &other,
                                     IoTTwinMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTTwinMakerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTTwinMaker service's Action
 * query parameters.
 */
QString IoTTwinMakerRequestPrivate::toString(const IoTTwinMakerRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTTwinMakerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchPutPropertyValues);
        ActionToString(CreateComponentType);
        ActionToString(CreateEntity);
        ActionToString(CreateScene);
        ActionToString(CreateWorkspace);
        ActionToString(DeleteComponentType);
        ActionToString(DeleteEntity);
        ActionToString(DeleteScene);
        ActionToString(DeleteWorkspace);
        ActionToString(GetComponentType);
        ActionToString(GetEntity);
        ActionToString(GetPropertyValue);
        ActionToString(GetPropertyValueHistory);
        ActionToString(GetScene);
        ActionToString(GetWorkspace);
        ActionToString(ListComponentTypes);
        ActionToString(ListEntities);
        ActionToString(ListScenes);
        ActionToString(ListTagsForResource);
        ActionToString(ListWorkspaces);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateComponentType);
        ActionToString(UpdateEntity);
        ActionToString(UpdateScene);
        ActionToString(UpdateWorkspace);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTTwinMaker
} // namespace QtAws
