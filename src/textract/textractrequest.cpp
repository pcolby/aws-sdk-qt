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

#include "textractrequest.h"
#include "textractrequest_p.h"

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::TextractRequest
 * \brief The TextractRequest class provides an interface for Textract requests.
 *
 * \inmodule QtAwsTextract
 */

/*!
 * \enum TextractRequest::Action
 *
 * This enum describes the actions that can be performed as Textract
 * requests.
 *
 * \value AnalyzeDocumentAction Textract AnalyzeDocument action.
 * \value AnalyzeExpenseAction Textract AnalyzeExpense action.
 * \value AnalyzeIDAction Textract AnalyzeID action.
 * \value DetectDocumentTextAction Textract DetectDocumentText action.
 * \value GetDocumentAnalysisAction Textract GetDocumentAnalysis action.
 * \value GetDocumentTextDetectionAction Textract GetDocumentTextDetection action.
 * \value GetExpenseAnalysisAction Textract GetExpenseAnalysis action.
 * \value StartDocumentAnalysisAction Textract StartDocumentAnalysis action.
 * \value StartDocumentTextDetectionAction Textract StartDocumentTextDetection action.
 * \value StartExpenseAnalysisAction Textract StartExpenseAnalysis action.
 */

/*!
 * Constructs a TextractRequest object for Textract \a action.
 */
TextractRequest::TextractRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TextractRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TextractRequest::TextractRequest(const TextractRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TextractRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TextractRequest object to be equal to \a other.
 */
TextractRequest& TextractRequest::operator=(const TextractRequest &other)
{
    Q_D(TextractRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TextractRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TextractRequestPrivate.
 */
TextractRequest::TextractRequest(TextractRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Textract action to be performed by this request.
 */
TextractRequest::Action TextractRequest::action() const
{
    Q_D(const TextractRequest);
    return d->action;
}

/*!
 * Returns the name of the Textract action to be performed by this request.
 */
QString TextractRequest::actionString() const
{
    return TextractRequestPrivate::toString(action());
}

/*!
 * Returns the Textract API version implemented by this request.
 */
QString TextractRequest::apiVersion() const
{
    Q_D(const TextractRequest);
    return d->apiVersion;
}

/*!
 * Sets the Textract action to be performed by this request to \a action.
 */
void TextractRequest::setAction(const Action action)
{
    Q_D(TextractRequest);
    d->action = action;
}

/*!
 * Sets the Textract API version to include in this request to \a version.
 */
void TextractRequest::setApiVersion(const QString &version)
{
    Q_D(TextractRequest);
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
bool TextractRequest::operator==(const TextractRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Textract queue name.
 *
 * @par From Textract FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Textract queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TextractRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TextractRequest::clearParameter(const QString &name)
{
    Q_D(TextractRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TextractRequest::clearParameters()
{
    Q_D(TextractRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TextractRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TextractRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TextractRequest::parameters() const
{
    Q_D(const TextractRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TextractRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TextractRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TextractRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TextractRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Textract request using the given
 * \a endpoint.
 *
 * This Textract implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TextractRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TextractRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Textract::TextractRequestPrivate
 * \brief The TextractRequestPrivate class provides private implementation for TextractRequest.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a TextractRequestPrivate object for Textract \a action,
 * with public implementation \a q.
 */
TextractRequestPrivate::TextractRequestPrivate(const TextractRequest::Action action, TextractRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-06-27"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TextractRequest class's copy constructor.
 */
TextractRequestPrivate::TextractRequestPrivate(const TextractRequestPrivate &other,
                                     TextractRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TextractRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Textract service's Action
 * query parameters.
 */
QString TextractRequestPrivate::toString(const TextractRequest::Action &action)
{
    #define ActionToString(action) \
        case TextractRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AnalyzeDocument);
        ActionToString(AnalyzeExpense);
        ActionToString(AnalyzeID);
        ActionToString(DetectDocumentText);
        ActionToString(GetDocumentAnalysis);
        ActionToString(GetDocumentTextDetection);
        ActionToString(GetExpenseAnalysis);
        ActionToString(StartDocumentAnalysis);
        ActionToString(StartDocumentTextDetection);
        ActionToString(StartExpenseAnalysis);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Textract
} // namespace QtAws
