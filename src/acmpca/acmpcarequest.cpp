/*
    Copyright 2013-2018 Paul Colby

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

#include "acmpcarequest.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::AcmpcaRequest
 * \brief The AcmpcaRequest class provides an interface for ACMPCA requests.
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * \enum AcmpcaRequest::Action
 *
 * This enum describes the actions that can be performed as ACMPCA
 * requests.
 *
 * \value CreateCertificateAuthorityAction ACMPCA CreateCertificateAuthority action.
 * \value CreateCertificateAuthorityAuditReportAction ACMPCA CreateCertificateAuthorityAuditReport action.
 * \value DeleteCertificateAuthorityAction ACMPCA DeleteCertificateAuthority action.
 * \value DescribeCertificateAuthorityAction ACMPCA DescribeCertificateAuthority action.
 * \value DescribeCertificateAuthorityAuditReportAction ACMPCA DescribeCertificateAuthorityAuditReport action.
 * \value GetCertificateAction ACMPCA GetCertificate action.
 * \value GetCertificateAuthorityCertificateAction ACMPCA GetCertificateAuthorityCertificate action.
 * \value GetCertificateAuthorityCsrAction ACMPCA GetCertificateAuthorityCsr action.
 * \value ImportCertificateAuthorityCertificateAction ACMPCA ImportCertificateAuthorityCertificate action.
 * \value IssueCertificateAction ACMPCA IssueCertificate action.
 * \value ListCertificateAuthoritiesAction ACMPCA ListCertificateAuthorities action.
 * \value ListTagsAction ACMPCA ListTags action.
 * \value RestoreCertificateAuthorityAction ACMPCA RestoreCertificateAuthority action.
 * \value RevokeCertificateAction ACMPCA RevokeCertificate action.
 * \value TagCertificateAuthorityAction ACMPCA TagCertificateAuthority action.
 * \value UntagCertificateAuthorityAction ACMPCA UntagCertificateAuthority action.
 * \value UpdateCertificateAuthorityAction ACMPCA UpdateCertificateAuthority action.
 */

/*!
 * Constructs a AcmpcaRequest object for ACMPCA \a action.
 */
AcmpcaRequest::AcmpcaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AcmpcaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AcmpcaRequest::AcmpcaRequest(const AcmpcaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AcmpcaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AcmpcaRequest object to be equal to \a other.
 */
AcmpcaRequest& AcmpcaRequest::operator=(const AcmpcaRequest &other)
{
    Q_D(AcmpcaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AcmpcaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmpcaRequestPrivate.
 */
AcmpcaRequest::AcmpcaRequest(AcmpcaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ACMPCA action to be performed by this request.
 */
AcmpcaRequest::Action AcmpcaRequest::action() const
{
    Q_D(const AcmpcaRequest);
    return d->action;
}

/*!
 * Returns the name of the ACMPCA action to be performed by this request.
 */
QString AcmpcaRequest::actionString() const
{
    return AcmpcaRequestPrivate::toString(action());
}

/*!
 * Returns the ACMPCA API version implemented by this request.
 */
QString AcmpcaRequest::apiVersion() const
{
    Q_D(const AcmpcaRequest);
    return d->apiVersion;
}

/*!
 * Sets the ACMPCA action to be performed by this request to \a action.
 */
void AcmpcaRequest::setAction(const Action action)
{
    Q_D(AcmpcaRequest);
    d->action = action;
}

/*!
 * Sets the ACMPCA API version to include in this request to \a version.
 */
void AcmpcaRequest::setApiVersion(const QString &version)
{
    Q_D(AcmpcaRequest);
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
bool AcmpcaRequest::operator==(const AcmpcaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ACMPCA queue name.
 *
 * @par From ACMPCA FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ACMPCA queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AcmpcaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AcmpcaRequest::clearParameter(const QString &name)
{
    Q_D(AcmpcaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AcmpcaRequest::clearParameters()
{
    Q_D(AcmpcaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AcmpcaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AcmpcaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AcmpcaRequest::parameters() const
{
    Q_D(const AcmpcaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AcmpcaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AcmpcaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AcmpcaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AcmpcaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ACMPCA request using the given
 * \a endpoint.
 *
 * This ACMPCA implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AcmpcaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AcmpcaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ACMPCA::AcmpcaRequestPrivate
 * \brief The AcmpcaRequestPrivate class provides private implementation for AcmpcaRequest.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a AcmpcaRequestPrivate object for ACMPCA \a action,
 * with public implementation \a q.
 */
AcmpcaRequestPrivate::AcmpcaRequestPrivate(const AcmpcaRequest::Action action, AcmpcaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AcmpcaRequest class's copy constructor.
 */
AcmpcaRequestPrivate::AcmpcaRequestPrivate(const AcmpcaRequestPrivate &other,
                                     AcmpcaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AcmpcaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ACMPCA service's Action
 * query parameters.
 */
QString AcmpcaRequestPrivate::toString(const AcmpcaRequest::Action &action)
{
    #define ActionToString(action) \
        case AcmpcaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ACMPCA
} // namespace QtAws
