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

#include "connectcampaignsrequest.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ConnectCampaignsRequest
 * \brief The ConnectCampaignsRequest class provides an interface for ConnectCampaigns requests.
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * \enum ConnectCampaignsRequest::Action
 *
 * This enum describes the actions that can be performed as ConnectCampaigns
 * requests.
 *
 * \value CreateCampaignAction ConnectCampaigns CreateCampaign action.
 * \value DeleteCampaignAction ConnectCampaigns DeleteCampaign action.
 * \value DeleteConnectInstanceConfigAction ConnectCampaigns DeleteConnectInstanceConfig action.
 * \value DeleteInstanceOnboardingJobAction ConnectCampaigns DeleteInstanceOnboardingJob action.
 * \value DescribeCampaignAction ConnectCampaigns DescribeCampaign action.
 * \value GetCampaignStateAction ConnectCampaigns GetCampaignState action.
 * \value GetCampaignStateBatchAction ConnectCampaigns GetCampaignStateBatch action.
 * \value GetConnectInstanceConfigAction ConnectCampaigns GetConnectInstanceConfig action.
 * \value GetInstanceOnboardingJobStatusAction ConnectCampaigns GetInstanceOnboardingJobStatus action.
 * \value ListCampaignsAction ConnectCampaigns ListCampaigns action.
 * \value ListTagsForResourceAction ConnectCampaigns ListTagsForResource action.
 * \value PauseCampaignAction ConnectCampaigns PauseCampaign action.
 * \value PutDialRequestBatchAction ConnectCampaigns PutDialRequestBatch action.
 * \value ResumeCampaignAction ConnectCampaigns ResumeCampaign action.
 * \value StartCampaignAction ConnectCampaigns StartCampaign action.
 * \value StartInstanceOnboardingJobAction ConnectCampaigns StartInstanceOnboardingJob action.
 * \value StopCampaignAction ConnectCampaigns StopCampaign action.
 * \value TagResourceAction ConnectCampaigns TagResource action.
 * \value UntagResourceAction ConnectCampaigns UntagResource action.
 * \value UpdateCampaignDialerConfigAction ConnectCampaigns UpdateCampaignDialerConfig action.
 * \value UpdateCampaignNameAction ConnectCampaigns UpdateCampaignName action.
 * \value UpdateCampaignOutboundCallConfigAction ConnectCampaigns UpdateCampaignOutboundCallConfig action.
 */

/*!
 * Constructs a ConnectCampaignsRequest object for ConnectCampaigns \a action.
 */
ConnectCampaignsRequest::ConnectCampaignsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ConnectCampaignsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ConnectCampaignsRequest::ConnectCampaignsRequest(const ConnectCampaignsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ConnectCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ConnectCampaignsRequest object to be equal to \a other.
 */
ConnectCampaignsRequest& ConnectCampaignsRequest::operator=(const ConnectCampaignsRequest &other)
{
    Q_D(ConnectCampaignsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ConnectCampaignsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectCampaignsRequestPrivate.
 */
ConnectCampaignsRequest::ConnectCampaignsRequest(ConnectCampaignsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ConnectCampaigns action to be performed by this request.
 */
ConnectCampaignsRequest::Action ConnectCampaignsRequest::action() const
{
    Q_D(const ConnectCampaignsRequest);
    return d->action;
}

/*!
 * Returns the name of the ConnectCampaigns action to be performed by this request.
 */
QString ConnectCampaignsRequest::actionString() const
{
    return ConnectCampaignsRequestPrivate::toString(action());
}

/*!
 * Returns the ConnectCampaigns API version implemented by this request.
 */
QString ConnectCampaignsRequest::apiVersion() const
{
    Q_D(const ConnectCampaignsRequest);
    return d->apiVersion;
}

/*!
 * Sets the ConnectCampaigns action to be performed by this request to \a action.
 */
void ConnectCampaignsRequest::setAction(const Action action)
{
    Q_D(ConnectCampaignsRequest);
    d->action = action;
}

/*!
 * Sets the ConnectCampaigns API version to include in this request to \a version.
 */
void ConnectCampaignsRequest::setApiVersion(const QString &version)
{
    Q_D(ConnectCampaignsRequest);
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
bool ConnectCampaignsRequest::operator==(const ConnectCampaignsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ConnectCampaigns queue name.
 *
 * @par From ConnectCampaigns FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ConnectCampaigns queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConnectCampaignsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ConnectCampaignsRequest::clearParameter(const QString &name)
{
    Q_D(ConnectCampaignsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ConnectCampaignsRequest::clearParameters()
{
    Q_D(ConnectCampaignsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ConnectCampaignsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConnectCampaignsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ConnectCampaignsRequest::parameters() const
{
    Q_D(const ConnectCampaignsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ConnectCampaignsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConnectCampaignsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ConnectCampaignsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConnectCampaignsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ConnectCampaigns request using the given
 * \a endpoint.
 *
 * This ConnectCampaigns implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ConnectCampaignsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ConnectCampaignsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ConnectCampaigns::ConnectCampaignsRequestPrivate
 * \brief The ConnectCampaignsRequestPrivate class provides private implementation for ConnectCampaignsRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ConnectCampaignsRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
ConnectCampaignsRequestPrivate::ConnectCampaignsRequestPrivate(const ConnectCampaignsRequest::Action action, ConnectCampaignsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-01-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConnectCampaignsRequest class's copy constructor.
 */
ConnectCampaignsRequestPrivate::ConnectCampaignsRequestPrivate(const ConnectCampaignsRequestPrivate &other,
                                     ConnectCampaignsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ConnectCampaignsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ConnectCampaigns service's Action
 * query parameters.
 */
QString ConnectCampaignsRequestPrivate::toString(const ConnectCampaignsRequest::Action &action)
{
    #define ActionToString(action) \
        case ConnectCampaignsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCampaign);
        ActionToString(DeleteCampaign);
        ActionToString(DeleteConnectInstanceConfig);
        ActionToString(DeleteInstanceOnboardingJob);
        ActionToString(DescribeCampaign);
        ActionToString(GetCampaignState);
        ActionToString(GetCampaignStateBatch);
        ActionToString(GetConnectInstanceConfig);
        ActionToString(GetInstanceOnboardingJobStatus);
        ActionToString(ListCampaigns);
        ActionToString(ListTagsForResource);
        ActionToString(PauseCampaign);
        ActionToString(PutDialRequestBatch);
        ActionToString(ResumeCampaign);
        ActionToString(StartCampaign);
        ActionToString(StartInstanceOnboardingJob);
        ActionToString(StopCampaign);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCampaignDialerConfig);
        ActionToString(UpdateCampaignName);
        ActionToString(UpdateCampaignOutboundCallConfig);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ConnectCampaigns
} // namespace QtAws
