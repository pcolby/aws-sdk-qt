// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediapackagerequest.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::MediaPackageRequest
 * \brief The MediaPackageRequest class provides an interface for MediaPackage requests.
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * \enum MediaPackageRequest::Action
 *
 * This enum describes the actions that can be performed as MediaPackage
 * requests.
 *
 * \value ConfigureLogsAction MediaPackage ConfigureLogs action.
 * \value CreateChannelAction MediaPackage CreateChannel action.
 * \value CreateHarvestJobAction MediaPackage CreateHarvestJob action.
 * \value CreateOriginEndpointAction MediaPackage CreateOriginEndpoint action.
 * \value DeleteChannelAction MediaPackage DeleteChannel action.
 * \value DeleteOriginEndpointAction MediaPackage DeleteOriginEndpoint action.
 * \value DescribeChannelAction MediaPackage DescribeChannel action.
 * \value DescribeHarvestJobAction MediaPackage DescribeHarvestJob action.
 * \value DescribeOriginEndpointAction MediaPackage DescribeOriginEndpoint action.
 * \value ListChannelsAction MediaPackage ListChannels action.
 * \value ListHarvestJobsAction MediaPackage ListHarvestJobs action.
 * \value ListOriginEndpointsAction MediaPackage ListOriginEndpoints action.
 * \value ListTagsForResourceAction MediaPackage ListTagsForResource action.
 * \value RotateChannelCredentialsAction MediaPackage RotateChannelCredentials action.
 * \value RotateIngestEndpointCredentialsAction MediaPackage RotateIngestEndpointCredentials action.
 * \value TagResourceAction MediaPackage TagResource action.
 * \value UntagResourceAction MediaPackage UntagResource action.
 * \value UpdateChannelAction MediaPackage UpdateChannel action.
 * \value UpdateOriginEndpointAction MediaPackage UpdateOriginEndpoint action.
 */

/*!
 * Constructs a MediaPackageRequest object for MediaPackage \a action.
 */
MediaPackageRequest::MediaPackageRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaPackageRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaPackageRequest::MediaPackageRequest(const MediaPackageRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaPackageRequest object to be equal to \a other.
 */
MediaPackageRequest& MediaPackageRequest::operator=(const MediaPackageRequest &other)
{
    Q_D(MediaPackageRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaPackageRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaPackageRequestPrivate.
 */
MediaPackageRequest::MediaPackageRequest(MediaPackageRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MediaPackage action to be performed by this request.
 */
MediaPackageRequest::Action MediaPackageRequest::action() const
{
    Q_D(const MediaPackageRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaPackage action to be performed by this request.
 */
QString MediaPackageRequest::actionString() const
{
    return MediaPackageRequestPrivate::toString(action());
}

/*!
 * Returns the MediaPackage API version implemented by this request.
 */
QString MediaPackageRequest::apiVersion() const
{
    Q_D(const MediaPackageRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaPackage action to be performed by this request to \a action.
 */
void MediaPackageRequest::setAction(const Action action)
{
    Q_D(MediaPackageRequest);
    d->action = action;
}

/*!
 * Sets the MediaPackage API version to include in this request to \a version.
 */
void MediaPackageRequest::setApiVersion(const QString &version)
{
    Q_D(MediaPackageRequest);
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
bool MediaPackageRequest::operator==(const MediaPackageRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaPackage queue name.
 *
 * @par From MediaPackage FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaPackage queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaPackageRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaPackageRequest::clearParameter(const QString &name)
{
    Q_D(MediaPackageRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaPackageRequest::clearParameters()
{
    Q_D(MediaPackageRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaPackageRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaPackageRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaPackageRequest::parameters() const
{
    Q_D(const MediaPackageRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaPackageRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaPackageRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaPackageRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaPackageRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaPackage request using the given
 * \a endpoint.
 *
 * This MediaPackage implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaPackageRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaPackageRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaPackage::MediaPackageRequestPrivate
 * \brief The MediaPackageRequestPrivate class provides private implementation for MediaPackageRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a MediaPackageRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
MediaPackageRequestPrivate::MediaPackageRequestPrivate(const MediaPackageRequest::Action action, MediaPackageRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-10-12"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaPackageRequest class's copy constructor.
 */
MediaPackageRequestPrivate::MediaPackageRequestPrivate(const MediaPackageRequestPrivate &other,
                                     MediaPackageRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaPackageRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaPackage service's Action
 * query parameters.
 */
QString MediaPackageRequestPrivate::toString(const MediaPackageRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaPackageRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ConfigureLogs);
        ActionToString(CreateChannel);
        ActionToString(CreateHarvestJob);
        ActionToString(CreateOriginEndpoint);
        ActionToString(DeleteChannel);
        ActionToString(DeleteOriginEndpoint);
        ActionToString(DescribeChannel);
        ActionToString(DescribeHarvestJob);
        ActionToString(DescribeOriginEndpoint);
        ActionToString(ListChannels);
        ActionToString(ListHarvestJobs);
        ActionToString(ListOriginEndpoints);
        ActionToString(ListTagsForResource);
        ActionToString(RotateChannelCredentials);
        ActionToString(RotateIngestEndpointCredentials);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateChannel);
        ActionToString(UpdateOriginEndpoint);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaPackage
} // namespace QtAws
