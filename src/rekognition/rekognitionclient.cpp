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

#include "rekognitionclient.h"
#include "rekognitionclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace Rekognition {

/**
 * @class  RekognitionClient
 *
 * @brief  Client for Amazon Rekognition
 *
 * This is the Amazon Rekognition API
 */

/**
 * @brief  Constructs a new RekognitionClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
RekognitionClient::RekognitionClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RekognitionClientPrivate(this), parent)
{
    Q_D(RekognitionClient);
    d->apiVersion = QStringLiteral("2016-06-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rekognition");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Rekognition");
    d->serviceName = QStringLiteral("rekognition");
}

/**
 * @brief  Constructs a new RekognitionClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
RekognitionClient::RekognitionClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RekognitionClientPrivate(this), parent)
{
    Q_D(RekognitionClient);
    d->apiVersion = QStringLiteral("2016-06-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rekognition");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Rekognition");
    d->serviceName = QStringLiteral("rekognition");
}

/**
 * Compares a face in the <i>source</i> input image with each of the 100 largest faces detected in the <i>target</i> input
 * image.
 *
 * </p <note>
 *
 * If the source image contains multiple faces, the service detects the largest face and compares it with each face
 * detected in the target image.
 *
 * </p </note>
 *
 * You pass the input and target images either as base64-encoded image bytes or as a references to images in an Amazon S3
 * bucket. If you use the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image
 * must be either a PNG or JPEG formatted file.
 *
 * </p
 *
 * In response, the operation returns an array of face matches ordered by similarity score in descending order. For each
 * face match, the response provides a bounding box of the face, facial landmarks, pose details (pitch, role, and yaw),
 * quality (brightness and sharpness), and confidence value (indicating the level of confidence that the bounding box
 * contains a face). The response also provides a similarity score, which indicates how closely the faces match.
 *
 * </p <note>
 *
 * By default, only faces with a similarity score of greater than or equal to 80% are returned in the response. You can
 * change this value by specifying the <code>SimilarityThreshold</code>
 *
 * parameter> </note>
 *
 * <code>CompareFaces</code> also returns an array of faces that don't match the source image. For each face, it returns a
 * bounding box, confidence value, landmarks, pose details, and quality. The response also returns information about the
 * face in the source image, including the bounding box of the face and confidence
 *
 * value>
 *
 * If the image doesn't contain Exif metadata, <code>CompareFaces</code> returns orientation information for the source and
 * target images. Use these values to display the images with the correct image
 *
 * orientation>
 *
 * If no faces are detected in the source or target images, <code>CompareFaces</code> returns an
 * <code>InvalidParameterException</code> error.
 *
 * </p <note>
 *
 * This is a stateless API operation. That is, data returned by this operation doesn't
 *
 * persist> </note>
 *
 * For an example, see
 *
 * <a>faces-compare-images</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:CompareFaces</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CompareFacesResponse * RekognitionClient::compareFaces(const CompareFacesRequest &request)
{
    return qobject_cast<CompareFacesResponse *>(send(request));
}

/**
 * Creates a collection in an AWS Region. You can add faces to the collection using the operation.
 *
 * </p
 *
 * For example, you might create collections, one for each of your application users. A user can then index faces using the
 * <code>IndexFaces</code> operation and persist results in a specific collection. Then, a user can search the collection
 * for faces in the user-specific container.
 *
 * </p <note>
 *
 * Collection names are
 *
 * case-sensitive> </note>
 *
 * This operation requires permissions to perform the <code>rekognition:CreateCollection</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCollectionResponse * RekognitionClient::createCollection(const CreateCollectionRequest &request)
{
    return qobject_cast<CreateCollectionResponse *>(send(request));
}

/**
 * Creates an Amazon Rekognition stream processor that you can use to detect and recognize faces in a streaming
 *
 * video>
 *
 * Rekognition Video is a consumer of live video from Amazon Kinesis Video Streams. Rekognition Video sends analysis
 * results to Amazon Kinesis Data
 *
 * Streams>
 *
 * You provide as input a Kinesis video stream (<code>Input</code>) and a Kinesis data stream (<code>Output</code>) stream.
 * You also specify the face recognition criteria in <code>Settings</code>. For example, the collection containing faces
 * that you want to recognize. Use <code>Name</code> to assign an identifier for the stream processor. You use
 * <code>Name</code> to manage the stream processor. For example, you can start processing the source video by calling with
 * the <code>Name</code> field.
 *
 * </p
 *
 * After you have finished analyzing a streaming video, use to stop processing. You can delete the stream processor by
 * calling
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStreamProcessorResponse * RekognitionClient::createStreamProcessor(const CreateStreamProcessorRequest &request)
{
    return qobject_cast<CreateStreamProcessorResponse *>(send(request));
}

/**
 * Deletes the specified collection. Note that this operation removes all faces in the collection. For an example, see
 *
 * <a>delete-collection-procedure</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteCollection</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCollectionResponse * RekognitionClient::deleteCollection(const DeleteCollectionRequest &request)
{
    return qobject_cast<DeleteCollectionResponse *>(send(request));
}

/**
 * Deletes faces from a collection. You specify a collection ID and an array of face IDs to remove from the
 *
 * collection>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteFaces</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFacesResponse * RekognitionClient::deleteFaces(const DeleteFacesRequest &request)
{
    return qobject_cast<DeleteFacesResponse *>(send(request));
}

/**
 * Deletes the stream processor identified by <code>Name</code>. You assign the value for <code>Name</code> when you create
 * the stream processor with . You might not be able to use the same name for a stream processor for a few seconds after
 * calling
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStreamProcessorResponse * RekognitionClient::deleteStreamProcessor(const DeleteStreamProcessorRequest &request)
{
    return qobject_cast<DeleteStreamProcessorResponse *>(send(request));
}

/**
 * Provides information about a stream processor created by . You can get information about the input and output streams,
 * the input parameters for the face recognition being performed, and the current status of the stream
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStreamProcessorResponse * RekognitionClient::describeStreamProcessor(const DescribeStreamProcessorRequest &request)
{
    return qobject_cast<DescribeStreamProcessorResponse *>(send(request));
}

/**
 * Detects faces within an image that is provided as
 *
 * input>
 *
 * <code>DetectFaces</code> detects the 100 largest faces in the image. For each face detected, the operation returns face
 * details including a bounding box of the face, a confidence value (that the bounding box contains a face), and a fixed
 * set of attributes such as facial landmarks (for example, coordinates of eye and mouth), gender, presence of beard,
 * sunglasses, etc.
 *
 * </p
 *
 * The face-detection algorithm is most effective on frontal faces. For non-frontal or obscured faces, the algorithm may
 * not detect the faces or might detect faces with lower confidence.
 *
 * </p
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * </p <note>
 *
 * This is a stateless API operation. That is, the operation does not persist any
 *
 * data> </note>
 *
 * For an example, see
 *
 * <a>procedure-detecting-faces-in-images</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:DetectFaces</code> action.
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectFacesResponse * RekognitionClient::detectFaces(const DetectFacesRequest &request)
{
    return qobject_cast<DetectFacesResponse *>(send(request));
}

/**
 * Detects instances of real-world entities within an image (JPEG or PNG) provided as input. This includes objects like
 * flower, tree, and table; events like wedding, graduation, and birthday party; and concepts like landscape, evening, and
 * nature. For an example, see
 *
 * <a>images-s3</a>> <note>
 *
 * <code>DetectLabels</code> does not support the detection of activities. However, activity detection is supported for
 * label detection in videos. For more information, see
 *
 * > </note>
 *
 * You pass the input image as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If you use
 * the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be either a
 * PNG or JPEG formatted file.
 *
 * </p
 *
 * For each object, scene, and concept the API returns one or more labels. Each label provides the object name, and the
 * level of confidence that the image contains the object. For example, suppose the input image has a lighthouse, the sea,
 * and a rock. The response will include all three labels, one for each object.
 *
 * </p
 *
 * <code>{Name: lighthouse, Confidence: 98.4629}</code>
 *
 * </p
 *
 * <code>{Name: rock,Confidence: 79.2097}</code>
 *
 * </p
 *
 * <code> {Name: sea,Confidence: 75.061}</code>
 *
 * </p
 *
 * In the preceding example, the operation returns one label for each of the three objects. The operation can also return
 * multiple labels for the same object in the image. For example, if the input image shows a flower (for example, a tulip),
 * the operation might return the following three labels.
 *
 * </p
 *
 * <code>{Name: flower,Confidence: 99.0562}</code>
 *
 * </p
 *
 * <code>{Name: plant,Confidence: 99.0562}</code>
 *
 * </p
 *
 * <code>{Name: tulip,Confidence: 99.0562}</code>
 *
 * </p
 *
 * In this example, the detection algorithm more precisely identifies the flower as a
 *
 * tulip>
 *
 * In response, the API returns an array of labels. In addition, the response also includes the orientation correction.
 * Optionally, you can specify <code>MinConfidence</code> to control the confidence threshold for the labels returned. The
 * default is 50%. You can also add the <code>MaxLabels</code> parameter to limit the number of labels returned.
 *
 * </p <note>
 *
 * If the object detected is a person, the operation doesn't provide the same facial details that the <a>DetectFaces</a>
 * operation
 *
 * provides> </note>
 *
 * This is a stateless API operation. That is, the operation does not persist any
 *
 * data>
 *
 * This operation requires permissions to perform the <code>rekognition:DetectLabels</code> action.
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectLabelsResponse * RekognitionClient::detectLabels(const DetectLabelsRequest &request)
{
    return qobject_cast<DetectLabelsResponse *>(send(request));
}

/**
 * Detects explicit or suggestive adult content in a specified JPEG or PNG format image. Use
 * <code>DetectModerationLabels</code> to moderate images depending on your requirements. For example, you might want to
 * filter images that contain nudity, but not images containing suggestive
 *
 * content>
 *
 * To filter images, use the labels returned by <code>DetectModerationLabels</code> to determine which types of content are
 * appropriate. For information about moderation labels, see
 *
 * <a>moderation</a>>
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectModerationLabelsResponse * RekognitionClient::detectModerationLabels(const DetectModerationLabelsRequest &request)
{
    return qobject_cast<DetectModerationLabelsResponse *>(send(request));
}

/**
 * Detects text in the input image and converts it into machine-readable
 *
 * text>
 *
 * Pass the input image as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If you use the
 * AWS CLI to call Amazon Rekognition operations, you must pass it as a reference to an image in an Amazon S3 bucket. For
 * the AWS CLI, passing image bytes is not supported. The image must be either a .png or .jpeg formatted file.
 *
 * </p
 *
 * The <code>DetectText</code> operation returns text in an array of elements, <code>TextDetections</code>. Each
 * <code>TextDetection</code> element provides information about a single word or line of text that was detected in the
 * image.
 *
 * </p
 *
 * A word is one or more ISO basic latin script characters that are not separated by spaces. <code>DetectText</code> can
 * detect up to 50 words in an
 *
 * image>
 *
 * A line is a string of equally spaced words. A line isn't necessarily a complete sentence. For example, a driver's
 * license number is detected as a line. A line ends when there is no aligned text after it. Also, a line ends when there
 * is a large gap between words, relative to the length of the words. This means, depending on the gap between words,
 * Amazon Rekognition may detect multiple lines in text aligned in the same direction. Periods don't represent the end of a
 * line. If a sentence spans multiple lines, the <code>DetectText</code> operation returns multiple
 *
 * lines>
 *
 * To determine whether a <code>TextDetection</code> element is a line of text or a word, use the
 * <code>TextDetection</code> object <code>Type</code> field.
 *
 * </p
 *
 * To be detected, text must be within +/- 30 degrees orientation of the horizontal
 *
 * axis>
 *
 * For more information, see
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetectTextResponse * RekognitionClient::detectText(const DetectTextRequest &request)
{
    return qobject_cast<DetectTextResponse *>(send(request));
}

/**
 * Gets the name and additional information about a celebrity based on his or her Rekognition ID. The additional
 * information is returned as an array of URLs. If there is no additional information about the celebrity, this list is
 * empty. For more information, see
 *
 * <a>get-celebrity-info-procedure</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:GetCelebrityInfo</code> action.
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCelebrityInfoResponse * RekognitionClient::getCelebrityInfo(const GetCelebrityInfoRequest &request)
{
    return qobject_cast<GetCelebrityInfoResponse *>(send(request));
}

/**
 * Gets the celebrity recognition results for a Rekognition Video analysis started by
 *
 * >
 *
 * Celebrity recognition in a video is an asynchronous operation. Analysis is started by a call to which returns a job
 * identifier (<code>JobId</code>). When the celebrity recognition operation finishes, Rekognition Video publishes a
 * completion status to the Amazon Simple Notification Service topic registered in the initial call to
 * <code>StartCelebrityRecognition</code>. To get the results of the celebrity recognition analysis, first check that the
 * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <code>GetCelebrityDetection</code>
 * and pass the job identifier (<code>JobId</code>) from the initial call to <code>StartCelebrityDetection</code>. For more
 * information, see
 *
 * <a>video</a>>
 *
 * <code>GetCelebrityRecognition</code> returns detected celebrities and the time(s) they are detected in an array
 * (<code>Celebrities</code>) of objects. Each <code>CelebrityRecognition</code> contains information about the celebrity
 * in a object and the time, <code>Timestamp</code>, the celebrity was detected.
 *
 * </p
 *
 * By default, the <code>Celebrities</code> array is sorted by time (milliseconds from the start of the video). You can
 * also sort the array by celebrity by specifying the value <code>ID</code> in the <code>SortBy</code> input
 *
 * parameter>
 *
 * The <code>CelebrityDetail</code> object includes the celebrity identifer and additional information urls. If you don't
 * store the additional information urls, you can get them later by calling with the celebrity
 *
 * identifer>
 *
 * No information is returned for faces not recognized as
 *
 * celebrities>
 *
 * Use MaxResults parameter to limit the number of labels returned. If there are more results than specified in
 * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token for
 * getting the next set of results. To get the next page of results, call <code>GetCelebrityDetection</code> and populate
 * the <code>NextToken</code> request parameter with the token value returned from the previous call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCelebrityRecognitionResponse * RekognitionClient::getCelebrityRecognition(const GetCelebrityRecognitionRequest &request)
{
    return qobject_cast<GetCelebrityRecognitionResponse *>(send(request));
}

/**
 * Gets the content moderation analysis results for a Rekognition Video analysis started by
 *
 * >
 *
 * Content moderation analysis of a video is an asynchronous operation. You start analysis by calling . which returns a job
 * identifier (<code>JobId</code>). When analysis finishes, Rekognition Video publishes a completion status to the Amazon
 * Simple Notification Service topic registered in the initial call to <code>StartContentModeration</code>. To get the
 * results of the content moderation analysis, first check that the status value published to the Amazon SNS topic is
 * <code>SUCCEEDED</code>. If so, call <code>GetCelebrityDetection</code> and pass the job identifier (<code>JobId</code>)
 * from the initial call to <code>StartCelebrityDetection</code>. For more information, see <a>video</a>.
 *
 * </p
 *
 * <code>GetContentModeration</code> returns detected content moderation labels, and the time they are detected, in an
 * array, <code>ModerationLabels</code>, of objects.
 *
 * </p
 *
 * By default, the moderated labels are returned sorted by time, in milliseconds from the start of the video. You can also
 * sort them by moderated label by specifying <code>NAME</code> for the <code>SortBy</code> input parameter.
 *
 * </p
 *
 * Since video analysis can return a large number of results, use the <code>MaxResults</code> parameter to limit the number
 * of labels returned in a single call to <code>GetContentModeration</code>. If there are more results than specified in
 * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token for
 * getting the next set of results. To get the next page of results, call <code>GetContentModeration</code> and populate
 * the <code>NextToken</code> request parameter with the value of <code>NextToken</code> returned from the previous call to
 *
 * <code>GetContentModeration</code>>
 *
 * For more information, see
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetContentModerationResponse * RekognitionClient::getContentModeration(const GetContentModerationRequest &request)
{
    return qobject_cast<GetContentModerationResponse *>(send(request));
}

/**
 * Gets face detection results for a Rekognition Video analysis started by
 *
 * >
 *
 * Face detection with Rekognition Video is an asynchronous operation. You start face detection by calling which returns a
 * job identifier (<code>JobId</code>). When the face detection operation finishes, Rekognition Video publishes a
 * completion status to the Amazon Simple Notification Service topic registered in the initial call to
 * <code>StartFaceDetection</code>. To get the results of the face detection operation, first check that the status value
 * published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call and pass the job identifier
 * (<code>JobId</code>) from the initial call to
 *
 * <code>StartFaceDetection</code>>
 *
 * <code>GetFaceDetection</code> returns an array of detected faces (<code>Faces</code>) sorted by the time the faces were
 * detected.
 *
 * </p
 *
 * Use MaxResults parameter to limit the number of labels returned. If there are more results than specified in
 * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token for
 * getting the next set of results. To get the next page of results, call <code>GetFaceDetection</code> and populate the
 * <code>NextToken</code> request parameter with the token value returned from the previous call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFaceDetectionResponse * RekognitionClient::getFaceDetection(const GetFaceDetectionRequest &request)
{
    return qobject_cast<GetFaceDetectionResponse *>(send(request));
}

/**
 * Gets the face search results for Rekognition Video face search started by . The search returns faces in a collection
 * that match the faces of persons detected in a video. It also includes the time(s) that faces are matched in the
 *
 * video>
 *
 * Face search in a video is an asynchronous operation. You start face search by calling to which returns a job identifier
 * (<code>JobId</code>). When the search operation finishes, Rekognition Video publishes a completion status to the Amazon
 * Simple Notification Service topic registered in the initial call to <code>StartFaceSearch</code>. To get the search
 * results, first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
 * <code>GetFaceSearch</code> and pass the job identifier (<code>JobId</code>) from the initial call to
 * <code>StartFaceSearch</code>. For more information, see
 *
 * <a>collections</a>>
 *
 * The search results are retured in an array, <code>Persons</code>, of objects. Each<code>PersonMatch</code> element
 * contains details about the matching faces in the input collection, person information for the matched person, and the
 * time the person was matched in the
 *
 * video>
 *
 * By default, the <code>Persons</code> array is sorted by the time, in milliseconds from the start of the video, persons
 * are matched. You can also sort by persons by specifying <code>INDEX</code> for the <code>SORTBY</code> input
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFaceSearchResponse * RekognitionClient::getFaceSearch(const GetFaceSearchRequest &request)
{
    return qobject_cast<GetFaceSearchResponse *>(send(request));
}

/**
 * Gets the label detection results of a Rekognition Video analysis started by .
 *
 * </p
 *
 * The label detection operation is started by a call to which returns a job identifier (<code>JobId</code>). When the
 * label detection operation finishes, Amazon Rekognition publishes a completion status to the Amazon Simple Notification
 * Service topic registered in the initial call to <code>StartlabelDetection</code>. To get the results of the label
 * detection operation, first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If
 * so, call and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartLabelDetection</code>>
 *
 * <code>GetLabelDetection</code> returns an array of detected labels (<code>Labels</code>) sorted by the time the labels
 * were detected. You can also sort by the label name by specifying <code>NAME</code> for the <code>SortBy</code> input
 *
 * parameter>
 *
 * The labels returned include the label name, the percentage confidence in the accuracy of the detected label, and the
 * time the label was detected in the
 *
 * video>
 *
 * Use MaxResults parameter to limit the number of labels returned. If there are more results than specified in
 * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token for
 * getting the next set of results. To get the next page of results, call <code>GetlabelDetection</code> and populate the
 * <code>NextToken</code> request parameter with the token value returned from the previous call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLabelDetectionResponse * RekognitionClient::getLabelDetection(const GetLabelDetectionRequest &request)
{
    return qobject_cast<GetLabelDetectionResponse *>(send(request));
}

/**
 * Gets the person tracking results of a Rekognition Video analysis started by
 *
 * >
 *
 * The person detection operation is started by a call to <code>StartPersonTracking</code> which returns a job identifier
 * (<code>JobId</code>). When the person detection operation finishes, Rekognition Video publishes a completion status to
 * the Amazon Simple Notification Service topic registered in the initial call to
 *
 * <code>StartPersonTracking</code>>
 *
 * To get the results of the person tracking operation, first check that the status value published to the Amazon SNS topic
 * is <code>SUCCEEDED</code>. If so, call and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartPersonTracking</code>>
 *
 * <code>GetPersonTracking</code> returns an array, <code>Persons</code>, of tracked persons and the time(s) they were
 * tracked in the video.
 *
 * </p
 *
 * By default, the array is sorted by the time(s) a person is tracked in the video. You can sort by tracked persons by
 * specifying <code>INDEX</code> for the <code>SortBy</code> input
 *
 * parameter>
 *
 * Use the <code>MaxResults</code> parameter to limit the number of items returned. If there are more results than
 * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a
 * pagination token for getting the next set of results. To get the next page of results, call
 * <code>GetPersonTracking</code> and populate the <code>NextToken</code> request parameter with the token value returned
 * from the previous call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPersonTrackingResponse * RekognitionClient::getPersonTracking(const GetPersonTrackingRequest &request)
{
    return qobject_cast<GetPersonTrackingResponse *>(send(request));
}

/**
 * Detects faces in the input image and adds them to the specified collection.
 *
 * </p
 *
 * Amazon Rekognition does not save the actual faces detected. Instead, the underlying detection algorithm first detects
 * the faces in the input image, and for each face extracts facial features into a feature vector, and stores it in the
 * back-end database. Amazon Rekognition uses feature vectors when performing face match and search operations using the
 * and
 *
 * operations>
 *
 * If you are using version 1.0 of the face detection model, <code>IndexFaces</code> indexes the 15 largest faces in the
 * input image. Later versions of the face detection model index the 100 largest faces in the input image. To determine
 * which version of the model you are using, check the the value of <code>FaceModelVersion</code> in the response from
 * <code>IndexFaces</code>. For more information, see
 *
 * <a>face-detection-model</a>>
 *
 * If you provide the optional <code>ExternalImageID</code> for the input image you provided, Amazon Rekognition associates
 * this ID with all faces that it detects. When you call the operation, the response returns the external ID. You can use
 * this external image ID to create a client-side index to associate the faces with each image. You can then use the index
 * to find all faces in an image.
 *
 * </p
 *
 * In response, the operation returns an array of metadata for all detected faces. This includes, the bounding box of the
 * detected face, confidence value (indicating the bounding box contains a face), a face ID assigned by the service for
 * each face that is detected and stored, and an image ID assigned by the service for the input image. If you request all
 * facial attributes (using the <code>detectionAttributes</code> parameter, Amazon Rekognition returns detailed facial
 * attributes such as facial landmarks (for example, location of eye and mount) and other facial attributes such gender. If
 * you provide the same image, specify the same collection, and use the same external ID in the <code>IndexFaces</code>
 * operation, Amazon Rekognition doesn't save duplicate face metadata.
 *
 * </p
 *
 * The input image is passed either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:IndexFaces</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
IndexFacesResponse * RekognitionClient::indexFaces(const IndexFacesRequest &request)
{
    return qobject_cast<IndexFacesResponse *>(send(request));
}

/**
 * Returns list of collection IDs in your account. If the result is truncated, the response also provides a
 * <code>NextToken</code> that you can use in the subsequent request to fetch the next set of collection
 *
 * IDs>
 *
 * For an example, see
 *
 * <a>list-collection-procedure</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:ListCollections</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCollectionsResponse * RekognitionClient::listCollections(const ListCollectionsRequest &request)
{
    return qobject_cast<ListCollectionsResponse *>(send(request));
}

/**
 * Returns metadata for faces in the specified collection. This metadata includes information such as the bounding box
 * coordinates, the confidence (that the bounding box contains a face), and face ID. For an example, see
 * <a>list-faces-in-collection-procedure</a>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:ListFaces</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFacesResponse * RekognitionClient::listFaces(const ListFacesRequest &request)
{
    return qobject_cast<ListFacesResponse *>(send(request));
}

/**
 * Gets a list of stream processors that you have created with .
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStreamProcessorsResponse * RekognitionClient::listStreamProcessors(const ListStreamProcessorsRequest &request)
{
    return qobject_cast<ListStreamProcessorsResponse *>(send(request));
}

/**
 * Returns an array of celebrities recognized in the input image. For more information, see <a>celebrities</a>.
 *
 * </p
 *
 * <code>RecognizeCelebrities</code> returns the 100 largest faces in the image. It lists recognized celebrities in the
 * <code>CelebrityFaces</code> array and unrecognized faces in the <code>UnrecognizedFaces</code> array.
 * <code>RecognizeCelebrities</code> doesn't return celebrities whose faces are not amongst the largest 100 faces in the
 *
 * image>
 *
 * For each celebrity recognized, the <code>RecognizeCelebrities</code> returns a <code>Celebrity</code> object. The
 * <code>Celebrity</code> object contains the celebrity name, ID, URL links to additional information, match confidence,
 * and a <code>ComparedFace</code> object that you can use to locate the celebrity's face on the
 *
 * image>
 *
 * Rekognition does not retain information about which images a celebrity has been recognized in. Your application must
 * store this information and use the <code>Celebrity</code> ID property as a unique identifier for the celebrity. If you
 * don't store the celebrity name or additional information URLs returned by <code>RecognizeCelebrities</code>, you will
 * need the ID to identify the celebrity in a call to the
 *
 * operation>
 *
 * You pass the imput image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * </p
 *
 * For an example, see
 *
 * <a>celebrities-procedure-image</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:RecognizeCelebrities</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RecognizeCelebritiesResponse * RekognitionClient::recognizeCelebrities(const RecognizeCelebritiesRequest &request)
{
    return qobject_cast<RecognizeCelebritiesResponse *>(send(request));
}

/**
 * For a given input face ID, searches for matching faces in the collection the face belongs to. You get a face ID when you
 * add a face to the collection using the <a>IndexFaces</a> operation. The operation compares the features of the input
 * face with faces in the specified collection.
 *
 * </p <note>
 *
 * You can also search faces without indexing faces by using the <code>SearchFacesByImage</code>
 *
 * operation> </note>
 *
 * The operation response returns an array of faces that match, ordered by similarity score with the highest similarity
 * first. More specifically, it is an array of metadata for each face match that is found. Along with the metadata, the
 * response also includes a <code>confidence</code> value for each face match, indicating the confidence that the specific
 * face matches the input face.
 *
 * </p
 *
 * For an example, see
 *
 * <a>search-face-with-id-procedure</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:SearchFaces</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchFacesResponse * RekognitionClient::searchFaces(const SearchFacesRequest &request)
{
    return qobject_cast<SearchFacesResponse *>(send(request));
}

/**
 * For a given input image, first detects the largest face in the image, and then searches the specified collection for
 * matching faces. The operation compares the features of the input face with faces in the specified collection.
 *
 * </p <note>
 *
 * To search for all faces in an input image, you might first call the operation, and then use the face IDs returned in
 * subsequent calls to the operation.
 *
 * </p
 *
 * You can also call the <code>DetectFaces</code> operation and use the bounding boxes in the response to make face crops,
 * which then you can pass in to the <code>SearchFacesByImage</code> operation.
 *
 * </p </note>
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the Amazon CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * </p
 *
 * The response returns an array of faces that match, ordered by similarity score with the highest similarity first. More
 * specifically, it is an array of metadata for each face match found. Along with the metadata, the response also includes
 * a <code>similarity</code> indicating how similar the face is to the input face. In the response, the operation also
 * returns the bounding box (and a confidence level that the bounding box contains a face) of the face that Amazon
 * Rekognition used for the input image.
 *
 * </p
 *
 * For an example, see
 *
 * <a>search-face-with-image-procedure</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:SearchFacesByImage</code>
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchFacesByImageResponse * RekognitionClient::searchFacesByImage(const SearchFacesByImageRequest &request)
{
    return qobject_cast<SearchFacesByImageResponse *>(send(request));
}

/**
 * Starts asynchronous recognition of celebrities in a stored
 *
 * video>
 *
 * Rekognition Video can detect celebrities in a video must be stored in an Amazon S3 bucket. Use <a>Video</a> to specify
 * the bucket name and the filename of the video. <code>StartCelebrityRecognition</code> returns a job identifier
 * (<code>JobId</code>) which you use to get the results of the analysis. When celebrity recognition analysis is finished,
 * Rekognition Video publishes a completion status to the Amazon Simple Notification Service topic that you specify in
 * <code>NotificationChannel</code>. To get the results of the celebrity recognition analysis, first check that the status
 * value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call and pass the job identifier
 * (<code>JobId</code>) from the initial call to <code>StartCelebrityRecognition</code>. For more information, see
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartCelebrityRecognitionResponse * RekognitionClient::startCelebrityRecognition(const StartCelebrityRecognitionRequest &request)
{
    return qobject_cast<StartCelebrityRecognitionResponse *>(send(request));
}

/**
 * Starts asynchronous detection of explicit or suggestive adult content in a stored
 *
 * video>
 *
 * Rekognition Video can moderate content in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket
 * name and the filename of the video. <code>StartContentModeration</code> returns a job identifier (<code>JobId</code>)
 * which you use to get the results of the analysis. When content moderation analysis is finished, Rekognition Video
 * publishes a completion status to the Amazon Simple Notification Service topic that you specify in
 *
 * <code>NotificationChannel</code>>
 *
 * To get the results of the content moderation analysis, first check that the status value published to the Amazon SNS
 * topic is <code>SUCCEEDED</code>. If so, call and pass the job identifier (<code>JobId</code>) from the initial call to
 * <code>StartContentModeration</code>. For more information, see
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartContentModerationResponse * RekognitionClient::startContentModeration(const StartContentModerationRequest &request)
{
    return qobject_cast<StartContentModerationResponse *>(send(request));
}

/**
 * Starts asynchronous detection of faces in a stored
 *
 * video>
 *
 * Rekognition Video can detect faces in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name
 * and the filename of the video. <code>StartFaceDetection</code> returns a job identifier (<code>JobId</code>) that you
 * use to get the results of the operation. When face detection is finished, Rekognition Video publishes a completion
 * status to the Amazon Simple Notification Service topic that you specify in <code>NotificationChannel</code>. To get the
 * results of the label detection operation, first check that the status value published to the Amazon SNS topic is
 * <code>SUCCEEDED</code>. If so, call and pass the job identifier (<code>JobId</code>) from the initial call to
 * <code>StartFaceDetection</code>. For more information, see
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartFaceDetectionResponse * RekognitionClient::startFaceDetection(const StartFaceDetectionRequest &request)
{
    return qobject_cast<StartFaceDetectionResponse *>(send(request));
}

/**
 * Starts the asynchronous search for faces in a collection that match the faces of persons detected in a stored
 *
 * video>
 *
 * The video must be stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename of the
 * video. <code>StartFaceSearch</code> returns a job identifier (<code>JobId</code>) which you use to get the search
 * results once the search has completed. When searching is finished, Rekognition Video publishes a completion status to
 * the Amazon Simple Notification Service topic that you specify in <code>NotificationChannel</code>. To get the search
 * results, first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call and
 * pass the job identifier (<code>JobId</code>) from the initial call to <code>StartFaceSearch</code>. For more
 * information, see
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartFaceSearchResponse * RekognitionClient::startFaceSearch(const StartFaceSearchRequest &request)
{
    return qobject_cast<StartFaceSearchResponse *>(send(request));
}

/**
 * Starts asynchronous detection of labels in a stored
 *
 * video>
 *
 * Rekognition Video can detect labels in a video. Labels are instances of real-world entities. This includes objects like
 * flower, tree, and table; events like wedding, graduation, and birthday party; concepts like landscape, evening, and
 * nature; and activities like a person getting out of a car or a person
 *
 * skiing>
 *
 * The video must be stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename of the
 * video. <code>StartLabelDetection</code> returns a job identifier (<code>JobId</code>) which you use to get the results
 * of the operation. When label detection is finished, Rekognition Video publishes a completion status to the Amazon Simple
 * Notification Service topic that you specify in
 *
 * <code>NotificationChannel</code>>
 *
 * To get the results of the label detection operation, first check that the status value published to the Amazon SNS topic
 * is <code>SUCCEEDED</code>. If so, call and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartLabelDetectionResponse * RekognitionClient::startLabelDetection(const StartLabelDetectionRequest &request)
{
    return qobject_cast<StartLabelDetectionResponse *>(send(request));
}

/**
 * Starts the asynchronous tracking of persons in a stored
 *
 * video>
 *
 * Rekognition Video can track persons in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket
 * name and the filename of the video. <code>StartPersonTracking</code> returns a job identifier (<code>JobId</code>) which
 * you use to get the results of the operation. When label detection is finished, Amazon Rekognition publishes a completion
 * status to the Amazon Simple Notification Service topic that you specify in <code>NotificationChannel</code>.
 *
 * </p
 *
 * To get the results of the person detection operation, first check that the status value published to the Amazon SNS
 * topic is <code>SUCCEEDED</code>. If so, call and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartPersonTrackingResponse * RekognitionClient::startPersonTracking(const StartPersonTrackingRequest &request)
{
    return qobject_cast<StartPersonTrackingResponse *>(send(request));
}

/**
 * Starts processing a stream processor. You create a stream processor by calling . To tell
 * <code>StartStreamProcessor</code> which stream processor to start, use the value of the <code>Name</code> field
 * specified in the call to
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartStreamProcessorResponse * RekognitionClient::startStreamProcessor(const StartStreamProcessorRequest &request)
{
    return qobject_cast<StartStreamProcessorResponse *>(send(request));
}

/**
 * Stops a running stream processor that was created by
 *
 * @param  request Request to send to Amazon Rekognition.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopStreamProcessorResponse * RekognitionClient::stopStreamProcessor(const StopStreamProcessorRequest &request)
{
    return qobject_cast<StopStreamProcessorResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  RekognitionClientPrivate
 *
 * @brief  Private implementation for RekognitionClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RekognitionClientPrivate object.
 *
 * @param  q  Pointer to this object's public RekognitionClient instance.
 */
RekognitionClientPrivate::RekognitionClientPrivate(RekognitionClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Rekognition
} // namespace QtAws
