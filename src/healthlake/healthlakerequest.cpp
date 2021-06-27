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

#include "healthlakerequest.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::HealthLakeRequest
 * \brief The HealthLakeRequest class provides an interface for HealthLake requests.
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * \enum HealthLakeRequest::Action
 *
 * This enum describes the actions that can be performed as HealthLake
 * requests.
 *
 * \value CreateFHIRDatastoreAction HealthLake CreateFHIRDatastore action.
 * \value DeleteFHIRDatastoreAction HealthLake DeleteFHIRDatastore action.
 * \value DescribeFHIRDatastoreAction HealthLake DescribeFHIRDatastore action.
 * \value DescribeFHIRExportJobAction HealthLake DescribeFHIRExportJob action.
 * \value DescribeFHIRImportJobAction HealthLake DescribeFHIRImportJob action.
 * \value ListFHIRDatastoresAction HealthLake ListFHIRDatastores action.
 * \value StartFHIRExportJobAction HealthLake StartFHIRExportJob action.
 * \value StartFHIRImportJobAction HealthLake StartFHIRImportJob action.
 */

/*!
 * Constructs a HealthLakeRequest object for HealthLake \a action.
 */
HealthLakeRequest::HealthLakeRequest(const Action action)
    : d_ptr(new HealthLakeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
HealthLakeRequest::HealthLakeRequest(const HealthLakeRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new HealthLakeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the HealthLakeRequest object to be equal to \a other.
 */
HealthLakeRequest& HealthLakeRequest::operator=(const HealthLakeRequest &other)
{
    Q_D(HealthLakeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa HealthLakeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthLakeRequestPrivate.
 */
HealthLakeRequest::HealthLakeRequest(HealthLakeRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the HealthLake action to be performed by this request.
 */
HealthLakeRequest::Action HealthLakeRequest::action() const
{
    Q_D(const HealthLakeRequest);
    return d->action;
}

/*!
 * Returns the name of the HealthLake action to be performed by this request.
 */
QString HealthLakeRequest::actionString() const
{
    return HealthLakeRequestPrivate::toString(action());
}

/*!
 * Returns the HealthLake API version implemented by this request.
 */
QString HealthLakeRequest::apiVersion() const
{
    Q_D(const HealthLakeRequest);
    return d->apiVersion;
}

/*!
 * Sets the HealthLake action to be performed by this request to \a action.
 */
void HealthLakeRequest::setAction(const Action action)
{
    Q_D(HealthLakeRequest);
    d->action = action;
}

/*!
 * Sets the HealthLake API version to include in this request to \a version.
 */
void HealthLakeRequest::setApiVersion(const QString &version)
{
    Q_D(HealthLakeRequest);
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
bool HealthLakeRequest::operator==(const HealthLakeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid HealthLake queue name.
 *
 * @par From HealthLake FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid HealthLake queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool HealthLakeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int HealthLakeRequest::clearParameter(const QString &name)
{
    Q_D(HealthLakeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void HealthLakeRequest::clearParameters()
{
    Q_D(HealthLakeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant HealthLakeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const HealthLakeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &HealthLakeRequest::parameters() const
{
    Q_D(const HealthLakeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void HealthLakeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(HealthLakeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void HealthLakeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(HealthLakeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the HealthLake request using the given
 * \a endpoint.
 *
 * This HealthLake implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest HealthLakeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const HealthLakeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::HealthLake::HealthLakeRequestPrivate
 * \brief The HealthLakeRequestPrivate class provides private implementation for HealthLakeRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a HealthLakeRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
HealthLakeRequestPrivate::HealthLakeRequestPrivate(const HealthLakeRequest::Action action, HealthLakeRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the HealthLakeRequest class's copy constructor.
 */
HealthLakeRequestPrivate::HealthLakeRequestPrivate(const HealthLakeRequestPrivate &other,
                                     HealthLakeRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts HealthLakeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the HealthLake service's Action
 * query parameters.
 */
QString HealthLakeRequestPrivate::toString(const HealthLakeRequest::Action &action)
{
    #define ActionToString(action) \
        case HealthLakeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace HealthLake
} // namespace QtAws
