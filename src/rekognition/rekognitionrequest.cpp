/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rekognitionrequest.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::RekognitionRequest
 * \brief The RekognitionRequest class provides an interface for Rekognition requests.
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * \enum RekognitionRequest::Action
 *
 * This enum describes the actions that can be performed as Rekognition
 * requests.
 *
 * \value CompareFacesAction Rekognition CompareFaces action.
 * \value CreateCollectionAction Rekognition CreateCollection action.
 * \value CreateStreamProcessorAction Rekognition CreateStreamProcessor action.
 * \value DeleteCollectionAction Rekognition DeleteCollection action.
 * \value DeleteFacesAction Rekognition DeleteFaces action.
 * \value DeleteStreamProcessorAction Rekognition DeleteStreamProcessor action.
 * \value DescribeStreamProcessorAction Rekognition DescribeStreamProcessor action.
 * \value DetectFacesAction Rekognition DetectFaces action.
 * \value DetectLabelsAction Rekognition DetectLabels action.
 * \value DetectModerationLabelsAction Rekognition DetectModerationLabels action.
 * \value DetectTextAction Rekognition DetectText action.
 * \value GetCelebrityInfoAction Rekognition GetCelebrityInfo action.
 * \value GetCelebrityRecognitionAction Rekognition GetCelebrityRecognition action.
 * \value GetContentModerationAction Rekognition GetContentModeration action.
 * \value GetFaceDetectionAction Rekognition GetFaceDetection action.
 * \value GetFaceSearchAction Rekognition GetFaceSearch action.
 * \value GetLabelDetectionAction Rekognition GetLabelDetection action.
 * \value GetPersonTrackingAction Rekognition GetPersonTracking action.
 * \value IndexFacesAction Rekognition IndexFaces action.
 * \value ListCollectionsAction Rekognition ListCollections action.
 * \value ListFacesAction Rekognition ListFaces action.
 * \value ListStreamProcessorsAction Rekognition ListStreamProcessors action.
 * \value RecognizeCelebritiesAction Rekognition RecognizeCelebrities action.
 * \value SearchFacesAction Rekognition SearchFaces action.
 * \value SearchFacesByImageAction Rekognition SearchFacesByImage action.
 * \value StartCelebrityRecognitionAction Rekognition StartCelebrityRecognition action.
 * \value StartContentModerationAction Rekognition StartContentModeration action.
 * \value StartFaceDetectionAction Rekognition StartFaceDetection action.
 * \value StartFaceSearchAction Rekognition StartFaceSearch action.
 * \value StartLabelDetectionAction Rekognition StartLabelDetection action.
 * \value StartPersonTrackingAction Rekognition StartPersonTracking action.
 * \value StartStreamProcessorAction Rekognition StartStreamProcessor action.
 * \value StopStreamProcessorAction Rekognition StopStreamProcessor action.
 */

/*!
 * Constructs a[n] RekognitionRequest object for Rekognition \a action.
 */
RekognitionRequest::RekognitionRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RekognitionRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RekognitionRequest::RekognitionRequest(const RekognitionRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RekognitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RekognitionRequest object to be equal to \a other.
 */
RekognitionRequest& RekognitionRequest::operator=(const RekognitionRequest &other)
{
    Q_D(RekognitionRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RekognitionRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RekognitionRequestPrivate.
 */
RekognitionRequest::RekognitionRequest(RekognitionRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Rekognition action to be performed by this request.
 */
RekognitionRequest::Action RekognitionRequest::action() const
{
    Q_D(const RekognitionRequest);
    return d->action;
}

/*!
 * Returns the name of the Rekognition action to be performed by this request.
 */
QString RekognitionRequest::actionString() const
{
    return RekognitionRequestPrivate::toString(action());
}

/*!
 * Returns the Rekognition API version implemented by this request.
 */
QString RekognitionRequest::apiVersion() const
{
    Q_D(const RekognitionRequest);
    return d->apiVersion;
}

/*!
 * Sets the Rekognition action to be performed by this request to \a action.
 */
void RekognitionRequest::setAction(const Action action)
{
    Q_D(RekognitionRequest);
    d->action = action;
}

/*!
 * Sets the Rekognition API version to include in this request to \a version.
 */
void RekognitionRequest::setApiVersion(const QString &version)
{
    Q_D(RekognitionRequest);
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
bool RekognitionRequest::operator==(const RekognitionRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Rekognition queue name.
 *
 * @par From Rekognition FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Rekognition queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RekognitionRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RekognitionRequest::clearParameter(const QString &name)
{
    Q_D(RekognitionRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RekognitionRequest::clearParameters()
{
    Q_D(RekognitionRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RekognitionRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RekognitionRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RekognitionRequest::parameters() const
{
    Q_D(const RekognitionRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RekognitionRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RekognitionRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RekognitionRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RekognitionRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Rekognition request using the given
 * \a endpoint.
 *
 * This Rekognition implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RekognitionRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const RekognitionRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Rekognition::RekognitionRequestPrivate
 * \brief The RekognitionRequestPrivate class provides private implementation for RekognitionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RekognitionRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
RekognitionRequestPrivate::RekognitionRequestPrivate(const RekognitionRequest::Action action, RekognitionRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RekognitionRequest class's copy constructor.
 */
RekognitionRequestPrivate::RekognitionRequestPrivate(const RekognitionRequestPrivate &other,
                                     RekognitionRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RekognitionRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Rekognition service's Action
 * query parameters.
 */
QString RekognitionRequestPrivate::toString(const RekognitionRequest::Action &action)
{
    #define ActionToString(action) \
        case RekognitionRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Rekognition
} // namespace QtAws
