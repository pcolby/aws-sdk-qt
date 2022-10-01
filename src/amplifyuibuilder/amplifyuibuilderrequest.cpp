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

#include "amplifyuibuilderrequest.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::AmplifyUIBuilderRequest
 * \brief The AmplifyUIBuilderRequest class provides an interface for AmplifyUIBuilder requests.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * \enum AmplifyUIBuilderRequest::Action
 *
 * This enum describes the actions that can be performed as AmplifyUIBuilder
 * requests.
 *
 * \value CreateComponentAction AmplifyUIBuilder CreateComponent action.
 * \value CreateFormAction AmplifyUIBuilder CreateForm action.
 * \value CreateThemeAction AmplifyUIBuilder CreateTheme action.
 * \value DeleteComponentAction AmplifyUIBuilder DeleteComponent action.
 * \value DeleteFormAction AmplifyUIBuilder DeleteForm action.
 * \value DeleteThemeAction AmplifyUIBuilder DeleteTheme action.
 * \value ExchangeCodeForTokenAction AmplifyUIBuilder ExchangeCodeForToken action.
 * \value ExportComponentsAction AmplifyUIBuilder ExportComponents action.
 * \value ExportFormsAction AmplifyUIBuilder ExportForms action.
 * \value ExportThemesAction AmplifyUIBuilder ExportThemes action.
 * \value GetComponentAction AmplifyUIBuilder GetComponent action.
 * \value GetFormAction AmplifyUIBuilder GetForm action.
 * \value GetMetadataAction AmplifyUIBuilder GetMetadata action.
 * \value GetThemeAction AmplifyUIBuilder GetTheme action.
 * \value ListComponentsAction AmplifyUIBuilder ListComponents action.
 * \value ListFormsAction AmplifyUIBuilder ListForms action.
 * \value ListThemesAction AmplifyUIBuilder ListThemes action.
 * \value PutMetadataFlagAction AmplifyUIBuilder PutMetadataFlag action.
 * \value RefreshTokenAction AmplifyUIBuilder RefreshToken action.
 * \value UpdateComponentAction AmplifyUIBuilder UpdateComponent action.
 * \value UpdateFormAction AmplifyUIBuilder UpdateForm action.
 * \value UpdateThemeAction AmplifyUIBuilder UpdateTheme action.
 */

/*!
 * Constructs a AmplifyUIBuilderRequest object for AmplifyUIBuilder \a action.
 */
AmplifyUIBuilderRequest::AmplifyUIBuilderRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AmplifyUIBuilderRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AmplifyUIBuilderRequest::AmplifyUIBuilderRequest(const AmplifyUIBuilderRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AmplifyUIBuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AmplifyUIBuilderRequest object to be equal to \a other.
 */
AmplifyUIBuilderRequest& AmplifyUIBuilderRequest::operator=(const AmplifyUIBuilderRequest &other)
{
    Q_D(AmplifyUIBuilderRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AmplifyUIBuilderRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmplifyUIBuilderRequestPrivate.
 */
AmplifyUIBuilderRequest::AmplifyUIBuilderRequest(AmplifyUIBuilderRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AmplifyUIBuilder action to be performed by this request.
 */
AmplifyUIBuilderRequest::Action AmplifyUIBuilderRequest::action() const
{
    Q_D(const AmplifyUIBuilderRequest);
    return d->action;
}

/*!
 * Returns the name of the AmplifyUIBuilder action to be performed by this request.
 */
QString AmplifyUIBuilderRequest::actionString() const
{
    return AmplifyUIBuilderRequestPrivate::toString(action());
}

/*!
 * Returns the AmplifyUIBuilder API version implemented by this request.
 */
QString AmplifyUIBuilderRequest::apiVersion() const
{
    Q_D(const AmplifyUIBuilderRequest);
    return d->apiVersion;
}

/*!
 * Sets the AmplifyUIBuilder action to be performed by this request to \a action.
 */
void AmplifyUIBuilderRequest::setAction(const Action action)
{
    Q_D(AmplifyUIBuilderRequest);
    d->action = action;
}

/*!
 * Sets the AmplifyUIBuilder API version to include in this request to \a version.
 */
void AmplifyUIBuilderRequest::setApiVersion(const QString &version)
{
    Q_D(AmplifyUIBuilderRequest);
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
bool AmplifyUIBuilderRequest::operator==(const AmplifyUIBuilderRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AmplifyUIBuilder queue name.
 *
 * @par From AmplifyUIBuilder FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AmplifyUIBuilder queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AmplifyUIBuilderRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AmplifyUIBuilderRequest::clearParameter(const QString &name)
{
    Q_D(AmplifyUIBuilderRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AmplifyUIBuilderRequest::clearParameters()
{
    Q_D(AmplifyUIBuilderRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AmplifyUIBuilderRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AmplifyUIBuilderRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AmplifyUIBuilderRequest::parameters() const
{
    Q_D(const AmplifyUIBuilderRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AmplifyUIBuilderRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AmplifyUIBuilderRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AmplifyUIBuilderRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AmplifyUIBuilderRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AmplifyUIBuilder request using the given
 * \a endpoint.
 *
 * This AmplifyUIBuilder implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AmplifyUIBuilderRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AmplifyUIBuilderRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AmplifyUIBuilder::AmplifyUIBuilderRequestPrivate
 * \brief The AmplifyUIBuilderRequestPrivate class provides private implementation for AmplifyUIBuilderRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a AmplifyUIBuilderRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
AmplifyUIBuilderRequestPrivate::AmplifyUIBuilderRequestPrivate(const AmplifyUIBuilderRequest::Action action, AmplifyUIBuilderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-08-11"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AmplifyUIBuilderRequest class's copy constructor.
 */
AmplifyUIBuilderRequestPrivate::AmplifyUIBuilderRequestPrivate(const AmplifyUIBuilderRequestPrivate &other,
                                     AmplifyUIBuilderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AmplifyUIBuilderRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AmplifyUIBuilder service's Action
 * query parameters.
 */
QString AmplifyUIBuilderRequestPrivate::toString(const AmplifyUIBuilderRequest::Action &action)
{
    #define ActionToString(action) \
        case AmplifyUIBuilderRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateComponent);
        ActionToString(CreateForm);
        ActionToString(CreateTheme);
        ActionToString(DeleteComponent);
        ActionToString(DeleteForm);
        ActionToString(DeleteTheme);
        ActionToString(ExchangeCodeForToken);
        ActionToString(ExportComponents);
        ActionToString(ExportForms);
        ActionToString(ExportThemes);
        ActionToString(GetComponent);
        ActionToString(GetForm);
        ActionToString(GetMetadata);
        ActionToString(GetTheme);
        ActionToString(ListComponents);
        ActionToString(ListForms);
        ActionToString(ListThemes);
        ActionToString(PutMetadataFlag);
        ActionToString(RefreshToken);
        ActionToString(UpdateComponent);
        ActionToString(UpdateForm);
        ActionToString(UpdateTheme);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
