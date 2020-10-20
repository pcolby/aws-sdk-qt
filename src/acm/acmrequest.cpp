/*
    Copyright 2013-2020 Paul Colby

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

#include "acmrequest.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::AcmRequest
 * \brief The AcmRequest class provides an interface for ACM requests.
 *
 * \inmodule QtAwsACM
 */

/*!
 * \enum AcmRequest::Action
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
 * \value RenewCertificateAction ACM RenewCertificate action.
 * \value RequestCertificateAction ACM RequestCertificate action.
 * \value ResendValidationEmailAction ACM ResendValidationEmail action.
 * \value UpdateCertificateOptionsAction ACM UpdateCertificateOptions action.
 */

/*!
 * Constructs a AcmRequest object for ACM \a action.
 */
AcmRequest::AcmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AcmRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AcmRequest::AcmRequest(const AcmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AcmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AcmRequest object to be equal to \a other.
 */
AcmRequest& AcmRequest::operator=(const AcmRequest &other)
{
    Q_D(AcmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AcmRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmRequestPrivate.
 */
AcmRequest::AcmRequest(AcmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ACM action to be performed by this request.
 */
AcmRequest::Action AcmRequest::action() const
{
    Q_D(const AcmRequest);
    return d->action;
}

/*!
 * Returns the name of the ACM action to be performed by this request.
 */
QString AcmRequest::actionString() const
{
    return AcmRequestPrivate::toString(action());
}

/*!
 * Returns the ACM API version implemented by this request.
 */
QString AcmRequest::apiVersion() const
{
    Q_D(const AcmRequest);
    return d->apiVersion;
}

/*!
 * Sets the ACM action to be performed by this request to \a action.
 */
void AcmRequest::setAction(const Action action)
{
    Q_D(AcmRequest);
    d->action = action;
}

/*!
 * Sets the ACM API version to include in this request to \a version.
 */
void AcmRequest::setApiVersion(const QString &version)
{
    Q_D(AcmRequest);
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
bool AcmRequest::operator==(const AcmRequest &other) const
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
/*bool AcmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AcmRequest::clearParameter(const QString &name)
{
    Q_D(AcmRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AcmRequest::clearParameters()
{
    Q_D(AcmRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AcmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AcmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AcmRequest::parameters() const
{
    Q_D(const AcmRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AcmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AcmRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AcmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AcmRequest);
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
QNetworkRequest AcmRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AcmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ACM::AcmRequestPrivate
 * \brief The AcmRequestPrivate class provides private implementation for AcmRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a AcmRequestPrivate object for ACM \a action,
 * with public implementation \a q.
 */
AcmRequestPrivate::AcmRequestPrivate(const AcmRequest::Action action, AcmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AcmRequest class's copy constructor.
 */
AcmRequestPrivate::AcmRequestPrivate(const AcmRequestPrivate &other,
                                     AcmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AcmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ACM service's Action
 * query parameters.
 */
QString AcmRequestPrivate::toString(const AcmRequest::Action &action)
{
    #define ActionToString(action) \
        case AcmRequest::action##Action: return QStringLiteral(#action)
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
