// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisanalyticsv2request.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::KinesisAnalyticsV2Request
 * \brief The KinesisAnalyticsV2Request class provides an interface for KinesisAnalyticsV2 requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * \enum KinesisAnalyticsV2Request::Action
 *
 * This enum describes the actions that can be performed as KinesisAnalyticsV2
 * requests.
 *
 * \value AddApplicationCloudWatchLoggingOptionAction KinesisAnalyticsV2 AddApplicationCloudWatchLoggingOption action.
 * \value AddApplicationInputAction KinesisAnalyticsV2 AddApplicationInput action.
 * \value AddApplicationInputProcessingConfigurationAction KinesisAnalyticsV2 AddApplicationInputProcessingConfiguration action.
 * \value AddApplicationOutputAction KinesisAnalyticsV2 AddApplicationOutput action.
 * \value AddApplicationReferenceDataSourceAction KinesisAnalyticsV2 AddApplicationReferenceDataSource action.
 * \value AddApplicationVpcConfigurationAction KinesisAnalyticsV2 AddApplicationVpcConfiguration action.
 * \value CreateApplicationAction KinesisAnalyticsV2 CreateApplication action.
 * \value CreateApplicationPresignedUrlAction KinesisAnalyticsV2 CreateApplicationPresignedUrl action.
 * \value CreateApplicationSnapshotAction KinesisAnalyticsV2 CreateApplicationSnapshot action.
 * \value DeleteApplicationAction KinesisAnalyticsV2 DeleteApplication action.
 * \value DeleteApplicationCloudWatchLoggingOptionAction KinesisAnalyticsV2 DeleteApplicationCloudWatchLoggingOption action.
 * \value DeleteApplicationInputProcessingConfigurationAction KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration action.
 * \value DeleteApplicationOutputAction KinesisAnalyticsV2 DeleteApplicationOutput action.
 * \value DeleteApplicationReferenceDataSourceAction KinesisAnalyticsV2 DeleteApplicationReferenceDataSource action.
 * \value DeleteApplicationSnapshotAction KinesisAnalyticsV2 DeleteApplicationSnapshot action.
 * \value DeleteApplicationVpcConfigurationAction KinesisAnalyticsV2 DeleteApplicationVpcConfiguration action.
 * \value DescribeApplicationAction KinesisAnalyticsV2 DescribeApplication action.
 * \value DescribeApplicationSnapshotAction KinesisAnalyticsV2 DescribeApplicationSnapshot action.
 * \value DescribeApplicationVersionAction KinesisAnalyticsV2 DescribeApplicationVersion action.
 * \value DiscoverInputSchemaAction KinesisAnalyticsV2 DiscoverInputSchema action.
 * \value ListApplicationSnapshotsAction KinesisAnalyticsV2 ListApplicationSnapshots action.
 * \value ListApplicationVersionsAction KinesisAnalyticsV2 ListApplicationVersions action.
 * \value ListApplicationsAction KinesisAnalyticsV2 ListApplications action.
 * \value ListTagsForResourceAction KinesisAnalyticsV2 ListTagsForResource action.
 * \value RollbackApplicationAction KinesisAnalyticsV2 RollbackApplication action.
 * \value StartApplicationAction KinesisAnalyticsV2 StartApplication action.
 * \value StopApplicationAction KinesisAnalyticsV2 StopApplication action.
 * \value TagResourceAction KinesisAnalyticsV2 TagResource action.
 * \value UntagResourceAction KinesisAnalyticsV2 UntagResource action.
 * \value UpdateApplicationAction KinesisAnalyticsV2 UpdateApplication action.
 * \value UpdateApplicationMaintenanceConfigurationAction KinesisAnalyticsV2 UpdateApplicationMaintenanceConfiguration action.
 */

/*!
 * Constructs a KinesisAnalyticsV2Request object for KinesisAnalyticsV2 \a action.
 */
KinesisAnalyticsV2Request::KinesisAnalyticsV2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KinesisAnalyticsV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisAnalyticsV2Request::KinesisAnalyticsV2Request(const KinesisAnalyticsV2Request &other)
    : QtAws::Core::AwsAbstractRequest(new KinesisAnalyticsV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisAnalyticsV2Request object to be equal to \a other.
 */
KinesisAnalyticsV2Request& KinesisAnalyticsV2Request::operator=(const KinesisAnalyticsV2Request &other)
{
    Q_D(KinesisAnalyticsV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KinesisAnalyticsV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisAnalyticsV2RequestPrivate.
 */
KinesisAnalyticsV2Request::KinesisAnalyticsV2Request(KinesisAnalyticsV2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the KinesisAnalyticsV2 action to be performed by this request.
 */
KinesisAnalyticsV2Request::Action KinesisAnalyticsV2Request::action() const
{
    Q_D(const KinesisAnalyticsV2Request);
    return d->action;
}

/*!
 * Returns the name of the KinesisAnalyticsV2 action to be performed by this request.
 */
QString KinesisAnalyticsV2Request::actionString() const
{
    return KinesisAnalyticsV2RequestPrivate::toString(action());
}

/*!
 * Returns the KinesisAnalyticsV2 API version implemented by this request.
 */
QString KinesisAnalyticsV2Request::apiVersion() const
{
    Q_D(const KinesisAnalyticsV2Request);
    return d->apiVersion;
}

/*!
 * Sets the KinesisAnalyticsV2 action to be performed by this request to \a action.
 */
void KinesisAnalyticsV2Request::setAction(const Action action)
{
    Q_D(KinesisAnalyticsV2Request);
    d->action = action;
}

/*!
 * Sets the KinesisAnalyticsV2 API version to include in this request to \a version.
 */
void KinesisAnalyticsV2Request::setApiVersion(const QString &version)
{
    Q_D(KinesisAnalyticsV2Request);
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
bool KinesisAnalyticsV2Request::operator==(const KinesisAnalyticsV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KinesisAnalyticsV2 queue name.
 *
 * @par From KinesisAnalyticsV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KinesisAnalyticsV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KinesisAnalyticsV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisAnalyticsV2Request::clearParameter(const QString &name)
{
    Q_D(KinesisAnalyticsV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisAnalyticsV2Request::clearParameters()
{
    Q_D(KinesisAnalyticsV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisAnalyticsV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisAnalyticsV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisAnalyticsV2Request::parameters() const
{
    Q_D(const KinesisAnalyticsV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisAnalyticsV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisAnalyticsV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisAnalyticsV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisAnalyticsV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KinesisAnalyticsV2 request using the given
 * \a endpoint.
 *
 * This KinesisAnalyticsV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisAnalyticsV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KinesisAnalyticsV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::KinesisAnalyticsV2RequestPrivate
 * \brief The KinesisAnalyticsV2RequestPrivate class provides private implementation for KinesisAnalyticsV2Request.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a KinesisAnalyticsV2RequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
KinesisAnalyticsV2RequestPrivate::KinesisAnalyticsV2RequestPrivate(const KinesisAnalyticsV2Request::Action action, KinesisAnalyticsV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-23"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisAnalyticsV2Request class's copy constructor.
 */
KinesisAnalyticsV2RequestPrivate::KinesisAnalyticsV2RequestPrivate(const KinesisAnalyticsV2RequestPrivate &other,
                                     KinesisAnalyticsV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisAnalyticsV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisAnalyticsV2 service's Action
 * query parameters.
 */
QString KinesisAnalyticsV2RequestPrivate::toString(const KinesisAnalyticsV2Request::Action &action)
{
    #define ActionToString(action) \
        case KinesisAnalyticsV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddApplicationCloudWatchLoggingOption);
        ActionToString(AddApplicationInput);
        ActionToString(AddApplicationInputProcessingConfiguration);
        ActionToString(AddApplicationOutput);
        ActionToString(AddApplicationReferenceDataSource);
        ActionToString(AddApplicationVpcConfiguration);
        ActionToString(CreateApplication);
        ActionToString(CreateApplicationPresignedUrl);
        ActionToString(CreateApplicationSnapshot);
        ActionToString(DeleteApplication);
        ActionToString(DeleteApplicationCloudWatchLoggingOption);
        ActionToString(DeleteApplicationInputProcessingConfiguration);
        ActionToString(DeleteApplicationOutput);
        ActionToString(DeleteApplicationReferenceDataSource);
        ActionToString(DeleteApplicationSnapshot);
        ActionToString(DeleteApplicationVpcConfiguration);
        ActionToString(DescribeApplication);
        ActionToString(DescribeApplicationSnapshot);
        ActionToString(DescribeApplicationVersion);
        ActionToString(DiscoverInputSchema);
        ActionToString(ListApplicationSnapshots);
        ActionToString(ListApplicationVersions);
        ActionToString(ListApplications);
        ActionToString(ListTagsForResource);
        ActionToString(RollbackApplication);
        ActionToString(StartApplication);
        ActionToString(StopApplication);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApplication);
        ActionToString(UpdateApplicationMaintenanceConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
