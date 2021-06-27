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

#include "ebsrequest.h"
#include "ebsrequest_p.h"

namespace QtAws {
namespace EBS {

/*!
 * \class QtAws::EBS::EbsRequest
 * \brief The EbsRequest class provides an interface for EBS requests.
 *
 * \inmodule QtAwsEBS
 */

/*!
 * \enum EbsRequest::Action
 *
 * This enum describes the actions that can be performed as EBS
 * requests.
 *
 * \value CompleteSnapshotAction EBS CompleteSnapshot action.
 * \value GetSnapshotBlockAction EBS GetSnapshotBlock action.
 * \value ListChangedBlocksAction EBS ListChangedBlocks action.
 * \value ListSnapshotBlocksAction EBS ListSnapshotBlocks action.
 * \value PutSnapshotBlockAction EBS PutSnapshotBlock action.
 * \value StartSnapshotAction EBS StartSnapshot action.
 */

/*!
 * Constructs a EbsRequest object for EBS \a action.
 */
EbsRequest::EbsRequest(const Action action)
    : d_ptr(new EbsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EbsRequest::EbsRequest(const EbsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new EbsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EbsRequest object to be equal to \a other.
 */
EbsRequest& EbsRequest::operator=(const EbsRequest &other)
{
    Q_D(EbsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EbsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EbsRequestPrivate.
 */
EbsRequest::EbsRequest(EbsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the EBS action to be performed by this request.
 */
EbsRequest::Action EbsRequest::action() const
{
    Q_D(const EbsRequest);
    return d->action;
}

/*!
 * Returns the name of the EBS action to be performed by this request.
 */
QString EbsRequest::actionString() const
{
    return EbsRequestPrivate::toString(action());
}

/*!
 * Returns the EBS API version implemented by this request.
 */
QString EbsRequest::apiVersion() const
{
    Q_D(const EbsRequest);
    return d->apiVersion;
}

/*!
 * Sets the EBS action to be performed by this request to \a action.
 */
void EbsRequest::setAction(const Action action)
{
    Q_D(EbsRequest);
    d->action = action;
}

/*!
 * Sets the EBS API version to include in this request to \a version.
 */
void EbsRequest::setApiVersion(const QString &version)
{
    Q_D(EbsRequest);
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
bool EbsRequest::operator==(const EbsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EBS queue name.
 *
 * @par From EBS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EBS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EbsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EbsRequest::clearParameter(const QString &name)
{
    Q_D(EbsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EbsRequest::clearParameters()
{
    Q_D(EbsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EbsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EbsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EbsRequest::parameters() const
{
    Q_D(const EbsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EbsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EbsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EbsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EbsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EBS request using the given
 * \a endpoint.
 *
 * This EBS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EbsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EbsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EBS::EbsRequestPrivate
 * \brief The EbsRequestPrivate class provides private implementation for EbsRequest.
 * \internal
 *
 * \inmodule QtAwsEBS
 */

/*!
 * Constructs a EbsRequestPrivate object for EBS \a action,
 * with public implementation \a q.
 */
EbsRequestPrivate::EbsRequestPrivate(const EbsRequest::Action action, EbsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EbsRequest class's copy constructor.
 */
EbsRequestPrivate::EbsRequestPrivate(const EbsRequestPrivate &other,
                                     EbsRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EbsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EBS service's Action
 * query parameters.
 */
QString EbsRequestPrivate::toString(const EbsRequest::Action &action)
{
    #define ActionToString(action) \
        case EbsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EBS
} // namespace QtAws
