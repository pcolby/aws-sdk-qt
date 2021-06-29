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

#include "mediapackagevodrequest.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::MediaPackageVodRequest
 * \brief The MediaPackageVodRequest class provides an interface for MediaPackageVod requests.
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * \enum MediaPackageVodRequest::Action
 *
 * This enum describes the actions that can be performed as MediaPackageVod
 * requests.
 *
 * \value ConfigureLogsAction MediaPackageVod ConfigureLogs action.
 * \value CreateAssetAction MediaPackageVod CreateAsset action.
 * \value CreatePackagingConfigurationAction MediaPackageVod CreatePackagingConfiguration action.
 * \value CreatePackagingGroupAction MediaPackageVod CreatePackagingGroup action.
 * \value DeleteAssetAction MediaPackageVod DeleteAsset action.
 * \value DeletePackagingConfigurationAction MediaPackageVod DeletePackagingConfiguration action.
 * \value DeletePackagingGroupAction MediaPackageVod DeletePackagingGroup action.
 * \value DescribeAssetAction MediaPackageVod DescribeAsset action.
 * \value DescribePackagingConfigurationAction MediaPackageVod DescribePackagingConfiguration action.
 * \value DescribePackagingGroupAction MediaPackageVod DescribePackagingGroup action.
 * \value ListAssetsAction MediaPackageVod ListAssets action.
 * \value ListPackagingConfigurationsAction MediaPackageVod ListPackagingConfigurations action.
 * \value ListPackagingGroupsAction MediaPackageVod ListPackagingGroups action.
 * \value ListTagsForResourceAction MediaPackageVod ListTagsForResource action.
 * \value TagResourceAction MediaPackageVod TagResource action.
 * \value UntagResourceAction MediaPackageVod UntagResource action.
 * \value UpdatePackagingGroupAction MediaPackageVod UpdatePackagingGroup action.
 */

/*!
 * Constructs a MediaPackageVodRequest object for MediaPackageVod \a action.
 */
MediaPackageVodRequest::MediaPackageVodRequest(const Action action)
    : d_ptr(new MediaPackageVodRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaPackageVodRequest::MediaPackageVodRequest(const MediaPackageVodRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new MediaPackageVodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaPackageVodRequest object to be equal to \a other.
 */
MediaPackageVodRequest& MediaPackageVodRequest::operator=(const MediaPackageVodRequest &other)
{
    Q_D(MediaPackageVodRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaPackageVodRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaPackageVodRequestPrivate.
 */
MediaPackageVodRequest::MediaPackageVodRequest(MediaPackageVodRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the MediaPackageVod action to be performed by this request.
 */
MediaPackageVodRequest::Action MediaPackageVodRequest::action() const
{
    Q_D(const MediaPackageVodRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaPackageVod action to be performed by this request.
 */
QString MediaPackageVodRequest::actionString() const
{
    return MediaPackageVodRequestPrivate::toString(action());
}

/*!
 * Returns the MediaPackageVod API version implemented by this request.
 */
QString MediaPackageVodRequest::apiVersion() const
{
    Q_D(const MediaPackageVodRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaPackageVod action to be performed by this request to \a action.
 */
void MediaPackageVodRequest::setAction(const Action action)
{
    Q_D(MediaPackageVodRequest);
    d->action = action;
}

/*!
 * Sets the MediaPackageVod API version to include in this request to \a version.
 */
void MediaPackageVodRequest::setApiVersion(const QString &version)
{
    Q_D(MediaPackageVodRequest);
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
bool MediaPackageVodRequest::operator==(const MediaPackageVodRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaPackageVod queue name.
 *
 * @par From MediaPackageVod FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaPackageVod queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaPackageVodRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaPackageVodRequest::clearParameter(const QString &name)
{
    Q_D(MediaPackageVodRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaPackageVodRequest::clearParameters()
{
    Q_D(MediaPackageVodRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaPackageVodRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaPackageVodRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaPackageVodRequest::parameters() const
{
    Q_D(const MediaPackageVodRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaPackageVodRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaPackageVodRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaPackageVodRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaPackageVodRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaPackageVod request using the given
 * \a endpoint.
 *
 * This MediaPackageVod implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaPackageVodRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaPackageVodRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaPackageVod::MediaPackageVodRequestPrivate
 * \brief The MediaPackageVodRequestPrivate class provides private implementation for MediaPackageVodRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a MediaPackageVodRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
MediaPackageVodRequestPrivate::MediaPackageVodRequestPrivate(const MediaPackageVodRequest::Action action, MediaPackageVodRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaPackageVodRequest class's copy constructor.
 */
MediaPackageVodRequestPrivate::MediaPackageVodRequestPrivate(const MediaPackageVodRequestPrivate &other,
                                     MediaPackageVodRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaPackageVodRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaPackageVod service's Action
 * query parameters.
 */
QString MediaPackageVodRequestPrivate::toString(const MediaPackageVodRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaPackageVodRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ConfigureLogs);
        ActionToString(CreateAsset);
        ActionToString(CreatePackagingConfiguration);
        ActionToString(CreatePackagingGroup);
        ActionToString(DeleteAsset);
        ActionToString(DeletePackagingConfiguration);
        ActionToString(DeletePackagingGroup);
        ActionToString(DescribeAsset);
        ActionToString(DescribePackagingConfiguration);
        ActionToString(DescribePackagingGroup);
        ActionToString(ListAssets);
        ActionToString(ListPackagingConfigurations);
        ActionToString(ListPackagingGroups);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdatePackagingGroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaPackageVod
} // namespace QtAws
