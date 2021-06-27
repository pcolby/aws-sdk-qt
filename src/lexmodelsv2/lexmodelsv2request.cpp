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

#include "lexmodelsv2request.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::LexModelsV2Request
 * \brief The LexModelsV2Request class provides an interface for LexModelsV2 requests.
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * \enum LexModelsV2Request::Action
 *
 * This enum describes the actions that can be performed as LexModelsV2
 * requests.
 *
 * \value BuildBotLocaleAction LexModelsV2 BuildBotLocale action.
 * \value CreateBotAction LexModelsV2 CreateBot action.
 * \value CreateBotAliasAction LexModelsV2 CreateBotAlias action.
 * \value CreateBotLocaleAction LexModelsV2 CreateBotLocale action.
 * \value CreateBotVersionAction LexModelsV2 CreateBotVersion action.
 * \value CreateExportAction LexModelsV2 CreateExport action.
 * \value CreateIntentAction LexModelsV2 CreateIntent action.
 * \value CreateResourcePolicyAction LexModelsV2 CreateResourcePolicy action.
 * \value CreateResourcePolicyStatementAction LexModelsV2 CreateResourcePolicyStatement action.
 * \value CreateSlotAction LexModelsV2 CreateSlot action.
 * \value CreateSlotTypeAction LexModelsV2 CreateSlotType action.
 * \value CreateUploadUrlAction LexModelsV2 CreateUploadUrl action.
 * \value DeleteBotAction LexModelsV2 DeleteBot action.
 * \value DeleteBotAliasAction LexModelsV2 DeleteBotAlias action.
 * \value DeleteBotLocaleAction LexModelsV2 DeleteBotLocale action.
 * \value DeleteBotVersionAction LexModelsV2 DeleteBotVersion action.
 * \value DeleteExportAction LexModelsV2 DeleteExport action.
 * \value DeleteImportAction LexModelsV2 DeleteImport action.
 * \value DeleteIntentAction LexModelsV2 DeleteIntent action.
 * \value DeleteResourcePolicyAction LexModelsV2 DeleteResourcePolicy action.
 * \value DeleteResourcePolicyStatementAction LexModelsV2 DeleteResourcePolicyStatement action.
 * \value DeleteSlotAction LexModelsV2 DeleteSlot action.
 * \value DeleteSlotTypeAction LexModelsV2 DeleteSlotType action.
 * \value DescribeBotAction LexModelsV2 DescribeBot action.
 * \value DescribeBotAliasAction LexModelsV2 DescribeBotAlias action.
 * \value DescribeBotLocaleAction LexModelsV2 DescribeBotLocale action.
 * \value DescribeBotVersionAction LexModelsV2 DescribeBotVersion action.
 * \value DescribeExportAction LexModelsV2 DescribeExport action.
 * \value DescribeImportAction LexModelsV2 DescribeImport action.
 * \value DescribeIntentAction LexModelsV2 DescribeIntent action.
 * \value DescribeResourcePolicyAction LexModelsV2 DescribeResourcePolicy action.
 * \value DescribeSlotAction LexModelsV2 DescribeSlot action.
 * \value DescribeSlotTypeAction LexModelsV2 DescribeSlotType action.
 * \value ListBotAliasesAction LexModelsV2 ListBotAliases action.
 * \value ListBotLocalesAction LexModelsV2 ListBotLocales action.
 * \value ListBotVersionsAction LexModelsV2 ListBotVersions action.
 * \value ListBotsAction LexModelsV2 ListBots action.
 * \value ListBuiltInIntentsAction LexModelsV2 ListBuiltInIntents action.
 * \value ListBuiltInSlotTypesAction LexModelsV2 ListBuiltInSlotTypes action.
 * \value ListExportsAction LexModelsV2 ListExports action.
 * \value ListImportsAction LexModelsV2 ListImports action.
 * \value ListIntentsAction LexModelsV2 ListIntents action.
 * \value ListSlotTypesAction LexModelsV2 ListSlotTypes action.
 * \value ListSlotsAction LexModelsV2 ListSlots action.
 * \value ListTagsForResourceAction LexModelsV2 ListTagsForResource action.
 * \value StartImportAction LexModelsV2 StartImport action.
 * \value TagResourceAction LexModelsV2 TagResource action.
 * \value UntagResourceAction LexModelsV2 UntagResource action.
 * \value UpdateBotAction LexModelsV2 UpdateBot action.
 * \value UpdateBotAliasAction LexModelsV2 UpdateBotAlias action.
 * \value UpdateBotLocaleAction LexModelsV2 UpdateBotLocale action.
 * \value UpdateExportAction LexModelsV2 UpdateExport action.
 * \value UpdateIntentAction LexModelsV2 UpdateIntent action.
 * \value UpdateResourcePolicyAction LexModelsV2 UpdateResourcePolicy action.
 * \value UpdateSlotAction LexModelsV2 UpdateSlot action.
 * \value UpdateSlotTypeAction LexModelsV2 UpdateSlotType action.
 */

/*!
 * Constructs a LexModelsV2Request object for LexModelsV2 \a action.
 */
LexModelsV2Request::LexModelsV2Request(const Action action)
    : d_ptr(new LexModelsV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LexModelsV2Request::LexModelsV2Request(const LexModelsV2Request &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new LexModelsV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LexModelsV2Request object to be equal to \a other.
 */
LexModelsV2Request& LexModelsV2Request::operator=(const LexModelsV2Request &other)
{
    Q_D(LexModelsV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LexModelsV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexModelsV2RequestPrivate.
 */
LexModelsV2Request::LexModelsV2Request(LexModelsV2RequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the LexModelsV2 action to be performed by this request.
 */
LexModelsV2Request::Action LexModelsV2Request::action() const
{
    Q_D(const LexModelsV2Request);
    return d->action;
}

/*!
 * Returns the name of the LexModelsV2 action to be performed by this request.
 */
QString LexModelsV2Request::actionString() const
{
    return LexModelsV2RequestPrivate::toString(action());
}

/*!
 * Returns the LexModelsV2 API version implemented by this request.
 */
QString LexModelsV2Request::apiVersion() const
{
    Q_D(const LexModelsV2Request);
    return d->apiVersion;
}

/*!
 * Sets the LexModelsV2 action to be performed by this request to \a action.
 */
void LexModelsV2Request::setAction(const Action action)
{
    Q_D(LexModelsV2Request);
    d->action = action;
}

/*!
 * Sets the LexModelsV2 API version to include in this request to \a version.
 */
void LexModelsV2Request::setApiVersion(const QString &version)
{
    Q_D(LexModelsV2Request);
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
bool LexModelsV2Request::operator==(const LexModelsV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LexModelsV2 queue name.
 *
 * @par From LexModelsV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LexModelsV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LexModelsV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LexModelsV2Request::clearParameter(const QString &name)
{
    Q_D(LexModelsV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LexModelsV2Request::clearParameters()
{
    Q_D(LexModelsV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LexModelsV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LexModelsV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LexModelsV2Request::parameters() const
{
    Q_D(const LexModelsV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LexModelsV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LexModelsV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LexModelsV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(LexModelsV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LexModelsV2 request using the given
 * \a endpoint.
 *
 * This LexModelsV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LexModelsV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LexModelsV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LexModelsV2::LexModelsV2RequestPrivate
 * \brief The LexModelsV2RequestPrivate class provides private implementation for LexModelsV2Request.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a LexModelsV2RequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
LexModelsV2RequestPrivate::LexModelsV2RequestPrivate(const LexModelsV2Request::Action action, LexModelsV2Request * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LexModelsV2Request class's copy constructor.
 */
LexModelsV2RequestPrivate::LexModelsV2RequestPrivate(const LexModelsV2RequestPrivate &other,
                                     LexModelsV2Request * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LexModelsV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the LexModelsV2 service's Action
 * query parameters.
 */
QString LexModelsV2RequestPrivate::toString(const LexModelsV2Request::Action &action)
{
    #define ActionToString(action) \
        case LexModelsV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LexModelsV2
} // namespace QtAws
