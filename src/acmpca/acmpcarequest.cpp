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

#include "acmpcarequest.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::AcmPcaRequest
 * \brief The AcmPcaRequest class provides an interface for AcmPca requests.
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * \enum AcmPcaRequest::Action
 *
 * This enum describes the actions that can be performed as AcmPca
 * requests.
 *
 * \value CreateCertificateAuthorityAction AcmPca CreateCertificateAuthority action.
 * \value CreateCertificateAuthorityAuditReportAction AcmPca CreateCertificateAuthorityAuditReport action.
 * \value CreatePermissionAction AcmPca CreatePermission action.
 * \value DeleteCertificateAuthorityAction AcmPca DeleteCertificateAuthority action.
 * \value DeletePermissionAction AcmPca DeletePermission action.
 * \value DeletePolicyAction AcmPca DeletePolicy action.
 * \value DescribeCertificateAuthorityAction AcmPca DescribeCertificateAuthority action.
 * \value DescribeCertificateAuthorityAuditReportAction AcmPca DescribeCertificateAuthorityAuditReport action.
 * \value GetCertificateAction AcmPca GetCertificate action.
 * \value GetCertificateAuthorityCertificateAction AcmPca GetCertificateAuthorityCertificate action.
 * \value GetCertificateAuthorityCsrAction AcmPca GetCertificateAuthorityCsr action.
 * \value GetPolicyAction AcmPca GetPolicy action.
 * \value ImportCertificateAuthorityCertificateAction AcmPca ImportCertificateAuthorityCertificate action.
 * \value IssueCertificateAction AcmPca IssueCertificate action.
 * \value ListCertificateAuthoritiesAction AcmPca ListCertificateAuthorities action.
 * \value ListPermissionsAction AcmPca ListPermissions action.
 * \value ListTagsAction AcmPca ListTags action.
 * \value PutPolicyAction AcmPca PutPolicy action.
 * \value RestoreCertificateAuthorityAction AcmPca RestoreCertificateAuthority action.
 * \value RevokeCertificateAction AcmPca RevokeCertificate action.
 * \value TagCertificateAuthorityAction AcmPca TagCertificateAuthority action.
 * \value UntagCertificateAuthorityAction AcmPca UntagCertificateAuthority action.
 * \value UpdateCertificateAuthorityAction AcmPca UpdateCertificateAuthority action.
 */

/*!
 * Constructs a AcmPcaRequest object for AcmPca \a action.
 */
AcmPcaRequest::AcmPcaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AcmPcaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AcmPcaRequest::AcmPcaRequest(const AcmPcaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AcmPcaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AcmPcaRequest object to be equal to \a other.
 */
AcmPcaRequest& AcmPcaRequest::operator=(const AcmPcaRequest &other)
{
    Q_D(AcmPcaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AcmPcaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmPcaRequestPrivate.
 */
AcmPcaRequest::AcmPcaRequest(AcmPcaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AcmPca action to be performed by this request.
 */
AcmPcaRequest::Action AcmPcaRequest::action() const
{
    Q_D(const AcmPcaRequest);
    return d->action;
}

/*!
 * Returns the name of the AcmPca action to be performed by this request.
 */
QString AcmPcaRequest::actionString() const
{
    return AcmPcaRequestPrivate::toString(action());
}

/*!
 * Returns the AcmPca API version implemented by this request.
 */
QString AcmPcaRequest::apiVersion() const
{
    Q_D(const AcmPcaRequest);
    return d->apiVersion;
}

/*!
 * Sets the AcmPca action to be performed by this request to \a action.
 */
void AcmPcaRequest::setAction(const Action action)
{
    Q_D(AcmPcaRequest);
    d->action = action;
}

/*!
 * Sets the AcmPca API version to include in this request to \a version.
 */
void AcmPcaRequest::setApiVersion(const QString &version)
{
    Q_D(AcmPcaRequest);
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
bool AcmPcaRequest::operator==(const AcmPcaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AcmPca queue name.
 *
 * @par From AcmPca FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AcmPca queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AcmPcaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AcmPcaRequest::clearParameter(const QString &name)
{
    Q_D(AcmPcaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AcmPcaRequest::clearParameters()
{
    Q_D(AcmPcaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AcmPcaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AcmPcaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AcmPcaRequest::parameters() const
{
    Q_D(const AcmPcaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AcmPcaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AcmPcaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AcmPcaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AcmPcaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AcmPca request using the given
 * \a endpoint.
 *
 * This AcmPca implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AcmPcaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AcmPcaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AcmPca::AcmPcaRequestPrivate
 * \brief The AcmPcaRequestPrivate class provides private implementation for AcmPcaRequest.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a AcmPcaRequestPrivate object for AcmPca \a action,
 * with public implementation \a q.
 */
AcmPcaRequestPrivate::AcmPcaRequestPrivate(const AcmPcaRequest::Action action, AcmPcaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-08-22"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AcmPcaRequest class's copy constructor.
 */
AcmPcaRequestPrivate::AcmPcaRequestPrivate(const AcmPcaRequestPrivate &other,
                                     AcmPcaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AcmPcaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AcmPca service's Action
 * query parameters.
 */
QString AcmPcaRequestPrivate::toString(const AcmPcaRequest::Action &action)
{
    #define ActionToString(action) \
        case AcmPcaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCertificateAuthority);
        ActionToString(CreateCertificateAuthorityAuditReport);
        ActionToString(CreatePermission);
        ActionToString(DeleteCertificateAuthority);
        ActionToString(DeletePermission);
        ActionToString(DeletePolicy);
        ActionToString(DescribeCertificateAuthority);
        ActionToString(DescribeCertificateAuthorityAuditReport);
        ActionToString(GetCertificate);
        ActionToString(GetCertificateAuthorityCertificate);
        ActionToString(GetCertificateAuthorityCsr);
        ActionToString(GetPolicy);
        ActionToString(ImportCertificateAuthorityCertificate);
        ActionToString(IssueCertificate);
        ActionToString(ListCertificateAuthorities);
        ActionToString(ListPermissions);
        ActionToString(ListTags);
        ActionToString(PutPolicy);
        ActionToString(RestoreCertificateAuthority);
        ActionToString(RevokeCertificate);
        ActionToString(TagCertificateAuthority);
        ActionToString(UntagCertificateAuthority);
        ActionToString(UpdateCertificateAuthority);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AcmPca
} // namespace QtAws
