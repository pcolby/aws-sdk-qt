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

#include "iotthingsgraphrequest.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::IoTThingsGraphRequest
 * \brief The IoTThingsGraphRequest class provides an interface for IoTThingsGraph requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * \enum IoTThingsGraphRequest::Action
 *
 * This enum describes the actions that can be performed as IoTThingsGraph
 * requests.
 *
 * \value AssociateEntityToThingAction IoTThingsGraph AssociateEntityToThing action.
 * \value CreateFlowTemplateAction IoTThingsGraph CreateFlowTemplate action.
 * \value CreateSystemInstanceAction IoTThingsGraph CreateSystemInstance action.
 * \value CreateSystemTemplateAction IoTThingsGraph CreateSystemTemplate action.
 * \value DeleteFlowTemplateAction IoTThingsGraph DeleteFlowTemplate action.
 * \value DeleteNamespaceAction IoTThingsGraph DeleteNamespace action.
 * \value DeleteSystemInstanceAction IoTThingsGraph DeleteSystemInstance action.
 * \value DeleteSystemTemplateAction IoTThingsGraph DeleteSystemTemplate action.
 * \value DeploySystemInstanceAction IoTThingsGraph DeploySystemInstance action.
 * \value DeprecateFlowTemplateAction IoTThingsGraph DeprecateFlowTemplate action.
 * \value DeprecateSystemTemplateAction IoTThingsGraph DeprecateSystemTemplate action.
 * \value DescribeNamespaceAction IoTThingsGraph DescribeNamespace action.
 * \value DissociateEntityFromThingAction IoTThingsGraph DissociateEntityFromThing action.
 * \value GetEntitiesAction IoTThingsGraph GetEntities action.
 * \value GetFlowTemplateAction IoTThingsGraph GetFlowTemplate action.
 * \value GetFlowTemplateRevisionsAction IoTThingsGraph GetFlowTemplateRevisions action.
 * \value GetNamespaceDeletionStatusAction IoTThingsGraph GetNamespaceDeletionStatus action.
 * \value GetSystemInstanceAction IoTThingsGraph GetSystemInstance action.
 * \value GetSystemTemplateAction IoTThingsGraph GetSystemTemplate action.
 * \value GetSystemTemplateRevisionsAction IoTThingsGraph GetSystemTemplateRevisions action.
 * \value GetUploadStatusAction IoTThingsGraph GetUploadStatus action.
 * \value ListFlowExecutionMessagesAction IoTThingsGraph ListFlowExecutionMessages action.
 * \value ListTagsForResourceAction IoTThingsGraph ListTagsForResource action.
 * \value SearchEntitiesAction IoTThingsGraph SearchEntities action.
 * \value SearchFlowExecutionsAction IoTThingsGraph SearchFlowExecutions action.
 * \value SearchFlowTemplatesAction IoTThingsGraph SearchFlowTemplates action.
 * \value SearchSystemInstancesAction IoTThingsGraph SearchSystemInstances action.
 * \value SearchSystemTemplatesAction IoTThingsGraph SearchSystemTemplates action.
 * \value SearchThingsAction IoTThingsGraph SearchThings action.
 * \value TagResourceAction IoTThingsGraph TagResource action.
 * \value UndeploySystemInstanceAction IoTThingsGraph UndeploySystemInstance action.
 * \value UntagResourceAction IoTThingsGraph UntagResource action.
 * \value UpdateFlowTemplateAction IoTThingsGraph UpdateFlowTemplate action.
 * \value UpdateSystemTemplateAction IoTThingsGraph UpdateSystemTemplate action.
 * \value UploadEntityDefinitionsAction IoTThingsGraph UploadEntityDefinitions action.
 */

/*!
 * Constructs a IoTThingsGraphRequest object for IoTThingsGraph \a action.
 */
IoTThingsGraphRequest::IoTThingsGraphRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTThingsGraphRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTThingsGraphRequest::IoTThingsGraphRequest(const IoTThingsGraphRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTThingsGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTThingsGraphRequest object to be equal to \a other.
 */
IoTThingsGraphRequest& IoTThingsGraphRequest::operator=(const IoTThingsGraphRequest &other)
{
    Q_D(IoTThingsGraphRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTThingsGraphRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTThingsGraphRequestPrivate.
 */
IoTThingsGraphRequest::IoTThingsGraphRequest(IoTThingsGraphRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTThingsGraph action to be performed by this request.
 */
IoTThingsGraphRequest::Action IoTThingsGraphRequest::action() const
{
    Q_D(const IoTThingsGraphRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTThingsGraph action to be performed by this request.
 */
QString IoTThingsGraphRequest::actionString() const
{
    return IoTThingsGraphRequestPrivate::toString(action());
}

/*!
 * Returns the IoTThingsGraph API version implemented by this request.
 */
QString IoTThingsGraphRequest::apiVersion() const
{
    Q_D(const IoTThingsGraphRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTThingsGraph action to be performed by this request to \a action.
 */
void IoTThingsGraphRequest::setAction(const Action action)
{
    Q_D(IoTThingsGraphRequest);
    d->action = action;
}

/*!
 * Sets the IoTThingsGraph API version to include in this request to \a version.
 */
void IoTThingsGraphRequest::setApiVersion(const QString &version)
{
    Q_D(IoTThingsGraphRequest);
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
bool IoTThingsGraphRequest::operator==(const IoTThingsGraphRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTThingsGraph queue name.
 *
 * @par From IoTThingsGraph FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTThingsGraph queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTThingsGraphRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTThingsGraphRequest::clearParameter(const QString &name)
{
    Q_D(IoTThingsGraphRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTThingsGraphRequest::clearParameters()
{
    Q_D(IoTThingsGraphRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTThingsGraphRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTThingsGraphRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTThingsGraphRequest::parameters() const
{
    Q_D(const IoTThingsGraphRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTThingsGraphRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTThingsGraphRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTThingsGraphRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTThingsGraphRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTThingsGraph request using the given
 * \a endpoint.
 *
 * This IoTThingsGraph implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTThingsGraphRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTThingsGraphRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTThingsGraph::IoTThingsGraphRequestPrivate
 * \brief The IoTThingsGraphRequestPrivate class provides private implementation for IoTThingsGraphRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a IoTThingsGraphRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
IoTThingsGraphRequestPrivate::IoTThingsGraphRequestPrivate(const IoTThingsGraphRequest::Action action, IoTThingsGraphRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-09-06"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTThingsGraphRequest class's copy constructor.
 */
IoTThingsGraphRequestPrivate::IoTThingsGraphRequestPrivate(const IoTThingsGraphRequestPrivate &other,
                                     IoTThingsGraphRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTThingsGraphRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTThingsGraph service's Action
 * query parameters.
 */
QString IoTThingsGraphRequestPrivate::toString(const IoTThingsGraphRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTThingsGraphRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateEntityToThing);
        ActionToString(CreateFlowTemplate);
        ActionToString(CreateSystemInstance);
        ActionToString(CreateSystemTemplate);
        ActionToString(DeleteFlowTemplate);
        ActionToString(DeleteNamespace);
        ActionToString(DeleteSystemInstance);
        ActionToString(DeleteSystemTemplate);
        ActionToString(DeploySystemInstance);
        ActionToString(DeprecateFlowTemplate);
        ActionToString(DeprecateSystemTemplate);
        ActionToString(DescribeNamespace);
        ActionToString(DissociateEntityFromThing);
        ActionToString(GetEntities);
        ActionToString(GetFlowTemplate);
        ActionToString(GetFlowTemplateRevisions);
        ActionToString(GetNamespaceDeletionStatus);
        ActionToString(GetSystemInstance);
        ActionToString(GetSystemTemplate);
        ActionToString(GetSystemTemplateRevisions);
        ActionToString(GetUploadStatus);
        ActionToString(ListFlowExecutionMessages);
        ActionToString(ListTagsForResource);
        ActionToString(SearchEntities);
        ActionToString(SearchFlowExecutions);
        ActionToString(SearchFlowTemplates);
        ActionToString(SearchSystemInstances);
        ActionToString(SearchSystemTemplates);
        ActionToString(SearchThings);
        ActionToString(TagResource);
        ActionToString(UndeploySystemInstance);
        ActionToString(UntagResource);
        ActionToString(UpdateFlowTemplate);
        ActionToString(UpdateSystemTemplate);
        ActionToString(UploadEntityDefinitions);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTThingsGraph
} // namespace QtAws
