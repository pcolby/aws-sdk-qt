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

#include "translaterequest.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateRequest
 * \brief The TranslateRequest class provides an interface for Translate requests.
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * \enum TranslateRequest::Action
 *
 * This enum describes the actions that can be performed as Translate
 * requests.
 *
 * \value CreateParallelDataAction Translate CreateParallelData action.
 * \value DeleteParallelDataAction Translate DeleteParallelData action.
 * \value DeleteTerminologyAction Translate DeleteTerminology action.
 * \value DescribeTextTranslationJobAction Translate DescribeTextTranslationJob action.
 * \value GetParallelDataAction Translate GetParallelData action.
 * \value GetTerminologyAction Translate GetTerminology action.
 * \value ImportTerminologyAction Translate ImportTerminology action.
 * \value ListParallelDataAction Translate ListParallelData action.
 * \value ListTerminologiesAction Translate ListTerminologies action.
 * \value ListTextTranslationJobsAction Translate ListTextTranslationJobs action.
 * \value StartTextTranslationJobAction Translate StartTextTranslationJob action.
 * \value StopTextTranslationJobAction Translate StopTextTranslationJob action.
 * \value TranslateTextAction Translate TranslateText action.
 * \value UpdateParallelDataAction Translate UpdateParallelData action.
 */

/*!
 * Constructs a TranslateRequest object for Translate \a action.
 */
TranslateRequest::TranslateRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TranslateRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TranslateRequest::TranslateRequest(const TranslateRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TranslateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TranslateRequest object to be equal to \a other.
 */
TranslateRequest& TranslateRequest::operator=(const TranslateRequest &other)
{
    Q_D(TranslateRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TranslateRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranslateRequestPrivate.
 */
TranslateRequest::TranslateRequest(TranslateRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Translate action to be performed by this request.
 */
TranslateRequest::Action TranslateRequest::action() const
{
    Q_D(const TranslateRequest);
    return d->action;
}

/*!
 * Returns the name of the Translate action to be performed by this request.
 */
QString TranslateRequest::actionString() const
{
    return TranslateRequestPrivate::toString(action());
}

/*!
 * Returns the Translate API version implemented by this request.
 */
QString TranslateRequest::apiVersion() const
{
    Q_D(const TranslateRequest);
    return d->apiVersion;
}

/*!
 * Sets the Translate action to be performed by this request to \a action.
 */
void TranslateRequest::setAction(const Action action)
{
    Q_D(TranslateRequest);
    d->action = action;
}

/*!
 * Sets the Translate API version to include in this request to \a version.
 */
void TranslateRequest::setApiVersion(const QString &version)
{
    Q_D(TranslateRequest);
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
bool TranslateRequest::operator==(const TranslateRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Translate queue name.
 *
 * @par From Translate FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Translate queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TranslateRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TranslateRequest::clearParameter(const QString &name)
{
    Q_D(TranslateRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TranslateRequest::clearParameters()
{
    Q_D(TranslateRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TranslateRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TranslateRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TranslateRequest::parameters() const
{
    Q_D(const TranslateRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TranslateRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TranslateRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TranslateRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TranslateRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Translate request using the given
 * \a endpoint.
 *
 * This Translate implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TranslateRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TranslateRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Translate::TranslateRequestPrivate
 * \brief The TranslateRequestPrivate class provides private implementation for TranslateRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
TranslateRequestPrivate::TranslateRequestPrivate(const TranslateRequest::Action action, TranslateRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TranslateRequest class's copy constructor.
 */
TranslateRequestPrivate::TranslateRequestPrivate(const TranslateRequestPrivate &other,
                                     TranslateRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TranslateRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Translate service's Action
 * query parameters.
 */
QString TranslateRequestPrivate::toString(const TranslateRequest::Action &action)
{
    #define ActionToString(action) \
        case TranslateRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Translate
} // namespace QtAws
