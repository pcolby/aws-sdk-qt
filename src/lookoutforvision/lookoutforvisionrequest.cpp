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

#include "lookoutforvisionrequest.h"
#include "lookoutforvisionrequest_p.h"

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::LookoutforVisionRequest
 * \brief The LookoutforVisionRequest class provides an interface for LookoutforVision requests.
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * \enum LookoutforVisionRequest::Action
 *
 * This enum describes the actions that can be performed as LookoutforVision
 * requests.
 *
 * \value CreateDatasetAction LookoutforVision CreateDataset action.
 * \value CreateModelAction LookoutforVision CreateModel action.
 * \value CreateProjectAction LookoutforVision CreateProject action.
 * \value DeleteDatasetAction LookoutforVision DeleteDataset action.
 * \value DeleteModelAction LookoutforVision DeleteModel action.
 * \value DeleteProjectAction LookoutforVision DeleteProject action.
 * \value DescribeDatasetAction LookoutforVision DescribeDataset action.
 * \value DescribeModelAction LookoutforVision DescribeModel action.
 * \value DescribeProjectAction LookoutforVision DescribeProject action.
 * \value DetectAnomaliesAction LookoutforVision DetectAnomalies action.
 * \value ListDatasetEntriesAction LookoutforVision ListDatasetEntries action.
 * \value ListModelsAction LookoutforVision ListModels action.
 * \value ListProjectsAction LookoutforVision ListProjects action.
 * \value ListTagsForResourceAction LookoutforVision ListTagsForResource action.
 * \value StartModelAction LookoutforVision StartModel action.
 * \value StopModelAction LookoutforVision StopModel action.
 * \value TagResourceAction LookoutforVision TagResource action.
 * \value UntagResourceAction LookoutforVision UntagResource action.
 * \value UpdateDatasetEntriesAction LookoutforVision UpdateDatasetEntries action.
 */

/*!
 * Constructs a LookoutforVisionRequest object for LookoutforVision \a action.
 */
LookoutforVisionRequest::LookoutforVisionRequest(const Action action)
    : d_ptr(new LookoutforVisionRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LookoutforVisionRequest::LookoutforVisionRequest(const LookoutforVisionRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new LookoutforVisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LookoutforVisionRequest object to be equal to \a other.
 */
LookoutforVisionRequest& LookoutforVisionRequest::operator=(const LookoutforVisionRequest &other)
{
    Q_D(LookoutforVisionRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LookoutforVisionRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutforVisionRequestPrivate.
 */
LookoutforVisionRequest::LookoutforVisionRequest(LookoutforVisionRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the LookoutforVision action to be performed by this request.
 */
LookoutforVisionRequest::Action LookoutforVisionRequest::action() const
{
    Q_D(const LookoutforVisionRequest);
    return d->action;
}

/*!
 * Returns the name of the LookoutforVision action to be performed by this request.
 */
QString LookoutforVisionRequest::actionString() const
{
    return LookoutforVisionRequestPrivate::toString(action());
}

/*!
 * Returns the LookoutforVision API version implemented by this request.
 */
QString LookoutforVisionRequest::apiVersion() const
{
    Q_D(const LookoutforVisionRequest);
    return d->apiVersion;
}

/*!
 * Sets the LookoutforVision action to be performed by this request to \a action.
 */
void LookoutforVisionRequest::setAction(const Action action)
{
    Q_D(LookoutforVisionRequest);
    d->action = action;
}

/*!
 * Sets the LookoutforVision API version to include in this request to \a version.
 */
void LookoutforVisionRequest::setApiVersion(const QString &version)
{
    Q_D(LookoutforVisionRequest);
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
bool LookoutforVisionRequest::operator==(const LookoutforVisionRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LookoutforVision queue name.
 *
 * @par From LookoutforVision FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LookoutforVision queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LookoutforVisionRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LookoutforVisionRequest::clearParameter(const QString &name)
{
    Q_D(LookoutforVisionRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LookoutforVisionRequest::clearParameters()
{
    Q_D(LookoutforVisionRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LookoutforVisionRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LookoutforVisionRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LookoutforVisionRequest::parameters() const
{
    Q_D(const LookoutforVisionRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LookoutforVisionRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LookoutforVisionRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LookoutforVisionRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LookoutforVisionRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LookoutforVision request using the given
 * \a endpoint.
 *
 * This LookoutforVision implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LookoutforVisionRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LookoutforVisionRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LookoutforVision::LookoutforVisionRequestPrivate
 * \brief The LookoutforVisionRequestPrivate class provides private implementation for LookoutforVisionRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a LookoutforVisionRequestPrivate object for LookoutforVision \a action,
 * with public implementation \a q.
 */
LookoutforVisionRequestPrivate::LookoutforVisionRequestPrivate(const LookoutforVisionRequest::Action action, LookoutforVisionRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LookoutforVisionRequest class's copy constructor.
 */
LookoutforVisionRequestPrivate::LookoutforVisionRequestPrivate(const LookoutforVisionRequestPrivate &other,
                                     LookoutforVisionRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LookoutforVisionRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LookoutforVision service's Action
 * query parameters.
 */
QString LookoutforVisionRequestPrivate::toString(const LookoutforVisionRequest::Action &action)
{
    #define ActionToString(action) \
        case LookoutforVisionRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDataset);
        ActionToString(CreateModel);
        ActionToString(CreateProject);
        ActionToString(DeleteDataset);
        ActionToString(DeleteModel);
        ActionToString(DeleteProject);
        ActionToString(DescribeDataset);
        ActionToString(DescribeModel);
        ActionToString(DescribeProject);
        ActionToString(DetectAnomalies);
        ActionToString(ListDatasetEntries);
        ActionToString(ListModels);
        ActionToString(ListProjects);
        ActionToString(ListTagsForResource);
        ActionToString(StartModel);
        ActionToString(StopModel);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDatasetEntries);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LookoutforVision
} // namespace QtAws
