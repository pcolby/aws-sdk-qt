/*
    Copyright 2013-2019 Paul Colby

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

#include "importexportrequest.h"
#include "importexportrequest_p.h"

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::ImportExportRequest
 * \brief The ImportExportRequest class provides an interface for ImportExport requests.
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * \enum ImportExportRequest::Action
 *
 * This enum describes the actions that can be performed as ImportExport
 * requests.
 *
 * \value CancelJobAction ImportExport CancelJob action.
 * \value CreateJobAction ImportExport CreateJob action.
 * \value GetShippingLabelAction ImportExport GetShippingLabel action.
 * \value GetStatusAction ImportExport GetStatus action.
 * \value ListJobsAction ImportExport ListJobs action.
 * \value UpdateJobAction ImportExport UpdateJob action.
 */

/*!
 * Constructs a ImportExportRequest object for ImportExport \a action.
 */
ImportExportRequest::ImportExportRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ImportExportRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ImportExportRequest::ImportExportRequest(const ImportExportRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ImportExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ImportExportRequest object to be equal to \a other.
 */
ImportExportRequest& ImportExportRequest::operator=(const ImportExportRequest &other)
{
    Q_D(ImportExportRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ImportExportRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ImportExportRequestPrivate.
 */
ImportExportRequest::ImportExportRequest(ImportExportRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ImportExport action to be performed by this request.
 */
ImportExportRequest::Action ImportExportRequest::action() const
{
    Q_D(const ImportExportRequest);
    return d->action;
}

/*!
 * Returns the name of the ImportExport action to be performed by this request.
 */
QString ImportExportRequest::actionString() const
{
    return ImportExportRequestPrivate::toString(action());
}

/*!
 * Returns the ImportExport API version implemented by this request.
 */
QString ImportExportRequest::apiVersion() const
{
    Q_D(const ImportExportRequest);
    return d->apiVersion;
}

/*!
 * Sets the ImportExport action to be performed by this request to \a action.
 */
void ImportExportRequest::setAction(const Action action)
{
    Q_D(ImportExportRequest);
    d->action = action;
}

/*!
 * Sets the ImportExport API version to include in this request to \a version.
 */
void ImportExportRequest::setApiVersion(const QString &version)
{
    Q_D(ImportExportRequest);
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
bool ImportExportRequest::operator==(const ImportExportRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ImportExport queue name.
 *
 * @par From ImportExport FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ImportExport queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ImportExportRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ImportExportRequest::clearParameter(const QString &name)
{
    Q_D(ImportExportRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ImportExportRequest::clearParameters()
{
    Q_D(ImportExportRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ImportExportRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ImportExportRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ImportExportRequest::parameters() const
{
    Q_D(const ImportExportRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ImportExportRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ImportExportRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ImportExportRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ImportExportRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ImportExport request using the given
 * \a endpoint.
 *
 * This ImportExport implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ImportExportRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ImportExportRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ImportExport::ImportExportRequestPrivate
 * \brief The ImportExportRequestPrivate class provides private implementation for ImportExportRequest.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a ImportExportRequestPrivate object for ImportExport \a action,
 * with public implementation \a q.
 */
ImportExportRequestPrivate::ImportExportRequestPrivate(const ImportExportRequest::Action action, ImportExportRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ImportExportRequest class's copy constructor.
 */
ImportExportRequestPrivate::ImportExportRequestPrivate(const ImportExportRequestPrivate &other,
                                     ImportExportRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ImportExportRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ImportExport service's Action
 * query parameters.
 */
QString ImportExportRequestPrivate::toString(const ImportExportRequest::Action &action)
{
    #define ActionToString(action) \
        case ImportExportRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ImportExport
} // namespace QtAws
