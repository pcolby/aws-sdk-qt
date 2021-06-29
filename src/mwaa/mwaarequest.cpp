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

#include "mwaarequest.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::MwaaRequest
 * \brief The MwaaRequest class provides an interface for MWAA requests.
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * \enum MwaaRequest::Action
 *
 * This enum describes the actions that can be performed as MWAA
 * requests.
 *
 * \value CreateCliTokenAction MWAA CreateCliToken action.
 * \value CreateEnvironmentAction MWAA CreateEnvironment action.
 * \value CreateWebLoginTokenAction MWAA CreateWebLoginToken action.
 * \value DeleteEnvironmentAction MWAA DeleteEnvironment action.
 * \value GetEnvironmentAction MWAA GetEnvironment action.
 * \value ListEnvironmentsAction MWAA ListEnvironments action.
 * \value ListTagsForResourceAction MWAA ListTagsForResource action.
 * \value PublishMetricsAction MWAA PublishMetrics action.
 * \value TagResourceAction MWAA TagResource action.
 * \value UntagResourceAction MWAA UntagResource action.
 * \value UpdateEnvironmentAction MWAA UpdateEnvironment action.
 */

/*!
 * Constructs a MwaaRequest object for MWAA \a action.
 */
MwaaRequest::MwaaRequest(const Action action)
    : d_ptr(new MwaaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MwaaRequest::MwaaRequest(const MwaaRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new MwaaRequestPrivate(*other.d_func(), this))
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
MwaaRequest::MwaaRequest(MwaaRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the MWAA action to be performed by this request.
 */
MwaaRequest::Action MwaaRequest::action() const
{
    Q_D(const MwaaRequest);
    return d->action;
}

/*!
 * Returns the name of the MWAA action to be performed by this request.
 */
QString MwaaRequest::actionString() const
{
    return MwaaRequestPrivate::toString(action());
}

/*!
 * Returns the MWAA API version implemented by this request.
 */
QString MwaaRequest::apiVersion() const
{
    Q_D(const MwaaRequest);
    return d->apiVersion;
}

/*!
 * Sets the MWAA action to be performed by this request to \a action.
 */
void MwaaRequest::setAction(const Action action)
{
    Q_D(MwaaRequest);
    d->action = action;
}

/*!
 * Sets the MWAA API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid MWAA queue name.
 *
 * @par From MWAA FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MWAA queue name, \c false otherwise.
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
 * Returns a network request for the MWAA request using the given
 * \a endpoint.
 *
 * This MWAA implementation builds request URLs by combining the
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
 * \class QtAws::MWAA::MwaaRequestPrivate
 * \brief The MwaaRequestPrivate class provides private implementation for MwaaRequest.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a MwaaRequestPrivate object for MWAA \a action,
 * with public implementation \a q.
 */
MwaaRequestPrivate::MwaaRequestPrivate(const MwaaRequest::Action action, MwaaRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
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
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MwaaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MWAA service's Action
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

} // namespace MWAA
} // namespace QtAws
