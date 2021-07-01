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

#include "mediaconvertrequest.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::MediaConvertRequest
 * \brief The MediaConvertRequest class provides an interface for MediaConvert requests.
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * \enum MediaConvertRequest::Action
 *
 * This enum describes the actions that can be performed as MediaConvert
 * requests.
 *
 * \value AssociateCertificateAction MediaConvert AssociateCertificate action.
 * \value CancelJobAction MediaConvert CancelJob action.
 * \value CreateJobAction MediaConvert CreateJob action.
 * \value CreateJobTemplateAction MediaConvert CreateJobTemplate action.
 * \value CreatePresetAction MediaConvert CreatePreset action.
 * \value CreateQueueAction MediaConvert CreateQueue action.
 * \value DeleteJobTemplateAction MediaConvert DeleteJobTemplate action.
 * \value DeletePresetAction MediaConvert DeletePreset action.
 * \value DeleteQueueAction MediaConvert DeleteQueue action.
 * \value DescribeEndpointsAction MediaConvert DescribeEndpoints action.
 * \value DisassociateCertificateAction MediaConvert DisassociateCertificate action.
 * \value GetJobAction MediaConvert GetJob action.
 * \value GetJobTemplateAction MediaConvert GetJobTemplate action.
 * \value GetPresetAction MediaConvert GetPreset action.
 * \value GetQueueAction MediaConvert GetQueue action.
 * \value ListJobTemplatesAction MediaConvert ListJobTemplates action.
 * \value ListJobsAction MediaConvert ListJobs action.
 * \value ListPresetsAction MediaConvert ListPresets action.
 * \value ListQueuesAction MediaConvert ListQueues action.
 * \value ListTagsForResourceAction MediaConvert ListTagsForResource action.
 * \value TagResourceAction MediaConvert TagResource action.
 * \value UntagResourceAction MediaConvert UntagResource action.
 * \value UpdateJobTemplateAction MediaConvert UpdateJobTemplate action.
 * \value UpdatePresetAction MediaConvert UpdatePreset action.
 * \value UpdateQueueAction MediaConvert UpdateQueue action.
 */

/*!
 * Constructs a MediaConvertRequest object for MediaConvert \a action.
 */
MediaConvertRequest::MediaConvertRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaConvertRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaConvertRequest::MediaConvertRequest(const MediaConvertRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaConvertRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaConvertRequest object to be equal to \a other.
 */
MediaConvertRequest& MediaConvertRequest::operator=(const MediaConvertRequest &other)
{
    Q_D(MediaConvertRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaConvertRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConvertRequestPrivate.
 */
MediaConvertRequest::MediaConvertRequest(MediaConvertRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MediaConvert action to be performed by this request.
 */
MediaConvertRequest::Action MediaConvertRequest::action() const
{
    Q_D(const MediaConvertRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaConvert action to be performed by this request.
 */
QString MediaConvertRequest::actionString() const
{
    return MediaConvertRequestPrivate::toString(action());
}

/*!
 * Returns the MediaConvert API version implemented by this request.
 */
QString MediaConvertRequest::apiVersion() const
{
    Q_D(const MediaConvertRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaConvert action to be performed by this request to \a action.
 */
void MediaConvertRequest::setAction(const Action action)
{
    Q_D(MediaConvertRequest);
    d->action = action;
}

/*!
 * Sets the MediaConvert API version to include in this request to \a version.
 */
void MediaConvertRequest::setApiVersion(const QString &version)
{
    Q_D(MediaConvertRequest);
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
bool MediaConvertRequest::operator==(const MediaConvertRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaConvert queue name.
 *
 * @par From MediaConvert FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaConvert queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaConvertRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaConvertRequest::clearParameter(const QString &name)
{
    Q_D(MediaConvertRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaConvertRequest::clearParameters()
{
    Q_D(MediaConvertRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaConvertRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaConvertRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaConvertRequest::parameters() const
{
    Q_D(const MediaConvertRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaConvertRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaConvertRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaConvertRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaConvertRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaConvert request using the given
 * \a endpoint.
 *
 * This MediaConvert implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaConvertRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaConvertRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaConvert::MediaConvertRequestPrivate
 * \brief The MediaConvertRequestPrivate class provides private implementation for MediaConvertRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a MediaConvertRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
MediaConvertRequestPrivate::MediaConvertRequestPrivate(const MediaConvertRequest::Action action, MediaConvertRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaConvertRequest class's copy constructor.
 */
MediaConvertRequestPrivate::MediaConvertRequestPrivate(const MediaConvertRequestPrivate &other,
                                     MediaConvertRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaConvertRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaConvert service's Action
 * query parameters.
 */
QString MediaConvertRequestPrivate::toString(const MediaConvertRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaConvertRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateCertificate);
        ActionToString(CancelJob);
        ActionToString(CreateJob);
        ActionToString(CreateJobTemplate);
        ActionToString(CreatePreset);
        ActionToString(CreateQueue);
        ActionToString(DeleteJobTemplate);
        ActionToString(DeletePreset);
        ActionToString(DeleteQueue);
        ActionToString(DescribeEndpoints);
        ActionToString(DisassociateCertificate);
        ActionToString(GetJob);
        ActionToString(GetJobTemplate);
        ActionToString(GetPreset);
        ActionToString(GetQueue);
        ActionToString(ListJobTemplates);
        ActionToString(ListJobs);
        ActionToString(ListPresets);
        ActionToString(ListQueues);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateJobTemplate);
        ActionToString(UpdatePreset);
        ActionToString(UpdateQueue);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaConvert
} // namespace QtAws
