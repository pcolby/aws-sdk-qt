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

#include "s3controlrequest.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::S3ControlRequest
 * \brief The S3ControlRequest class provides an interface for S3Control requests.
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * \enum S3ControlRequest::Action
 *
 * This enum describes the actions that can be performed as S3Control
 * requests.
 *
 * \value CreateJobAction S3Control CreateJob action.
 * \value DeletePublicAccessBlockAction S3Control DeletePublicAccessBlock action.
 * \value DescribeJobAction S3Control DescribeJob action.
 * \value GetPublicAccessBlockAction S3Control GetPublicAccessBlock action.
 * \value ListJobsAction S3Control ListJobs action.
 * \value PutPublicAccessBlockAction S3Control PutPublicAccessBlock action.
 * \value UpdateJobPriorityAction S3Control UpdateJobPriority action.
 * \value UpdateJobStatusAction S3Control UpdateJobStatus action.
 */

/*!
 * Constructs a S3ControlRequest object for S3Control \a action.
 */
S3ControlRequest::S3ControlRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new S3ControlRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
S3ControlRequest::S3ControlRequest(const S3ControlRequest &other)
    : QtAws::Core::AwsAbstractRequest(new S3ControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the S3ControlRequest object to be equal to \a other.
 */
S3ControlRequest& S3ControlRequest::operator=(const S3ControlRequest &other)
{
    Q_D(S3ControlRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa S3ControlRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3ControlRequestPrivate.
 */
S3ControlRequest::S3ControlRequest(S3ControlRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the S3Control action to be performed by this request.
 */
S3ControlRequest::Action S3ControlRequest::action() const
{
    Q_D(const S3ControlRequest);
    return d->action;
}

/*!
 * Returns the name of the S3Control action to be performed by this request.
 */
QString S3ControlRequest::actionString() const
{
    return S3ControlRequestPrivate::toString(action());
}

/*!
 * Returns the S3Control API version implemented by this request.
 */
QString S3ControlRequest::apiVersion() const
{
    Q_D(const S3ControlRequest);
    return d->apiVersion;
}

/*!
 * Sets the S3Control action to be performed by this request to \a action.
 */
void S3ControlRequest::setAction(const Action action)
{
    Q_D(S3ControlRequest);
    d->action = action;
}

/*!
 * Sets the S3Control API version to include in this request to \a version.
 */
void S3ControlRequest::setApiVersion(const QString &version)
{
    Q_D(S3ControlRequest);
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
bool S3ControlRequest::operator==(const S3ControlRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid S3Control queue name.
 *
 * @par From S3Control FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid S3Control queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool S3ControlRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int S3ControlRequest::clearParameter(const QString &name)
{
    Q_D(S3ControlRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void S3ControlRequest::clearParameters()
{
    Q_D(S3ControlRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant S3ControlRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const S3ControlRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &S3ControlRequest::parameters() const
{
    Q_D(const S3ControlRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void S3ControlRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(S3ControlRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void S3ControlRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(S3ControlRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the S3Control request using the given
 * \a endpoint.
 *
 * This S3Control implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest S3ControlRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const S3ControlRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::S3Control::S3ControlRequestPrivate
 * \brief The S3ControlRequestPrivate class provides private implementation for S3ControlRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
S3ControlRequestPrivate::S3ControlRequestPrivate(const S3ControlRequest::Action action, S3ControlRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the S3ControlRequest class's copy constructor.
 */
S3ControlRequestPrivate::S3ControlRequestPrivate(const S3ControlRequestPrivate &other,
                                     S3ControlRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts S3ControlRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the S3Control service's Action
 * query parameters.
 */
QString S3ControlRequestPrivate::toString(const S3ControlRequest::Action &action)
{
    #define ActionToString(action) \
        case S3ControlRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace S3Control
} // namespace QtAws
