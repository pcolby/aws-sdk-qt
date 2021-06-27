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

#include "codestarrequest.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::CodeStarRequest
 * \brief The CodeStarRequest class provides an interface for CodeStar requests.
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * \enum CodeStarRequest::Action
 *
 * This enum describes the actions that can be performed as CodeStar
 * requests.
 *
 * \value AssociateTeamMemberAction CodeStar AssociateTeamMember action.
 * \value CreateProjectAction CodeStar CreateProject action.
 * \value CreateUserProfileAction CodeStar CreateUserProfile action.
 * \value DeleteProjectAction CodeStar DeleteProject action.
 * \value DeleteUserProfileAction CodeStar DeleteUserProfile action.
 * \value DescribeProjectAction CodeStar DescribeProject action.
 * \value DescribeUserProfileAction CodeStar DescribeUserProfile action.
 * \value DisassociateTeamMemberAction CodeStar DisassociateTeamMember action.
 * \value ListProjectsAction CodeStar ListProjects action.
 * \value ListResourcesAction CodeStar ListResources action.
 * \value ListTagsForProjectAction CodeStar ListTagsForProject action.
 * \value ListTeamMembersAction CodeStar ListTeamMembers action.
 * \value ListUserProfilesAction CodeStar ListUserProfiles action.
 * \value TagProjectAction CodeStar TagProject action.
 * \value UntagProjectAction CodeStar UntagProject action.
 * \value UpdateProjectAction CodeStar UpdateProject action.
 * \value UpdateTeamMemberAction CodeStar UpdateTeamMember action.
 * \value UpdateUserProfileAction CodeStar UpdateUserProfile action.
 */

/*!
 * Constructs a CodeStarRequest object for CodeStar \a action.
 */
CodeStarRequest::CodeStarRequest(const Action action)
    : d_ptr(new CodeStarRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeStarRequest::CodeStarRequest(const CodeStarRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new CodeStarRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeStarRequest object to be equal to \a other.
 */
CodeStarRequest& CodeStarRequest::operator=(const CodeStarRequest &other)
{
    Q_D(CodeStarRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeStarRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarRequestPrivate.
 */
CodeStarRequest::CodeStarRequest(CodeStarRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the CodeStar action to be performed by this request.
 */
CodeStarRequest::Action CodeStarRequest::action() const
{
    Q_D(const CodeStarRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeStar action to be performed by this request.
 */
QString CodeStarRequest::actionString() const
{
    return CodeStarRequestPrivate::toString(action());
}

/*!
 * Returns the CodeStar API version implemented by this request.
 */
QString CodeStarRequest::apiVersion() const
{
    Q_D(const CodeStarRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeStar action to be performed by this request to \a action.
 */
void CodeStarRequest::setAction(const Action action)
{
    Q_D(CodeStarRequest);
    d->action = action;
}

/*!
 * Sets the CodeStar API version to include in this request to \a version.
 */
void CodeStarRequest::setApiVersion(const QString &version)
{
    Q_D(CodeStarRequest);
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
bool CodeStarRequest::operator==(const CodeStarRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeStar queue name.
 *
 * @par From CodeStar FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeStar queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeStarRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeStarRequest::clearParameter(const QString &name)
{
    Q_D(CodeStarRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeStarRequest::clearParameters()
{
    Q_D(CodeStarRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeStarRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeStarRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeStarRequest::parameters() const
{
    Q_D(const CodeStarRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeStarRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeStarRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeStarRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeStarRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeStar request using the given
 * \a endpoint.
 *
 * This CodeStar implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeStarRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeStarRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeStar::CodeStarRequestPrivate
 * \brief The CodeStarRequestPrivate class provides private implementation for CodeStarRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a CodeStarRequestPrivate object for CodeStar \a action,
 * with public implementation \a q.
 */
CodeStarRequestPrivate::CodeStarRequestPrivate(const CodeStarRequest::Action action, CodeStarRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeStarRequest class's copy constructor.
 */
CodeStarRequestPrivate::CodeStarRequestPrivate(const CodeStarRequestPrivate &other,
                                     CodeStarRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeStarRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeStar service's Action
 * query parameters.
 */
QString CodeStarRequestPrivate::toString(const CodeStarRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeStarRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeStar
} // namespace QtAws
