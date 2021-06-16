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

#include "clouddirectoryrequest.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CloudDirectoryRequest
 * \brief The CloudDirectoryRequest class provides an interface for CloudDirectory requests.
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * \enum CloudDirectoryRequest::Action
 *
 * This enum describes the actions that can be performed as CloudDirectory
 * requests.
 *
 * \value AddFacetToObjectAction CloudDirectory AddFacetToObject action.
 * \value ApplySchemaAction CloudDirectory ApplySchema action.
 * \value AttachObjectAction CloudDirectory AttachObject action.
 * \value AttachPolicyAction CloudDirectory AttachPolicy action.
 * \value AttachToIndexAction CloudDirectory AttachToIndex action.
 * \value AttachTypedLinkAction CloudDirectory AttachTypedLink action.
 * \value BatchReadAction CloudDirectory BatchRead action.
 * \value BatchWriteAction CloudDirectory BatchWrite action.
 * \value CreateDirectoryAction CloudDirectory CreateDirectory action.
 * \value CreateFacetAction CloudDirectory CreateFacet action.
 * \value CreateIndexAction CloudDirectory CreateIndex action.
 * \value CreateObjectAction CloudDirectory CreateObject action.
 * \value CreateSchemaAction CloudDirectory CreateSchema action.
 * \value CreateTypedLinkFacetAction CloudDirectory CreateTypedLinkFacet action.
 * \value DeleteDirectoryAction CloudDirectory DeleteDirectory action.
 * \value DeleteFacetAction CloudDirectory DeleteFacet action.
 * \value DeleteObjectAction CloudDirectory DeleteObject action.
 * \value DeleteSchemaAction CloudDirectory DeleteSchema action.
 * \value DeleteTypedLinkFacetAction CloudDirectory DeleteTypedLinkFacet action.
 * \value DetachFromIndexAction CloudDirectory DetachFromIndex action.
 * \value DetachObjectAction CloudDirectory DetachObject action.
 * \value DetachPolicyAction CloudDirectory DetachPolicy action.
 * \value DetachTypedLinkAction CloudDirectory DetachTypedLink action.
 * \value DisableDirectoryAction CloudDirectory DisableDirectory action.
 * \value EnableDirectoryAction CloudDirectory EnableDirectory action.
 * \value GetAppliedSchemaVersionAction CloudDirectory GetAppliedSchemaVersion action.
 * \value GetDirectoryAction CloudDirectory GetDirectory action.
 * \value GetFacetAction CloudDirectory GetFacet action.
 * \value GetLinkAttributesAction CloudDirectory GetLinkAttributes action.
 * \value GetObjectAttributesAction CloudDirectory GetObjectAttributes action.
 * \value GetObjectInformationAction CloudDirectory GetObjectInformation action.
 * \value GetSchemaAsJsonAction CloudDirectory GetSchemaAsJson action.
 * \value GetTypedLinkFacetInformationAction CloudDirectory GetTypedLinkFacetInformation action.
 * \value ListAppliedSchemaArnsAction CloudDirectory ListAppliedSchemaArns action.
 * \value ListAttachedIndicesAction CloudDirectory ListAttachedIndices action.
 * \value ListDevelopmentSchemaArnsAction CloudDirectory ListDevelopmentSchemaArns action.
 * \value ListDirectoriesAction CloudDirectory ListDirectories action.
 * \value ListFacetAttributesAction CloudDirectory ListFacetAttributes action.
 * \value ListFacetNamesAction CloudDirectory ListFacetNames action.
 * \value ListIncomingTypedLinksAction CloudDirectory ListIncomingTypedLinks action.
 * \value ListIndexAction CloudDirectory ListIndex action.
 * \value ListManagedSchemaArnsAction CloudDirectory ListManagedSchemaArns action.
 * \value ListObjectAttributesAction CloudDirectory ListObjectAttributes action.
 * \value ListObjectChildrenAction CloudDirectory ListObjectChildren action.
 * \value ListObjectParentPathsAction CloudDirectory ListObjectParentPaths action.
 * \value ListObjectParentsAction CloudDirectory ListObjectParents action.
 * \value ListObjectPoliciesAction CloudDirectory ListObjectPolicies action.
 * \value ListOutgoingTypedLinksAction CloudDirectory ListOutgoingTypedLinks action.
 * \value ListPolicyAttachmentsAction CloudDirectory ListPolicyAttachments action.
 * \value ListPublishedSchemaArnsAction CloudDirectory ListPublishedSchemaArns action.
 * \value ListTagsForResourceAction CloudDirectory ListTagsForResource action.
 * \value ListTypedLinkFacetAttributesAction CloudDirectory ListTypedLinkFacetAttributes action.
 * \value ListTypedLinkFacetNamesAction CloudDirectory ListTypedLinkFacetNames action.
 * \value LookupPolicyAction CloudDirectory LookupPolicy action.
 * \value PublishSchemaAction CloudDirectory PublishSchema action.
 * \value PutSchemaFromJsonAction CloudDirectory PutSchemaFromJson action.
 * \value RemoveFacetFromObjectAction CloudDirectory RemoveFacetFromObject action.
 * \value TagResourceAction CloudDirectory TagResource action.
 * \value UntagResourceAction CloudDirectory UntagResource action.
 * \value UpdateFacetAction CloudDirectory UpdateFacet action.
 * \value UpdateLinkAttributesAction CloudDirectory UpdateLinkAttributes action.
 * \value UpdateObjectAttributesAction CloudDirectory UpdateObjectAttributes action.
 * \value UpdateSchemaAction CloudDirectory UpdateSchema action.
 * \value UpdateTypedLinkFacetAction CloudDirectory UpdateTypedLinkFacet action.
 * \value UpgradeAppliedSchemaAction CloudDirectory UpgradeAppliedSchema action.
 * \value UpgradePublishedSchemaAction CloudDirectory UpgradePublishedSchema action.
 */

/*!
 * Constructs a CloudDirectoryRequest object for CloudDirectory \a action.
 */
CloudDirectoryRequest::CloudDirectoryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudDirectoryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudDirectoryRequest::CloudDirectoryRequest(const CloudDirectoryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudDirectoryRequest object to be equal to \a other.
 */
CloudDirectoryRequest& CloudDirectoryRequest::operator=(const CloudDirectoryRequest &other)
{
    Q_D(CloudDirectoryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudDirectoryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudDirectoryRequestPrivate.
 */
CloudDirectoryRequest::CloudDirectoryRequest(CloudDirectoryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudDirectory action to be performed by this request.
 */
CloudDirectoryRequest::Action CloudDirectoryRequest::action() const
{
    Q_D(const CloudDirectoryRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudDirectory action to be performed by this request.
 */
QString CloudDirectoryRequest::actionString() const
{
    return CloudDirectoryRequestPrivate::toString(action());
}

/*!
 * Returns the CloudDirectory API version implemented by this request.
 */
QString CloudDirectoryRequest::apiVersion() const
{
    Q_D(const CloudDirectoryRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudDirectory action to be performed by this request to \a action.
 */
void CloudDirectoryRequest::setAction(const Action action)
{
    Q_D(CloudDirectoryRequest);
    d->action = action;
}

/*!
 * Sets the CloudDirectory API version to include in this request to \a version.
 */
void CloudDirectoryRequest::setApiVersion(const QString &version)
{
    Q_D(CloudDirectoryRequest);
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
bool CloudDirectoryRequest::operator==(const CloudDirectoryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudDirectory queue name.
 *
 * @par From CloudDirectory FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudDirectory queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudDirectoryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudDirectoryRequest::clearParameter(const QString &name)
{
    Q_D(CloudDirectoryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudDirectoryRequest::clearParameters()
{
    Q_D(CloudDirectoryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudDirectoryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudDirectoryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudDirectoryRequest::parameters() const
{
    Q_D(const CloudDirectoryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudDirectoryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudDirectoryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudDirectoryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudDirectoryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudDirectory request using the given
 * \a endpoint.
 *
 * This CloudDirectory implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudDirectoryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudDirectoryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudDirectory::CloudDirectoryRequestPrivate
 * \brief The CloudDirectoryRequestPrivate class provides private implementation for CloudDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CloudDirectoryRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
CloudDirectoryRequestPrivate::CloudDirectoryRequestPrivate(const CloudDirectoryRequest::Action action, CloudDirectoryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudDirectoryRequest class's copy constructor.
 */
CloudDirectoryRequestPrivate::CloudDirectoryRequestPrivate(const CloudDirectoryRequestPrivate &other,
                                     CloudDirectoryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudDirectoryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudDirectory service's Action
 * query parameters.
 */
QString CloudDirectoryRequestPrivate::toString(const CloudDirectoryRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudDirectoryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudDirectory
} // namespace QtAws
