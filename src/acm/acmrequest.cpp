/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "acmrequest.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ACMRequest
 * \brief The ACMRequest class provides an interface for ACM requests.
 *
 * \inmodule QtAwsACM
 */

/*!
 * \enum ACMRequest::Action
 *
 * This enum describes the actions that can be performed as ACM
 * requests.
 *
 * \value AddTagsToCertificateAction ACM AddTagsToCertificate action.
 * \value DeleteCertificateAction ACM DeleteCertificate action.
 * \value DescribeCertificateAction ACM DescribeCertificate action.
 * \value ExportCertificateAction ACM ExportCertificate action.
 * \value GetCertificateAction ACM GetCertificate action.
 * \value ImportCertificateAction ACM ImportCertificate action.
 * \value ListCertificatesAction ACM ListCertificates action.
 * \value ListTagsForCertificateAction ACM ListTagsForCertificate action.
 * \value RemoveTagsFromCertificateAction ACM RemoveTagsFromCertificate action.
 * \value RequestCertificateAction ACM RequestCertificate action.
 * \value ResendValidationEmailAction ACM ResendValidationEmail action.
 * \value UpdateCertificateOptionsAction ACM UpdateCertificateOptions action.
 */

/*!
 * Constructs a[n] ACMRequest object for ACM \a action.
 */
ACMRequest::ACMRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ACMRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ACMRequest::ACMRequest(const ACMRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ACMRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ACMRequest object to be equal to \a other.
 */
ACMRequest& ACMRequest::operator=(const ACMRequest &other)
{
    Q_D(ACMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ACMRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ACMRequestPrivate.
 */
ACMRequest::ACMRequest(ACMRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ACM action to be performed by this request.
 */
ACMRequest::Action ACMRequest::action() const
{
    Q_D(const ACMRequest);
    return d->action;
}

/*!
 * Returns the name of the ACM action to be performed by this request.
 */
QString ACMRequest::actionString() const
{
    return ACMRequestPrivate::toString(action());
}

/*!
 * Returns the ACM API version implemented by this request.
 */
QString ACMRequest::apiVersion() const
{
    Q_D(const ACMRequest);
    return d->apiVersion;
}

/*!
 * Sets the ACM action to be performed by this request to \a action.
 */
void ACMRequest::setAction(const Action action)
{
    Q_D(ACMRequest);
    d->action = action;
}

/*!
 * Sets the ACM API version to include in this request to \a version.
 */
void ACMRequest::setApiVersion(const QString &version)
{
    Q_D(ACMRequest);
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
bool ACMRequest::operator==(const ACMRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ACM queue name.
 *
 * @par From ACM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ACM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ACMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ACMRequest::clearParameter(const QString &name)
{
    Q_D(ACMRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ACMRequest::clearParameters()
{
    Q_D(ACMRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ACMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ACMRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ACMRequest::parameters() const
{
    Q_D(const ACMRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ACMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ACMRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ACMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ACMRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ACM request using the given
 * \a endpoint.
 *
 * This ACM implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ACMRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ACMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ACM::ACMRequestPrivate
 * \brief The ACMRequestPrivate class provides private implementation for ACMRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ACMRequestPrivate object for ACM \a action with,
 * public implementation \a q.
 */
ACMRequestPrivate::ACMRequestPrivate(const ACMRequest::Action action, ACMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ACMRequest class's copy constructor.
 */
ACMRequestPrivate::ACMRequestPrivate(const ACMRequestPrivate &other,
                                     ACMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ACMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ACM service's Action
 * query parameters.
 */
QString ACMRequestPrivate::toString(const ACMRequest::Action &action)
{
    #define ActionToString(action) \
        case ACMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ACM
} // namespace QtAws
