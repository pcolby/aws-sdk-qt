// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mobilerequest.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::MobileRequest
 * \brief The MobileRequest class provides an interface for Mobile requests.
 *
 * \inmodule QtAwsMobile
 */

/*!
 * \enum MobileRequest::Action
 *
 * This enum describes the actions that can be performed as Mobile
 * requests.
 *
 * \value CreateProjectAction Mobile CreateProject action.
 * \value DeleteProjectAction Mobile DeleteProject action.
 * \value DescribeBundleAction Mobile DescribeBundle action.
 * \value DescribeProjectAction Mobile DescribeProject action.
 * \value ExportBundleAction Mobile ExportBundle action.
 * \value ExportProjectAction Mobile ExportProject action.
 * \value ListBundlesAction Mobile ListBundles action.
 * \value ListProjectsAction Mobile ListProjects action.
 * \value UpdateProjectAction Mobile UpdateProject action.
 */

/*!
 * Constructs a MobileRequest object for Mobile \a action.
 */
MobileRequest::MobileRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MobileRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MobileRequest::MobileRequest(const MobileRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MobileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MobileRequest object to be equal to \a other.
 */
MobileRequest& MobileRequest::operator=(const MobileRequest &other)
{
    Q_D(MobileRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MobileRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MobileRequestPrivate.
 */
MobileRequest::MobileRequest(MobileRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Mobile action to be performed by this request.
 */
MobileRequest::Action MobileRequest::action() const
{
    Q_D(const MobileRequest);
    return d->action;
}

/*!
 * Returns the name of the Mobile action to be performed by this request.
 */
QString MobileRequest::actionString() const
{
    return MobileRequestPrivate::toString(action());
}

/*!
 * Returns the Mobile API version implemented by this request.
 */
QString MobileRequest::apiVersion() const
{
    Q_D(const MobileRequest);
    return d->apiVersion;
}

/*!
 * Sets the Mobile action to be performed by this request to \a action.
 */
void MobileRequest::setAction(const Action action)
{
    Q_D(MobileRequest);
    d->action = action;
}

/*!
 * Sets the Mobile API version to include in this request to \a version.
 */
void MobileRequest::setApiVersion(const QString &version)
{
    Q_D(MobileRequest);
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
bool MobileRequest::operator==(const MobileRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Mobile queue name.
 *
 * @par From Mobile FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Mobile queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MobileRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MobileRequest::clearParameter(const QString &name)
{
    Q_D(MobileRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MobileRequest::clearParameters()
{
    Q_D(MobileRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MobileRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MobileRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MobileRequest::parameters() const
{
    Q_D(const MobileRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MobileRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MobileRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MobileRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MobileRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Mobile request using the given
 * \a endpoint.
 *
 * This Mobile implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MobileRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MobileRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Mobile::MobileRequestPrivate
 * \brief The MobileRequestPrivate class provides private implementation for MobileRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a MobileRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
MobileRequestPrivate::MobileRequestPrivate(const MobileRequest::Action action, MobileRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-07-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MobileRequest class's copy constructor.
 */
MobileRequestPrivate::MobileRequestPrivate(const MobileRequestPrivate &other,
                                     MobileRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MobileRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Mobile service's Action
 * query parameters.
 */
QString MobileRequestPrivate::toString(const MobileRequest::Action &action)
{
    #define ActionToString(action) \
        case MobileRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateProject);
        ActionToString(DeleteProject);
        ActionToString(DescribeBundle);
        ActionToString(DescribeProject);
        ActionToString(ExportBundle);
        ActionToString(ExportProject);
        ActionToString(ListBundles);
        ActionToString(ListProjects);
        ActionToString(UpdateProject);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Mobile
} // namespace QtAws
