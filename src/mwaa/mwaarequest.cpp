// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mwaarequest.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace Mwaa {

/*!
 * \class QtAws::Mwaa::MwaaRequest
 * \brief The MwaaRequest class provides an interface for Mwaa requests.
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * \enum MwaaRequest::Action
 *
 * This enum describes the actions that can be performed as Mwaa
 * requests.
 *
 * \value CreateCliTokenAction Mwaa CreateCliToken action.
 * \value CreateEnvironmentAction Mwaa CreateEnvironment action.
 * \value CreateWebLoginTokenAction Mwaa CreateWebLoginToken action.
 * \value DeleteEnvironmentAction Mwaa DeleteEnvironment action.
 * \value GetEnvironmentAction Mwaa GetEnvironment action.
 * \value ListEnvironmentsAction Mwaa ListEnvironments action.
 * \value ListTagsForResourceAction Mwaa ListTagsForResource action.
 * \value PublishMetricsAction Mwaa PublishMetrics action.
 * \value TagResourceAction Mwaa TagResource action.
 * \value UntagResourceAction Mwaa UntagResource action.
 * \value UpdateEnvironmentAction Mwaa UpdateEnvironment action.
 */

/*!
 * Constructs a MwaaRequest object for Mwaa \a action.
 */
MwaaRequest::MwaaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MwaaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MwaaRequest::MwaaRequest(const MwaaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MwaaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MwaaRequest object to be equal to \a other.
 */
MwaaRequest& MwaaRequest::operator=(const MwaaRequest &other)
{
    Q_D(MwaaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MwaaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MwaaRequestPrivate.
 */
MwaaRequest::MwaaRequest(MwaaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Mwaa action to be performed by this request.
 */
MwaaRequest::Action MwaaRequest::action() const
{
    Q_D(const MwaaRequest);
    return d->action;
}

/*!
 * Returns the name of the Mwaa action to be performed by this request.
 */
QString MwaaRequest::actionString() const
{
    return MwaaRequestPrivate::toString(action());
}

/*!
 * Returns the Mwaa API version implemented by this request.
 */
QString MwaaRequest::apiVersion() const
{
    Q_D(const MwaaRequest);
    return d->apiVersion;
}

/*!
 * Sets the Mwaa action to be performed by this request to \a action.
 */
void MwaaRequest::setAction(const Action action)
{
    Q_D(MwaaRequest);
    d->action = action;
}

/*!
 * Sets the Mwaa API version to include in this request to \a version.
 */
void MwaaRequest::setApiVersion(const QString &version)
{
    Q_D(MwaaRequest);
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
bool MwaaRequest::operator==(const MwaaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Mwaa queue name.
 *
 * @par From Mwaa FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Mwaa queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MwaaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MwaaRequest::clearParameter(const QString &name)
{
    Q_D(MwaaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MwaaRequest::clearParameters()
{
    Q_D(MwaaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MwaaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MwaaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MwaaRequest::parameters() const
{
    Q_D(const MwaaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MwaaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MwaaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MwaaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MwaaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Mwaa request using the given
 * \a endpoint.
 *
 * This Mwaa implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MwaaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MwaaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Mwaa::MwaaRequestPrivate
 * \brief The MwaaRequestPrivate class provides private implementation for MwaaRequest.
 * \internal
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a MwaaRequestPrivate object for Mwaa \a action,
 * with public implementation \a q.
 */
MwaaRequestPrivate::MwaaRequestPrivate(const MwaaRequest::Action action, MwaaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MwaaRequest class's copy constructor.
 */
MwaaRequestPrivate::MwaaRequestPrivate(const MwaaRequestPrivate &other,
                                     MwaaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MwaaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Mwaa service's Action
 * query parameters.
 */
QString MwaaRequestPrivate::toString(const MwaaRequest::Action &action)
{
    #define ActionToString(action) \
        case MwaaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCliToken);
        ActionToString(CreateEnvironment);
        ActionToString(CreateWebLoginToken);
        ActionToString(DeleteEnvironment);
        ActionToString(GetEnvironment);
        ActionToString(ListEnvironments);
        ActionToString(ListTagsForResource);
        ActionToString(PublishMetrics);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateEnvironment);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Mwaa
} // namespace QtAws
