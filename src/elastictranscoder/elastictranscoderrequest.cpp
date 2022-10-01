// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "elastictranscoderrequest.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ElasticTranscoderRequest
 * \brief The ElasticTranscoderRequest class provides an interface for ElasticTranscoder requests.
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * \enum ElasticTranscoderRequest::Action
 *
 * This enum describes the actions that can be performed as ElasticTranscoder
 * requests.
 *
 * \value CancelJobAction ElasticTranscoder CancelJob action.
 * \value CreateJobAction ElasticTranscoder CreateJob action.
 * \value CreatePipelineAction ElasticTranscoder CreatePipeline action.
 * \value CreatePresetAction ElasticTranscoder CreatePreset action.
 * \value DeletePipelineAction ElasticTranscoder DeletePipeline action.
 * \value DeletePresetAction ElasticTranscoder DeletePreset action.
 * \value ListJobsByPipelineAction ElasticTranscoder ListJobsByPipeline action.
 * \value ListJobsByStatusAction ElasticTranscoder ListJobsByStatus action.
 * \value ListPipelinesAction ElasticTranscoder ListPipelines action.
 * \value ListPresetsAction ElasticTranscoder ListPresets action.
 * \value ReadJobAction ElasticTranscoder ReadJob action.
 * \value ReadPipelineAction ElasticTranscoder ReadPipeline action.
 * \value ReadPresetAction ElasticTranscoder ReadPreset action.
 * \value TestRoleAction ElasticTranscoder TestRole action.
 * \value UpdatePipelineAction ElasticTranscoder UpdatePipeline action.
 * \value UpdatePipelineNotificationsAction ElasticTranscoder UpdatePipelineNotifications action.
 * \value UpdatePipelineStatusAction ElasticTranscoder UpdatePipelineStatus action.
 */

/*!
 * Constructs a ElasticTranscoderRequest object for ElasticTranscoder \a action.
 */
ElasticTranscoderRequest::ElasticTranscoderRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticTranscoderRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticTranscoderRequest::ElasticTranscoderRequest(const ElasticTranscoderRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticTranscoderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticTranscoderRequest object to be equal to \a other.
 */
ElasticTranscoderRequest& ElasticTranscoderRequest::operator=(const ElasticTranscoderRequest &other)
{
    Q_D(ElasticTranscoderRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticTranscoderRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticTranscoderRequestPrivate.
 */
ElasticTranscoderRequest::ElasticTranscoderRequest(ElasticTranscoderRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ElasticTranscoder action to be performed by this request.
 */
ElasticTranscoderRequest::Action ElasticTranscoderRequest::action() const
{
    Q_D(const ElasticTranscoderRequest);
    return d->action;
}

/*!
 * Returns the name of the ElasticTranscoder action to be performed by this request.
 */
QString ElasticTranscoderRequest::actionString() const
{
    return ElasticTranscoderRequestPrivate::toString(action());
}

/*!
 * Returns the ElasticTranscoder API version implemented by this request.
 */
QString ElasticTranscoderRequest::apiVersion() const
{
    Q_D(const ElasticTranscoderRequest);
    return d->apiVersion;
}

/*!
 * Sets the ElasticTranscoder action to be performed by this request to \a action.
 */
void ElasticTranscoderRequest::setAction(const Action action)
{
    Q_D(ElasticTranscoderRequest);
    d->action = action;
}

/*!
 * Sets the ElasticTranscoder API version to include in this request to \a version.
 */
void ElasticTranscoderRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticTranscoderRequest);
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
bool ElasticTranscoderRequest::operator==(const ElasticTranscoderRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElasticTranscoder queue name.
 *
 * @par From ElasticTranscoder FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticTranscoder queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticTranscoderRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticTranscoderRequest::clearParameter(const QString &name)
{
    Q_D(ElasticTranscoderRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticTranscoderRequest::clearParameters()
{
    Q_D(ElasticTranscoderRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticTranscoderRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticTranscoderRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticTranscoderRequest::parameters() const
{
    Q_D(const ElasticTranscoderRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticTranscoderRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticTranscoderRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticTranscoderRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticTranscoderRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElasticTranscoder request using the given
 * \a endpoint.
 *
 * This ElasticTranscoder implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticTranscoderRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ElasticTranscoderRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElasticTranscoder::ElasticTranscoderRequestPrivate
 * \brief The ElasticTranscoderRequestPrivate class provides private implementation for ElasticTranscoderRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ElasticTranscoderRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ElasticTranscoderRequestPrivate::ElasticTranscoderRequestPrivate(const ElasticTranscoderRequest::Action action, ElasticTranscoderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-09-25"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticTranscoderRequest class's copy constructor.
 */
ElasticTranscoderRequestPrivate::ElasticTranscoderRequestPrivate(const ElasticTranscoderRequestPrivate &other,
                                     ElasticTranscoderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticTranscoderRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticTranscoder service's Action
 * query parameters.
 */
QString ElasticTranscoderRequestPrivate::toString(const ElasticTranscoderRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticTranscoderRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelJob);
        ActionToString(CreateJob);
        ActionToString(CreatePipeline);
        ActionToString(CreatePreset);
        ActionToString(DeletePipeline);
        ActionToString(DeletePreset);
        ActionToString(ListJobsByPipeline);
        ActionToString(ListJobsByStatus);
        ActionToString(ListPipelines);
        ActionToString(ListPresets);
        ActionToString(ReadJob);
        ActionToString(ReadPipeline);
        ActionToString(ReadPreset);
        ActionToString(TestRole);
        ActionToString(UpdatePipeline);
        ActionToString(UpdatePipelineNotifications);
        ActionToString(UpdatePipelineStatus);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticTranscoder
} // namespace QtAws
