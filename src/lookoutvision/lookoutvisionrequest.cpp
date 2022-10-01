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

#include "lookoutvisionrequest.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::LookoutVisionRequest
 * \brief The LookoutVisionRequest class provides an interface for LookoutVision requests.
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * \enum LookoutVisionRequest::Action
 *
 * This enum describes the actions that can be performed as LookoutVision
 * requests.
 *
 * \value CreateDatasetAction LookoutVision CreateDataset action.
 * \value CreateModelAction LookoutVision CreateModel action.
 * \value CreateProjectAction LookoutVision CreateProject action.
 * \value DeleteDatasetAction LookoutVision DeleteDataset action.
 * \value DeleteModelAction LookoutVision DeleteModel action.
 * \value DeleteProjectAction LookoutVision DeleteProject action.
 * \value DescribeDatasetAction LookoutVision DescribeDataset action.
 * \value DescribeModelAction LookoutVision DescribeModel action.
 * \value DescribeModelPackagingJobAction LookoutVision DescribeModelPackagingJob action.
 * \value DescribeProjectAction LookoutVision DescribeProject action.
 * \value DetectAnomaliesAction LookoutVision DetectAnomalies action.
 * \value ListDatasetEntriesAction LookoutVision ListDatasetEntries action.
 * \value ListModelPackagingJobsAction LookoutVision ListModelPackagingJobs action.
 * \value ListModelsAction LookoutVision ListModels action.
 * \value ListProjectsAction LookoutVision ListProjects action.
 * \value ListTagsForResourceAction LookoutVision ListTagsForResource action.
 * \value StartModelAction LookoutVision StartModel action.
 * \value StartModelPackagingJobAction LookoutVision StartModelPackagingJob action.
 * \value StopModelAction LookoutVision StopModel action.
 * \value TagResourceAction LookoutVision TagResource action.
 * \value UntagResourceAction LookoutVision UntagResource action.
 * \value UpdateDatasetEntriesAction LookoutVision UpdateDatasetEntries action.
 */

/*!
 * Constructs a LookoutVisionRequest object for LookoutVision \a action.
 */
LookoutVisionRequest::LookoutVisionRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LookoutVisionRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LookoutVisionRequest::LookoutVisionRequest(const LookoutVisionRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LookoutVisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LookoutVisionRequest object to be equal to \a other.
 */
LookoutVisionRequest& LookoutVisionRequest::operator=(const LookoutVisionRequest &other)
{
    Q_D(LookoutVisionRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LookoutVisionRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutVisionRequestPrivate.
 */
LookoutVisionRequest::LookoutVisionRequest(LookoutVisionRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LookoutVision action to be performed by this request.
 */
LookoutVisionRequest::Action LookoutVisionRequest::action() const
{
    Q_D(const LookoutVisionRequest);
    return d->action;
}

/*!
 * Returns the name of the LookoutVision action to be performed by this request.
 */
QString LookoutVisionRequest::actionString() const
{
    return LookoutVisionRequestPrivate::toString(action());
}

/*!
 * Returns the LookoutVision API version implemented by this request.
 */
QString LookoutVisionRequest::apiVersion() const
{
    Q_D(const LookoutVisionRequest);
    return d->apiVersion;
}

/*!
 * Sets the LookoutVision action to be performed by this request to \a action.
 */
void LookoutVisionRequest::setAction(const Action action)
{
    Q_D(LookoutVisionRequest);
    d->action = action;
}

/*!
 * Sets the LookoutVision API version to include in this request to \a version.
 */
void LookoutVisionRequest::setApiVersion(const QString &version)
{
    Q_D(LookoutVisionRequest);
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
bool LookoutVisionRequest::operator==(const LookoutVisionRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LookoutVision queue name.
 *
 * @par From LookoutVision FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LookoutVision queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LookoutVisionRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LookoutVisionRequest::clearParameter(const QString &name)
{
    Q_D(LookoutVisionRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LookoutVisionRequest::clearParameters()
{
    Q_D(LookoutVisionRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LookoutVisionRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LookoutVisionRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LookoutVisionRequest::parameters() const
{
    Q_D(const LookoutVisionRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LookoutVisionRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LookoutVisionRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LookoutVisionRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LookoutVisionRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LookoutVision request using the given
 * \a endpoint.
 *
 * This LookoutVision implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LookoutVisionRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LookoutVisionRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LookoutVision::LookoutVisionRequestPrivate
 * \brief The LookoutVisionRequestPrivate class provides private implementation for LookoutVisionRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a LookoutVisionRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
LookoutVisionRequestPrivate::LookoutVisionRequestPrivate(const LookoutVisionRequest::Action action, LookoutVisionRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-11-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LookoutVisionRequest class's copy constructor.
 */
LookoutVisionRequestPrivate::LookoutVisionRequestPrivate(const LookoutVisionRequestPrivate &other,
                                     LookoutVisionRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LookoutVisionRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LookoutVision service's Action
 * query parameters.
 */
QString LookoutVisionRequestPrivate::toString(const LookoutVisionRequest::Action &action)
{
    #define ActionToString(action) \
        case LookoutVisionRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDataset);
        ActionToString(CreateModel);
        ActionToString(CreateProject);
        ActionToString(DeleteDataset);
        ActionToString(DeleteModel);
        ActionToString(DeleteProject);
        ActionToString(DescribeDataset);
        ActionToString(DescribeModel);
        ActionToString(DescribeModelPackagingJob);
        ActionToString(DescribeProject);
        ActionToString(DetectAnomalies);
        ActionToString(ListDatasetEntries);
        ActionToString(ListModelPackagingJobs);
        ActionToString(ListModels);
        ActionToString(ListProjects);
        ActionToString(ListTagsForResource);
        ActionToString(StartModel);
        ActionToString(StartModelPackagingJob);
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

} // namespace LookoutVision
} // namespace QtAws
