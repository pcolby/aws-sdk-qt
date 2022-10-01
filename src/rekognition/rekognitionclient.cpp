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

#include "rekognitionclient.h"
#include "rekognitionclient_p.h"

#include "core/awssignaturev4.h"
#include "comparefacesrequest.h"
#include "comparefacesresponse.h"
#include "copyprojectversionrequest.h"
#include "copyprojectversionresponse.h"
#include "createcollectionrequest.h"
#include "createcollectionresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createprojectversionrequest.h"
#include "createprojectversionresponse.h"
#include "createstreamprocessorrequest.h"
#include "createstreamprocessorresponse.h"
#include "deletecollectionrequest.h"
#include "deletecollectionresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletefacesrequest.h"
#include "deletefacesresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deleteprojectpolicyrequest.h"
#include "deleteprojectpolicyresponse.h"
#include "deleteprojectversionrequest.h"
#include "deleteprojectversionresponse.h"
#include "deletestreamprocessorrequest.h"
#include "deletestreamprocessorresponse.h"
#include "describecollectionrequest.h"
#include "describecollectionresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describeprojectversionsrequest.h"
#include "describeprojectversionsresponse.h"
#include "describeprojectsrequest.h"
#include "describeprojectsresponse.h"
#include "describestreamprocessorrequest.h"
#include "describestreamprocessorresponse.h"
#include "detectcustomlabelsrequest.h"
#include "detectcustomlabelsresponse.h"
#include "detectfacesrequest.h"
#include "detectfacesresponse.h"
#include "detectlabelsrequest.h"
#include "detectlabelsresponse.h"
#include "detectmoderationlabelsrequest.h"
#include "detectmoderationlabelsresponse.h"
#include "detectprotectiveequipmentrequest.h"
#include "detectprotectiveequipmentresponse.h"
#include "detecttextrequest.h"
#include "detecttextresponse.h"
#include "distributedatasetentriesrequest.h"
#include "distributedatasetentriesresponse.h"
#include "getcelebrityinforequest.h"
#include "getcelebrityinforesponse.h"
#include "getcelebrityrecognitionrequest.h"
#include "getcelebrityrecognitionresponse.h"
#include "getcontentmoderationrequest.h"
#include "getcontentmoderationresponse.h"
#include "getfacedetectionrequest.h"
#include "getfacedetectionresponse.h"
#include "getfacesearchrequest.h"
#include "getfacesearchresponse.h"
#include "getlabeldetectionrequest.h"
#include "getlabeldetectionresponse.h"
#include "getpersontrackingrequest.h"
#include "getpersontrackingresponse.h"
#include "getsegmentdetectionrequest.h"
#include "getsegmentdetectionresponse.h"
#include "gettextdetectionrequest.h"
#include "gettextdetectionresponse.h"
#include "indexfacesrequest.h"
#include "indexfacesresponse.h"
#include "listcollectionsrequest.h"
#include "listcollectionsresponse.h"
#include "listdatasetentriesrequest.h"
#include "listdatasetentriesresponse.h"
#include "listdatasetlabelsrequest.h"
#include "listdatasetlabelsresponse.h"
#include "listfacesrequest.h"
#include "listfacesresponse.h"
#include "listprojectpoliciesrequest.h"
#include "listprojectpoliciesresponse.h"
#include "liststreamprocessorsrequest.h"
#include "liststreamprocessorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putprojectpolicyrequest.h"
#include "putprojectpolicyresponse.h"
#include "recognizecelebritiesrequest.h"
#include "recognizecelebritiesresponse.h"
#include "searchfacesrequest.h"
#include "searchfacesresponse.h"
#include "searchfacesbyimagerequest.h"
#include "searchfacesbyimageresponse.h"
#include "startcelebrityrecognitionrequest.h"
#include "startcelebrityrecognitionresponse.h"
#include "startcontentmoderationrequest.h"
#include "startcontentmoderationresponse.h"
#include "startfacedetectionrequest.h"
#include "startfacedetectionresponse.h"
#include "startfacesearchrequest.h"
#include "startfacesearchresponse.h"
#include "startlabeldetectionrequest.h"
#include "startlabeldetectionresponse.h"
#include "startpersontrackingrequest.h"
#include "startpersontrackingresponse.h"
#include "startprojectversionrequest.h"
#include "startprojectversionresponse.h"
#include "startsegmentdetectionrequest.h"
#include "startsegmentdetectionresponse.h"
#include "startstreamprocessorrequest.h"
#include "startstreamprocessorresponse.h"
#include "starttextdetectionrequest.h"
#include "starttextdetectionresponse.h"
#include "stopprojectversionrequest.h"
#include "stopprojectversionresponse.h"
#include "stopstreamprocessorrequest.h"
#include "stopstreamprocessorresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatasetentriesrequest.h"
#include "updatedatasetentriesresponse.h"
#include "updatestreamprocessorrequest.h"
#include "updatestreamprocessorresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Rekognition
 * \brief Contains classess for accessing Amazon Rekognition.
 *
 * \inmodule QtAwsRekognition
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::RekognitionClient
 * \brief The RekognitionClient class provides access to the Amazon Rekognition service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRekognition
 *
 *  This is the API Reference for <a href="https://docs.aws.amazon.com/rekognition/latest/dg/images.html">Amazon Rekognition
 *  Image</a>, <a href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/what-is.html">Amazon Rekognition
 *  Custom Labels</a>, <a href="https://docs.aws.amazon.com/rekognition/latest/dg/video.html">Amazon Rekognition Stored
 *  Video</a>, <a href="https://docs.aws.amazon.com/rekognition/latest/dg/streaming-video.html">Amazon Rekognition Streaming
 *  Video</a>. It provides descriptions of actions, data types, common parameters, and common
 * 
 *  errors>
 * 
 *  <b>Amazon Rekognition Image</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CompareFaces.html">CompareFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateCollection.html">CreateCollection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteCollection.html">DeleteCollection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteFaces.html">DeleteFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeCollection.html">DescribeCollection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectFaces.html">DetectFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectLabels.html">DetectLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectModerationLabels.html">DetectModerationLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectProtectiveEquipment.html">DetectProtectiveEquipment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectText.html">DetectText</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetCelebrityInfo.html">GetCelebrityInfo</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_IndexFaces.html">IndexFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListCollections.html">ListCollections</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListFaces.html">ListFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_RecognizeCelebrities.html">RecognizeCelebrities</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchFaces.html">SearchFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchFacesByImage.html">SearchFacesByImage</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Amazon Rekognition Custom Labels</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CopyProjectVersion.html">CopyProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateDataset.html">CreateDataset</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateProject.html">CreateProject</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateProjectVersion.html">CreateProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteDataset.html">DeleteDataset</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProject.html">DeleteProject</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProjectPolicy.html">DeleteProjectPolicy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProjectVersion.html">DeleteProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeDataset.html">DescribeDataset</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeProjects.html">DescribeProjects</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeProjectVersions.html">DescribeProjectVersions</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectCustomLabels.html">DetectCustomLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DistributeDatasetEntries.html">DistributeDatasetEntries</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListDatasetEntries.html">ListDatasetEntries</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListDatasetLabels.html">ListDatasetLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListProjectPolicies.html">ListProjectPolicies</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_PutProjectPolicy.html">PutProjectPolicy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartProjectVersion.html">StartProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StopProjectVersion.html">StopProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_UpdateDatasetEntries.html">UpdateDatasetEntries</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Amazon Rekognition Video Stored Video</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetCelebrityRecognition.html">GetCelebrityRecognition</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetContentModeration.html">GetContentModeration</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetFaceDetection.html">GetFaceDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetFaceSearch.html">GetFaceSearch</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetLabelDetection.html">GetLabelDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetPersonTracking.html">GetPersonTracking</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetSegmentDetection.html">GetSegmentDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetTextDetection.html">GetTextDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartCelebrityRecognition.html">StartCelebrityRecognition</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartContentModeration.html">StartContentModeration</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartFaceDetection.html">StartFaceDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartFaceSearch.html">StartFaceSearch</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartLabelDetection.html">StartLabelDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartPersonTracking.html">StartPersonTracking</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartSegmentDetection.html">StartSegmentDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartTextDetection.html">StartTextDetection</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Amazon Rekognition Video Streaming Video</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateStreamProcessor.html">CreateStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteStreamProcessor.html">DeleteStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeStreamProcessor.html">DescribeStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListStreamProcessors.html">ListStreamProcessors</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartStreamProcessor.html">StartStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StopStreamProcessor.html">StopStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_UpdateStreamProcessor.html">UpdateStreamProcessor</a>
 */

/*!
 * \brief Constructs a RekognitionClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RekognitionClient::RekognitionClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RekognitionClientPrivate(this), parent)
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

/*!
 * \overload RekognitionClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RekognitionClient::RekognitionClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RekognitionClientPrivate(this), parent)
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

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CompareFacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Compares a face in the <i>source</i> input image with each of the 100 largest faces detected in the <i>target</i> input
 * image.
 *
 * </p
 *
 * If the source image contains multiple faces, the service detects the largest face and compares it with each face
 * detected in the target image.
 *
 * </p <note>
 *
 * CompareFaces uses machine learning algorithms, which are probabilistic. A false negative is an incorrect prediction that
 * a face in the target image has a low similarity confidence score when compared to the face in the source image. To
 * reduce the probability of false negatives, we recommend that you compare the target image against multiple source
 * images. If you plan to use <code>CompareFaces</code> to make a decision that impacts an individual's rights, privacy, or
 * access to services, we recommend that you pass the result to a human for review and further validation before taking
 *
 * action> </note>
 *
 * You pass the input and target images either as base64-encoded image bytes or as references to images in an Amazon S3
 * bucket. If you use the AWS CLI to call Amazon Rekognition operations, passing image bytes isn't supported. The image
 * must be formatted as a PNG or JPEG file.
 *
 * </p
 *
 * In response, the operation returns an array of face matches ordered by similarity score in descending order. For each
 * face match, the response provides a bounding box of the face, facial landmarks, pose details (pitch, roll, and yaw),
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
 * The <code>QualityFilter</code> input parameter allows you to filter out detected faces that don’t meet a required
 * quality bar. The quality bar is based on a variety of common use cases. Use <code>QualityFilter</code> to set the
 * quality bar by specifying <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>. If you do not want to filter
 * detected faces, specify <code>NONE</code>. The default value is <code>NONE</code>.
 *
 * </p
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
 * For an example, see Comparing Faces in Images in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:CompareFaces</code>
 */
CompareFacesResponse * RekognitionClient::compareFaces(const CompareFacesRequest &request)
{
    return qobject_cast<CompareFacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CopyProjectVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies a version of an Amazon Rekognition Custom Labels model from a source project to a destination project. The source
 * and destination projects can be in different AWS accounts but must be in the same AWS Region. You can't copy a model to
 * another AWS service.
 *
 * </p
 *
 * To copy a model version to a different AWS account, you need to create a resource-based policy known as a <i>project
 * policy</i>. You attach the project policy to the source project by calling <a>PutProjectPolicy</a>. The project policy
 * gives permission to copy the model version from a trusting AWS account to a trusted
 *
 * account>
 *
 * For more information creating and attaching a project policy, see Attaching a project policy (SDK) in the <i>Amazon
 * Rekognition Custom Labels Developer Guide</i>.
 *
 * </p
 *
 * If you are copying a model version to a project in the same AWS account, you don't need to create a project
 *
 * policy> <note>
 *
 * To copy a model, the destination project, source project, and source model version must already
 *
 * exist> </note>
 *
 * Copying a model version takes a while to complete. To get the current status, call <a>DescribeProjectVersions</a> and
 * check the value of <code>Status</code> in the <a>ProjectVersionDescription</a> object. The copy operation has finished
 * when the value of <code>Status</code> is
 */
CopyProjectVersionResponse * RekognitionClient::copyProjectVersion(const CopyProjectVersionRequest &request)
{
    return qobject_cast<CopyProjectVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CreateCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a collection in an AWS Region. You can add faces to the collection using the <a>IndexFaces</a> operation.
 *
 * </p
 *
 * For example, you might create collections, one for each of your application users. A user can then index faces using the
 * <code>IndexFaces</code> operation and persist results in a specific collection. Then, a user can search the collection
 * for faces in the user-specific container.
 *
 * </p
 *
 * When you create a collection, it is associated with the latest version of the face model
 *
 * version> <note>
 *
 * Collection names are
 *
 * case-sensitive> </note>
 *
 * This operation requires permissions to perform the <code>rekognition:CreateCollection</code> action. If you want to tag
 * your collection, you also require permission to perform the <code>rekognition:TagResource</code>
 */
CreateCollectionResponse * RekognitionClient::createCollection(const CreateCollectionRequest &request)
{
    return qobject_cast<CreateCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Rekognition Custom Labels dataset. You can create a dataset by using an Amazon Sagemaker format
 * manifest file or by copying an existing Amazon Rekognition Custom Labels
 *
 * dataset>
 *
 * To create a training dataset for a project, specify <code>train</code> for the value of <code>DatasetType</code>. To
 * create the test dataset for a project, specify <code>test</code> for the value of <code>DatasetType</code>.
 *
 * </p
 *
 * The response from <code>CreateDataset</code> is the Amazon Resource Name (ARN) for the dataset. Creating a dataset takes
 * a while to complete. Use <a>DescribeDataset</a> to check the current status. The dataset created successfully if the
 * value of <code>Status</code> is <code>CREATE_COMPLETE</code>.
 *
 * </p
 *
 * To check if any non-terminal errors occurred, call <a>ListDatasetEntries</a> and check for the presence of
 * <code>errors</code> lists in the JSON
 *
 * Lines>
 *
 * Dataset creation fails if a terminal error occurs (<code>Status</code> = <code>CREATE_FAILED</code>). Currently, you
 * can't access the terminal error information.
 *
 * </p
 *
 * For more information, see Creating dataset in the <i>Amazon Rekognition Custom Labels Developer
 *
 * Guide</i>>
 *
 * This operation requires permissions to perform the <code>rekognition:CreateDataset</code> action. If you want to copy an
 * existing dataset, you also require permission to perform the <code>rekognition:ListDatasetEntries</code>
 */
CreateDatasetResponse * RekognitionClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Rekognition Custom Labels project. A project is a group of resources (datasets, model versions)
 * that you use to create and manage Amazon Rekognition Custom Labels models.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:CreateProject</code>
 */
CreateProjectResponse * RekognitionClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CreateProjectVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of a model and begins training. Models are managed as part of an Amazon Rekognition Custom Labels
 * project. The response from <code>CreateProjectVersion</code> is an Amazon Resource Name (ARN) for the version of the
 * model.
 *
 * </p
 *
 * Training uses the training and test datasets associated with the project. For more information, see Creating training
 * and test dataset in the <i>Amazon Rekognition Custom Labels Developer Guide</i>.
 *
 * </p <note>
 *
 * You can train a model in a project that doesn't have associated datasets by specifying manifest files in the
 * <code>TrainingData</code> and <code>TestingData</code> fields.
 *
 * </p
 *
 * If you open the console after training a model with manifest files, Amazon Rekognition Custom Labels creates the
 * datasets for you using the most recent manifest files. You can no longer train a model version for the project by
 * specifying manifest files.
 *
 * </p
 *
 * Instead of training with a project without associated datasets, we recommend that you use the manifest files to create
 * training and test datasets for the
 *
 * project> </note>
 *
 * Training takes a while to complete. You can get the current status by calling <a>DescribeProjectVersions</a>. Training
 * completed successfully if the value of the <code>Status</code> field is
 *
 * <code>TRAINING_COMPLETED</code>>
 *
 * If training fails, see Debugging a failed model training in the <i>Amazon Rekognition Custom Labels</i> developer guide.
 *
 * </p
 *
 * Once training has successfully completed, call <a>DescribeProjectVersions</a> to get the training results and evaluate
 * the model. For more information, see Improving a trained Amazon Rekognition Custom Labels model in the <i>Amazon
 * Rekognition Custom Labels</i> developers guide.
 *
 * </p
 *
 * After evaluating the model, you start the model by calling
 *
 * <a>StartProjectVersion</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:CreateProjectVersion</code>
 */
CreateProjectVersionResponse * RekognitionClient::createProjectVersion(const CreateProjectVersionRequest &request)
{
    return qobject_cast<CreateProjectVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * CreateStreamProcessorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Rekognition stream processor that you can use to detect and recognize faces or to detect labels in a
 * streaming
 *
 * video>
 *
 * Amazon Rekognition Video is a consumer of live video from Amazon Kinesis Video Streams. There are two different settings
 * for stream processors in Amazon Rekognition: detecting faces and detecting
 *
 * labels> <ul> <li>
 *
 * If you are creating a stream processor for detecting faces, you provide as input a Kinesis video stream
 * (<code>Input</code>) and a Kinesis data stream (<code>Output</code>) stream. You also specify the face recognition
 * criteria in <code>Settings</code>. For example, the collection containing faces that you want to recognize. After you
 * have finished analyzing a streaming video, use <a>StopStreamProcessor</a> to stop
 *
 * processing> </li> <li>
 *
 * If you are creating a stream processor to detect labels, you provide as input a Kinesis video stream
 * (<code>Input</code>), Amazon S3 bucket information (<code>Output</code>), and an Amazon SNS topic ARN
 * (<code>NotificationChannel</code>). You can also provide a KMS key ID to encrypt the data sent to your Amazon S3 bucket.
 * You specify what you want to detect in <code>ConnectedHomeSettings</code>, such as people, packages and people, or pets,
 * people, and packages. You can also specify where in the frame you want Amazon Rekognition to monitor with
 * <code>RegionsOfInterest</code>. When you run the <a>StartStreamProcessor</a> operation on a label detection stream
 * processor, you input start and stop information to determine the length of the processing
 *
 * time> </li> </ul>
 *
 * Use <code>Name</code> to assign an identifier for the stream processor. You use <code>Name</code> to manage the stream
 * processor. For example, you can start processing the source video by calling <a>StartStreamProcessor</a> with the
 * <code>Name</code> field.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:CreateStreamProcessor</code> action. If you want to
 * tag your stream processor, you also require permission to perform the <code>rekognition:TagResource</code>
 */
CreateStreamProcessorResponse * RekognitionClient::createStreamProcessor(const CreateStreamProcessorRequest &request)
{
    return qobject_cast<CreateStreamProcessorResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified collection. Note that this operation removes all faces in the collection. For an example, see <a
 * href="https://docs.aws.amazon.com/rekognition/latest/dg/delete-collection-procedure.html">Deleting a
 *
 * collection</a>>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteCollection</code>
 */
DeleteCollectionResponse * RekognitionClient::deleteCollection(const DeleteCollectionRequest &request)
{
    return qobject_cast<DeleteCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon Rekognition Custom Labels dataset. Deleting a dataset might take while. Use
 * <a>DescribeDataset</a> to check the current status. The dataset is still deleting if the value of <code>Status</code> is
 * <code>DELETE_IN_PROGRESS</code>. If you try to access the dataset after it is deleted, you get a
 * <code>ResourceNotFoundException</code> exception.
 *
 * </p
 *
 * You can't delete a dataset while it is creating (<code>Status</code> = <code>CREATE_IN_PROGRESS</code>) or if the
 * dataset is updating (<code>Status</code> =
 *
 * <code>UPDATE_IN_PROGRESS</code>)>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteDataset</code>
 */
DeleteDatasetResponse * RekognitionClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteFacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes faces from a collection. You specify a collection ID and an array of face IDs to remove from the
 *
 * collection>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteFaces</code>
 */
DeleteFacesResponse * RekognitionClient::deleteFaces(const DeleteFacesRequest &request)
{
    return qobject_cast<DeleteFacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Rekognition Custom Labels project. To delete a project you must first delete all models associated
 * with the project. To delete a model, see
 *
 * <a>DeleteProjectVersion</a>>
 *
 * <code>DeleteProject</code> is an asynchronous operation. To check if the project is deleted, call
 * <a>DescribeProjects</a>. The project is deleted when the project no longer appears in the response. Be aware that
 * deleting a given project will also delete any <code>ProjectPolicies</code> associated with that
 *
 * project>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteProject</code> action.
 */
DeleteProjectResponse * RekognitionClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteProjectPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing project
 *
 * policy>
 *
 * To get a list of project policies attached to a project, call <a>ListProjectPolicies</a>. To attach a project policy to
 * a project, call
 */
DeleteProjectPolicyResponse * RekognitionClient::deleteProjectPolicy(const DeleteProjectPolicyRequest &request)
{
    return qobject_cast<DeleteProjectPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteProjectVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Rekognition Custom Labels model.
 *
 * </p
 *
 * You can't delete a model if it is running or if it is training. To check the status of a model, use the
 * <code>Status</code> field returned from <a>DescribeProjectVersions</a>. To stop a running model call
 * <a>StopProjectVersion</a>. If the model is training, wait until it
 *
 * finishes>
 *
 * This operation requires permissions to perform the <code>rekognition:DeleteProjectVersion</code> action.
 */
DeleteProjectVersionResponse * RekognitionClient::deleteProjectVersion(const DeleteProjectVersionRequest &request)
{
    return qobject_cast<DeleteProjectVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DeleteStreamProcessorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the stream processor identified by <code>Name</code>. You assign the value for <code>Name</code> when you create
 * the stream processor with <a>CreateStreamProcessor</a>. You might not be able to use the same name for a stream
 * processor for a few seconds after calling
 */
DeleteStreamProcessorResponse * RekognitionClient::deleteStreamProcessor(const DeleteStreamProcessorRequest &request)
{
    return qobject_cast<DeleteStreamProcessorResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DescribeCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified collection. You can use <code>DescribeCollection</code> to get information, such as the number
 * of faces indexed into a collection and the version of the model used by the collection for face
 *
 * detection>
 *
 * For more information, see Describing a Collection in the Amazon Rekognition Developer
 */
DescribeCollectionResponse * RekognitionClient::describeCollection(const DescribeCollectionRequest &request)
{
    return qobject_cast<DescribeCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Amazon Rekognition Custom Labels dataset. You can get information such as the current status of a dataset
 * and statistics about the images and labels in a dataset.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:DescribeDataset</code>
 */
DescribeDatasetResponse * RekognitionClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DescribeProjectVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists and describes the versions of a model in an Amazon Rekognition Custom Labels project. You can specify up to 10
 * model versions in <code>ProjectVersionArns</code>. If you don't specify a value, descriptions for all model versions in
 * the project are
 *
 * returned>
 *
 * This operation requires permissions to perform the <code>rekognition:DescribeProjectVersions</code>
 */
DescribeProjectVersionsResponse * RekognitionClient::describeProjectVersions(const DescribeProjectVersionsRequest &request)
{
    return qobject_cast<DescribeProjectVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DescribeProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about your Amazon Rekognition Custom Labels projects.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:DescribeProjects</code>
 */
DescribeProjectsResponse * RekognitionClient::describeProjects(const DescribeProjectsRequest &request)
{
    return qobject_cast<DescribeProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DescribeStreamProcessorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about a stream processor created by <a>CreateStreamProcessor</a>. You can get information about the
 * input and output streams, the input parameters for the face recognition being performed, and the current status of the
 * stream
 */
DescribeStreamProcessorResponse * RekognitionClient::describeStreamProcessor(const DescribeStreamProcessorRequest &request)
{
    return qobject_cast<DescribeStreamProcessorResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DetectCustomLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects custom labels in a supplied image by using an Amazon Rekognition Custom Labels model.
 *
 * </p
 *
 * You specify which version of a model version to use by using the <code>ProjectVersionArn</code> input parameter.
 *
 * </p
 *
 * You pass the input image as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If you use
 * the AWS CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be either a PNG
 * or JPEG formatted file.
 *
 * </p
 *
 * For each object that the model version detects on an image, the API returns a (<code>CustomLabel</code>) object in an
 * array (<code>CustomLabels</code>). Each <code>CustomLabel</code> object provides the label name (<code>Name</code>), the
 * level of confidence that the image contains the object (<code>Confidence</code>), and object location information, if it
 * exists, for the label on the image (<code>Geometry</code>).
 *
 * </p
 *
 * To filter labels that are returned, specify a value for <code>MinConfidence</code>.
 * <code>DetectCustomLabelsLabels</code> only returns labels with a confidence that's higher than the specified value. The
 * value of <code>MinConfidence</code> maps to the assumed threshold values created during training. For more information,
 * see <i>Assumed threshold</i> in the Amazon Rekognition Custom Labels Developer Guide. Amazon Rekognition Custom Labels
 * metrics expresses an assumed threshold as a floating point value between 0-1. The range of <code>MinConfidence</code>
 * normalizes the threshold value to a percentage value (0-100). Confidence responses from <code>DetectCustomLabels</code>
 * are also returned as a percentage. You can use <code>MinConfidence</code> to change the precision and recall or your
 * model. For more information, see <i>Analyzing an image</i> in the Amazon Rekognition Custom Labels Developer Guide.
 *
 * </p
 *
 * If you don't specify a value for <code>MinConfidence</code>, <code>DetectCustomLabels</code> returns labels based on the
 * assumed threshold of each
 *
 * label>
 *
 * This is a stateless API operation. That is, the operation does not persist any
 *
 * data>
 *
 * This operation requires permissions to perform the <code>rekognition:DetectCustomLabels</code> action.
 *
 * </p
 *
 * For more information, see <i>Analyzing an image</i> in the Amazon Rekognition Custom Labels Developer Guide.
 */
DetectCustomLabelsResponse * RekognitionClient::detectCustomLabels(const DetectCustomLabelsRequest &request)
{
    return qobject_cast<DetectCustomLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DetectFacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects faces within an image that is provided as
 *
 * input>
 *
 * <code>DetectFaces</code> detects the 100 largest faces in the image. For each face detected, the operation returns face
 * details. These details include a bounding box of the face, a confidence value (that the bounding box contains a face),
 * and a fixed set of attributes such as facial landmarks (for example, coordinates of eye and mouth), presence of beard,
 * sunglasses, and so on.
 *
 * </p
 *
 * The face-detection algorithm is most effective on frontal faces. For non-frontal or obscured faces, the algorithm might
 * not detect the faces or might detect faces with lower confidence.
 *
 * </p
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the AWS CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * </p <note>
 *
 * This is a stateless API operation. That is, the operation does not persist any
 *
 * data> </note>
 *
 * This operation requires permissions to perform the <code>rekognition:DetectFaces</code> action.
 */
DetectFacesResponse * RekognitionClient::detectFaces(const DetectFacesRequest &request)
{
    return qobject_cast<DetectFacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DetectLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects instances of real-world entities within an image (JPEG or PNG) provided as input. This includes objects like
 * flower, tree, and table; events like wedding, graduation, and birthday party; and concepts like landscape, evening, and
 * nature.
 *
 * </p
 *
 * For an example, see Analyzing images stored in an Amazon S3 bucket in the Amazon Rekognition Developer
 *
 * Guide> <note>
 *
 * <code>DetectLabels</code> does not support the detection of activities. However, activity detection is supported for
 * label detection in videos. For more information, see StartLabelDetection in the Amazon Rekognition Developer
 *
 * Guide> </note>
 *
 * You pass the input image as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If you use
 * the AWS CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be either a PNG
 * or JPEG formatted file.
 *
 * </p
 *
 * For each object, scene, and concept the API returns one or more labels. Each label provides the object name, and the
 * level of confidence that the image contains the object. For example, suppose the input image has a lighthouse, the sea,
 * and a rock. The response includes all three labels, one for each object.
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
 * default is 55%. You can also add the <code>MaxLabels</code> parameter to limit the number of labels returned.
 *
 * </p <note>
 *
 * If the object detected is a person, the operation doesn't provide the same facial details that the <a>DetectFaces</a>
 * operation
 *
 * provides> </note>
 *
 * <code>DetectLabels</code> returns bounding boxes for instances of common object labels in an array of <a>Instance</a>
 * objects. An <code>Instance</code> object contains a <a>BoundingBox</a> object, for the location of the label on the
 * image. It also includes the confidence by which the bounding box was
 *
 * detected>
 *
 * <code>DetectLabels</code> also returns a hierarchical taxonomy of detected labels. For example, a detected car might be
 * assigned the label <i>car</i>. The label <i>car</i> has two parent labels: <i>Vehicle</i> (its parent) and
 * <i>Transportation</i> (its grandparent). The response returns the entire list of ancestors for a label. Each ancestor is
 * a unique label in the response. In the previous example, <i>Car</i>, <i>Vehicle</i>, and <i>Transportation</i> are
 * returned as unique labels in the response.
 *
 * </p
 *
 * This is a stateless API operation. That is, the operation does not persist any
 *
 * data>
 *
 * This operation requires permissions to perform the <code>rekognition:DetectLabels</code> action.
 */
DetectLabelsResponse * RekognitionClient::detectLabels(const DetectLabelsRequest &request)
{
    return qobject_cast<DetectLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DetectModerationLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects unsafe content in a specified JPEG or PNG format image. Use <code>DetectModerationLabels</code> to moderate
 * images depending on your requirements. For example, you might want to filter images that contain nudity, but not images
 * containing suggestive
 *
 * content>
 *
 * To filter images, use the labels returned by <code>DetectModerationLabels</code> to determine which types of content are
 *
 * appropriate>
 *
 * For information about moderation labels, see Detecting Unsafe Content in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the AWS CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 */
DetectModerationLabelsResponse * RekognitionClient::detectModerationLabels(const DetectModerationLabelsRequest &request)
{
    return qobject_cast<DetectModerationLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DetectProtectiveEquipmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects Personal Protective Equipment (PPE) worn by people detected in an image. Amazon Rekognition can detect the
 * following types of
 *
 * PPE> <ul> <li>
 *
 * Face
 *
 * cove> </li> <li>
 *
 * Hand
 *
 * cove> </li> <li>
 *
 * Head
 *
 * cove> </li> </ul>
 *
 * You pass the input image as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. The image
 * must be either a PNG or JPG formatted file.
 *
 * </p
 *
 * <code>DetectProtectiveEquipment</code> detects PPE worn by up to 15 persons detected in an
 *
 * image>
 *
 * For each person detected in the image the API returns an array of body parts (face, head, left-hand, right-hand). For
 * each body part, an array of detected items of PPE is returned, including an indicator of whether or not the PPE covers
 * the body part. The API returns the confidence it has in each detection (person, PPE, body part and body part coverage).
 * It also returns a bounding box (<a>BoundingBox</a>) for each detected person and each detected item of PPE.
 *
 * </p
 *
 * You can optionally request a summary of detected PPE items with the <code>SummarizationAttributes</code> input
 * parameter. The summary provides the following information.
 *
 * </p <ul> <li>
 *
 * The persons detected as wearing all of the types of PPE that you
 *
 * specify> </li> <li>
 *
 * The persons detected as not wearing all of the types PPE that you
 *
 * specify> </li> <li>
 *
 * The persons detected where PPE adornment could not be determined.
 *
 * </p </li> </ul>
 *
 * This is a stateless API operation. That is, the operation does not persist any
 *
 * data>
 *
 * This operation requires permissions to perform the <code>rekognition:DetectProtectiveEquipment</code> action.
 */
DetectProtectiveEquipmentResponse * RekognitionClient::detectProtectiveEquipment(const DetectProtectiveEquipmentRequest &request)
{
    return qobject_cast<DetectProtectiveEquipmentResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DetectTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * The <code>DetectText</code> operation returns text in an array of <a>TextDetection</a> elements,
 * <code>TextDetections</code>. Each <code>TextDetection</code> element provides information about a single word or line of
 * text that was detected in the image.
 *
 * </p
 *
 * A word is one or more script characters that are not separated by spaces. <code>DetectText</code> can detect up to 100
 * words in an
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
 * To be detected, text must be within +/- 90 degrees orientation of the horizontal
 *
 * axis>
 *
 * For more information, see Detecting text in the Amazon Rekognition Developer
 */
DetectTextResponse * RekognitionClient::detectText(const DetectTextRequest &request)
{
    return qobject_cast<DetectTextResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * DistributeDatasetEntriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Distributes the entries (images) in a training dataset across the training dataset and the test dataset for a project.
 * <code>DistributeDatasetEntries</code> moves 20% of the training dataset images to the test dataset. An entry is a JSON
 * Line that describes an image.
 *
 * </p
 *
 * You supply the Amazon Resource Names (ARN) of a project's training dataset and test dataset. The training dataset must
 * contain the images that you want to split. The test dataset must be empty. The datasets must belong to the same project.
 * To create training and test datasets for a project, call
 *
 * <a>CreateDataset</a>>
 *
 * Distributing a dataset takes a while to complete. To check the status call <code>DescribeDataset</code>. The operation
 * is complete when the <code>Status</code> field for the training dataset and the test dataset is
 * <code>UPDATE_COMPLETE</code>. If the dataset split fails, the value of <code>Status</code> is
 *
 * <code>UPDATE_FAILED</code>>
 *
 * This operation requires permissions to perform the <code>rekognition:DistributeDatasetEntries</code>
 */
DistributeDatasetEntriesResponse * RekognitionClient::distributeDatasetEntries(const DistributeDatasetEntriesRequest &request)
{
    return qobject_cast<DistributeDatasetEntriesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetCelebrityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the name and additional information about a celebrity based on their Amazon Rekognition ID. The additional
 * information is returned as an array of URLs. If there is no additional information about the celebrity, this list is
 *
 * empty>
 *
 * For more information, see Getting information about a celebrity in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:GetCelebrityInfo</code> action.
 */
GetCelebrityInfoResponse * RekognitionClient::getCelebrityInfo(const GetCelebrityInfoRequest &request)
{
    return qobject_cast<GetCelebrityInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetCelebrityRecognitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the celebrity recognition results for a Amazon Rekognition Video analysis started by
 *
 * <a>StartCelebrityRecognition</a>>
 *
 * Celebrity recognition in a video is an asynchronous operation. Analysis is started by a call to
 * <a>StartCelebrityRecognition</a> which returns a job identifier (<code>JobId</code>).
 *
 * </p
 *
 * When the celebrity recognition operation finishes, Amazon Rekognition Video publishes a completion status to the Amazon
 * Simple Notification Service topic registered in the initial call to <code>StartCelebrityRecognition</code>. To get the
 * results of the celebrity recognition analysis, first check that the status value published to the Amazon SNS topic is
 * <code>SUCCEEDED</code>. If so, call <code>GetCelebrityDetection</code> and pass the job identifier (<code>JobId</code>)
 * from the initial call to <code>StartCelebrityDetection</code>.
 *
 * </p
 *
 * For more information, see Working With Stored Videos in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * <code>GetCelebrityRecognition</code> returns detected celebrities and the time(s) they are detected in an array
 * (<code>Celebrities</code>) of <a>CelebrityRecognition</a> objects. Each <code>CelebrityRecognition</code> contains
 * information about the celebrity in a <a>CelebrityDetail</a> object and the time, <code>Timestamp</code>, the celebrity
 * was detected. This <a>CelebrityDetail</a> object stores information about the detected celebrity's face attributes, a
 * face bounding box, known gender, the celebrity's name, and a confidence
 *
 * estimate> <note>
 *
 * <code>GetCelebrityRecognition</code> only returns the default facial attributes (<code>BoundingBox</code>,
 * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The
 * <code>BoundingBox</code> field only applies to the detected face instance. The other facial attributes listed in the
 * <code>Face</code> object of the following response syntax are not returned. For more information, see FaceDetail in the
 * Amazon Rekognition Developer Guide.
 *
 * </p </note>
 *
 * By default, the <code>Celebrities</code> array is sorted by time (milliseconds from the start of the video). You can
 * also sort the array by celebrity by specifying the value <code>ID</code> in the <code>SortBy</code> input
 *
 * parameter>
 *
 * The <code>CelebrityDetail</code> object includes the celebrity identifer and additional information urls. If you don't
 * store the additional information urls, you can get them later by calling <a>GetCelebrityInfo</a> with the celebrity
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
 */
GetCelebrityRecognitionResponse * RekognitionClient::getCelebrityRecognition(const GetCelebrityRecognitionRequest &request)
{
    return qobject_cast<GetCelebrityRecognitionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetContentModerationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the inappropriate, unwanted, or offensive content analysis results for a Amazon Rekognition Video analysis started
 * by <a>StartContentModeration</a>. For a list of moderation labels in Amazon Rekognition, see <a
 * href="https://docs.aws.amazon.com/rekognition/latest/dg/moderation.html#moderation-api">Using the image and video
 * moderation
 *
 * APIs</a>>
 *
 * Amazon Rekognition Video inappropriate or offensive content detection in a stored video is an asynchronous operation.
 * You start analysis by calling <a>StartContentModeration</a> which returns a job identifier (<code>JobId</code>). When
 * analysis finishes, Amazon Rekognition Video publishes a completion status to the Amazon Simple Notification Service
 * topic registered in the initial call to <code>StartContentModeration</code>. To get the results of the content analysis,
 * first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
 * <code>GetContentModeration</code> and pass the job identifier (<code>JobId</code>) from the initial call to
 * <code>StartContentModeration</code>.
 *
 * </p
 *
 * For more information, see Working with Stored Videos in the Amazon Rekognition Devlopers
 *
 * Guide>
 *
 * <code>GetContentModeration</code> returns detected inappropriate, unwanted, or offensive content moderation labels, and
 * the time they are detected, in an array, <code>ModerationLabels</code>, of <a>ContentModerationDetection</a> objects.
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
 * For more information, see moderating content in the Amazon Rekognition Developer
 */
GetContentModerationResponse * RekognitionClient::getContentModeration(const GetContentModerationRequest &request)
{
    return qobject_cast<GetContentModerationResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetFaceDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets face detection results for a Amazon Rekognition Video analysis started by
 *
 * <a>StartFaceDetection</a>>
 *
 * Face detection with Amazon Rekognition Video is an asynchronous operation. You start face detection by calling
 * <a>StartFaceDetection</a> which returns a job identifier (<code>JobId</code>). When the face detection operation
 * finishes, Amazon Rekognition Video publishes a completion status to the Amazon Simple Notification Service topic
 * registered in the initial call to <code>StartFaceDetection</code>. To get the results of the face detection operation,
 * first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
 * <a>GetFaceDetection</a> and pass the job identifier (<code>JobId</code>) from the initial call to
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
 */
GetFaceDetectionResponse * RekognitionClient::getFaceDetection(const GetFaceDetectionRequest &request)
{
    return qobject_cast<GetFaceDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetFaceSearchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the face search results for Amazon Rekognition Video face search started by <a>StartFaceSearch</a>. The search
 * returns faces in a collection that match the faces of persons detected in a video. It also includes the time(s) that
 * faces are matched in the
 *
 * video>
 *
 * Face search in a video is an asynchronous operation. You start face search by calling to <a>StartFaceSearch</a> which
 * returns a job identifier (<code>JobId</code>). When the search operation finishes, Amazon Rekognition Video publishes a
 * completion status to the Amazon Simple Notification Service topic registered in the initial call to
 * <code>StartFaceSearch</code>. To get the search results, first check that the status value published to the Amazon SNS
 * topic is <code>SUCCEEDED</code>. If so, call <code>GetFaceSearch</code> and pass the job identifier (<code>JobId</code>)
 * from the initial call to
 *
 * <code>StartFaceSearch</code>>
 *
 * For more information, see Searching Faces in a Collection in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * The search results are retured in an array, <code>Persons</code>, of <a>PersonMatch</a> objects.
 * Each<code>PersonMatch</code> element contains details about the matching faces in the input collection, person
 * information (facial attributes, bounding boxes, and person identifer) for the matched person, and the time the person
 * was matched in the
 *
 * video> <note>
 *
 * <code>GetFaceSearch</code> only returns the default facial attributes (<code>BoundingBox</code>,
 * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The other facial
 * attributes listed in the <code>Face</code> object of the following response syntax are not returned. For more
 * information, see FaceDetail in the Amazon Rekognition Developer Guide.
 *
 * </p </note>
 *
 * By default, the <code>Persons</code> array is sorted by the time, in milliseconds from the start of the video, persons
 * are matched. You can also sort by persons by specifying <code>INDEX</code> for the <code>SORTBY</code> input
 */
GetFaceSearchResponse * RekognitionClient::getFaceSearch(const GetFaceSearchRequest &request)
{
    return qobject_cast<GetFaceSearchResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetLabelDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the label detection results of a Amazon Rekognition Video analysis started by <a>StartLabelDetection</a>.
 *
 * </p
 *
 * The label detection operation is started by a call to <a>StartLabelDetection</a> which returns a job identifier
 * (<code>JobId</code>). When the label detection operation finishes, Amazon Rekognition publishes a completion status to
 * the Amazon Simple Notification Service topic registered in the initial call to <code>StartlabelDetection</code>. To get
 * the results of the label detection operation, first check that the status value published to the Amazon SNS topic is
 * <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and pass the job identifier (<code>JobId</code>) from the
 * initial call to
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
 * The returned labels also include bounding box information for common objects, a hierarchical taxonomy of detected
 * labels, and the version of the label model used for
 *
 * detection>
 *
 * Use MaxResults parameter to limit the number of labels returned. If there are more results than specified in
 * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token for
 * getting the next set of results. To get the next page of results, call <code>GetlabelDetection</code> and populate the
 * <code>NextToken</code> request parameter with the token value returned from the previous call to
 */
GetLabelDetectionResponse * RekognitionClient::getLabelDetection(const GetLabelDetectionRequest &request)
{
    return qobject_cast<GetLabelDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetPersonTrackingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the path tracking results of a Amazon Rekognition Video analysis started by
 *
 * <a>StartPersonTracking</a>>
 *
 * The person path tracking operation is started by a call to <code>StartPersonTracking</code> which returns a job
 * identifier (<code>JobId</code>). When the operation finishes, Amazon Rekognition Video publishes a completion status to
 * the Amazon Simple Notification Service topic registered in the initial call to
 *
 * <code>StartPersonTracking</code>>
 *
 * To get the results of the person path tracking operation, first check that the status value published to the Amazon SNS
 * topic is <code>SUCCEEDED</code>. If so, call <a>GetPersonTracking</a> and pass the job identifier (<code>JobId</code>)
 * from the initial call to
 *
 * <code>StartPersonTracking</code>>
 *
 * <code>GetPersonTracking</code> returns an array, <code>Persons</code>, of tracked persons and the time(s) their paths
 * were tracked in the video.
 *
 * </p <note>
 *
 * <code>GetPersonTracking</code> only returns the default facial attributes (<code>BoundingBox</code>,
 * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The other facial
 * attributes listed in the <code>Face</code> object of the following response syntax are not returned.
 *
 * </p
 *
 * For more information, see FaceDetail in the Amazon Rekognition Developer
 *
 * Guide> </note>
 *
 * By default, the array is sorted by the time(s) a person's path is tracked in the video. You can sort by tracked persons
 * by specifying <code>INDEX</code> for the <code>SortBy</code> input
 *
 * parameter>
 *
 * Use the <code>MaxResults</code> parameter to limit the number of items returned. If there are more results than
 * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a
 * pagination token for getting the next set of results. To get the next page of results, call
 * <code>GetPersonTracking</code> and populate the <code>NextToken</code> request parameter with the token value returned
 * from the previous call to
 */
GetPersonTrackingResponse * RekognitionClient::getPersonTracking(const GetPersonTrackingRequest &request)
{
    return qobject_cast<GetPersonTrackingResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetSegmentDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the segment detection results of a Amazon Rekognition Video analysis started by
 *
 * <a>StartSegmentDetection</a>>
 *
 * Segment detection with Amazon Rekognition Video is an asynchronous operation. You start segment detection by calling
 * <a>StartSegmentDetection</a> which returns a job identifier (<code>JobId</code>). When the segment detection operation
 * finishes, Amazon Rekognition publishes a completion status to the Amazon Simple Notification Service topic registered in
 * the initial call to <code>StartSegmentDetection</code>. To get the results of the segment detection operation, first
 * check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. if so, call
 * <code>GetSegmentDetection</code> and pass the job identifier (<code>JobId</code>) from the initial call of
 *
 * <code>StartSegmentDetection</code>>
 *
 * <code>GetSegmentDetection</code> returns detected segments in an array (<code>Segments</code>) of
 * <a>SegmentDetection</a> objects. <code>Segments</code> is sorted by the segment types specified in the
 * <code>SegmentTypes</code> input parameter of <code>StartSegmentDetection</code>. Each element of the array includes the
 * detected segment, the precentage confidence in the acuracy of the detected segment, the type of the segment, and the
 * frame in which the segment was
 *
 * detected>
 *
 * Use <code>SelectedSegmentTypes</code> to find out the type of segment detection requested in the call to
 *
 * <code>StartSegmentDetection</code>>
 *
 * Use the <code>MaxResults</code> parameter to limit the number of segment detections returned. If there are more results
 * than specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a
 * pagination token for getting the next set of results. To get the next page of results, call
 * <code>GetSegmentDetection</code> and populate the <code>NextToken</code> request parameter with the token value returned
 * from the previous call to
 *
 * <code>GetSegmentDetection</code>>
 *
 * For more information, see Detecting video segments in stored video in the Amazon Rekognition Developer
 */
GetSegmentDetectionResponse * RekognitionClient::getSegmentDetection(const GetSegmentDetectionRequest &request)
{
    return qobject_cast<GetSegmentDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * GetTextDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the text detection results of a Amazon Rekognition Video analysis started by
 *
 * <a>StartTextDetection</a>>
 *
 * Text detection with Amazon Rekognition Video is an asynchronous operation. You start text detection by calling
 * <a>StartTextDetection</a> which returns a job identifier (<code>JobId</code>) When the text detection operation
 * finishes, Amazon Rekognition publishes a completion status to the Amazon Simple Notification Service topic registered in
 * the initial call to <code>StartTextDetection</code>. To get the results of the text detection operation, first check
 * that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. if so, call
 * <code>GetTextDetection</code> and pass the job identifier (<code>JobId</code>) from the initial call of
 *
 * <code>StartLabelDetection</code>>
 *
 * <code>GetTextDetection</code> returns an array of detected text (<code>TextDetections</code>) sorted by the time the
 * text was detected, up to 50 words per frame of
 *
 * video>
 *
 * Each element of the array includes the detected text, the precentage confidence in the acuracy of the detected text, the
 * time the text was detected, bounding box information for where the text was located, and unique identifiers for words
 * and their
 *
 * lines>
 *
 * Use MaxResults parameter to limit the number of text detections returned. If there are more results than specified in
 * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token for
 * getting the next set of results. To get the next page of results, call <code>GetTextDetection</code> and populate the
 * <code>NextToken</code> request parameter with the token value returned from the previous call to
 */
GetTextDetectionResponse * RekognitionClient::getTextDetection(const GetTextDetectionRequest &request)
{
    return qobject_cast<GetTextDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * IndexFacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects faces in the input image and adds them to the specified collection.
 *
 * </p
 *
 * Amazon Rekognition doesn't save the actual faces that are detected. Instead, the underlying detection algorithm first
 * detects the faces in the input image. For each face, the algorithm extracts facial features into a feature vector, and
 * stores it in the backend database. Amazon Rekognition uses feature vectors when it performs face match and search
 * operations using the <a>SearchFaces</a> and <a>SearchFacesByImage</a>
 *
 * operations>
 *
 * For more information, see Adding faces to a collection in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * To get the number of faces in a collection, call <a>DescribeCollection</a>.
 *
 * </p
 *
 * If you're using version 1.0 of the face detection model, <code>IndexFaces</code> indexes the 15 largest faces in the
 * input image. Later versions of the face detection model index the 100 largest faces in the input image.
 *
 * </p
 *
 * If you're using version 4 or later of the face model, image orientation information is not returned in the
 * <code>OrientationCorrection</code> field.
 *
 * </p
 *
 * To determine which version of the model you're using, call <a>DescribeCollection</a> and supply the collection ID. You
 * can also get the model version from the value of <code>FaceModelVersion</code> in the response from
 * <code>IndexFaces</code>
 *
 * </p
 *
 * For more information, see Model Versioning in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * If you provide the optional <code>ExternalImageId</code> for the input image you provided, Amazon Rekognition associates
 * this ID with all faces that it detects. When you call the <a>ListFaces</a> operation, the response returns the external
 * ID. You can use this external image ID to create a client-side index to associate the faces with each image. You can
 * then use the index to find all faces in an
 *
 * image>
 *
 * You can specify the maximum number of faces to index with the <code>MaxFaces</code> input parameter. This is useful when
 * you want to index the largest faces in an image and don't want to index smaller faces, such as those belonging to people
 * standing in the
 *
 * background>
 *
 * The <code>QualityFilter</code> input parameter allows you to filter out detected faces that don’t meet a required
 * quality bar. The quality bar is based on a variety of common use cases. By default, <code>IndexFaces</code> chooses the
 * quality bar that's used to filter faces. You can also explicitly choose the quality bar. Use <code>QualityFilter</code>,
 * to set the quality bar by specifying <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>. If you do not want to
 * filter detected faces, specify <code>NONE</code>.
 *
 * </p <note>
 *
 * To use quality filtering, you need a collection associated with version 3 of the face model or higher. To get the
 * version of the face model associated with a collection, call <a>DescribeCollection</a>.
 *
 * </p </note>
 *
 * Information about faces detected in an image, but not indexed, is returned in an array of <a>UnindexedFace</a> objects,
 * <code>UnindexedFaces</code>. Faces aren't indexed for reasons such
 *
 * as> <ul> <li>
 *
 * The number of faces detected exceeds the value of the <code>MaxFaces</code> request
 *
 * parameter> </li> <li>
 *
 * The face is too small compared to the image
 *
 * dimensions> </li> <li>
 *
 * The face is too
 *
 * blurry> </li> <li>
 *
 * The image is too
 *
 * dark> </li> <li>
 *
 * The face has an extreme
 *
 * pose> </li> <li>
 *
 * The face doesn’t have enough detail to be suitable for face
 *
 * search> </li> </ul>
 *
 * In response, the <code>IndexFaces</code> operation returns an array of metadata for all detected faces,
 * <code>FaceRecords</code>. This includes:
 *
 * </p <ul> <li>
 *
 * The bounding box, <code>BoundingBox</code>, of the detected face.
 *
 * </p </li> <li>
 *
 * A confidence value, <code>Confidence</code>, which indicates the confidence that the bounding box contains a
 *
 * face> </li> <li>
 *
 * A face ID, <code>FaceId</code>, assigned by the service for each face that's detected and
 *
 * stored> </li> <li>
 *
 * An image ID, <code>ImageId</code>, assigned by the service for the input
 *
 * image> </li> </ul>
 *
 * If you request all facial attributes (by using the <code>detectionAttributes</code> parameter), Amazon Rekognition
 * returns detailed facial attributes, such as facial landmarks (for example, location of eye and mouth) and other facial
 * attributes. If you provide the same image, specify the same collection, and use the same external ID in the
 * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate face
 *
 * metadata>
 *
 * </p
 *
 * The input image is passed either as base64-encoded image bytes, or as a reference to an image in an Amazon S3 bucket. If
 * you use the AWS CLI to call Amazon Rekognition operations, passing image bytes isn't supported. The image must be
 * formatted as a PNG or JPEG file.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:IndexFaces</code>
 */
IndexFacesResponse * RekognitionClient::indexFaces(const IndexFacesRequest &request)
{
    return qobject_cast<IndexFacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListCollectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns list of collection IDs in your account. If the result is truncated, the response also provides a
 * <code>NextToken</code> that you can use in the subsequent request to fetch the next set of collection
 *
 * IDs>
 *
 * For an example, see Listing collections in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:ListCollections</code>
 */
ListCollectionsResponse * RekognitionClient::listCollections(const ListCollectionsRequest &request)
{
    return qobject_cast<ListCollectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListDatasetEntriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the entries (images) within a dataset. An entry is a JSON Line that contains the information for a single image,
 * including the image location, assigned labels, and object location bounding boxes. For more information, see <a
 * href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/md-manifest-files.html">Creating a manifest
 *
 * file</a>>
 *
 * JSON Lines in the response include information about non-terminal errors found in the dataset. Non terminal errors are
 * reported in <code>errors</code> lists within each JSON Line. The same information is reported in the training and
 * testing validation result manifests that Amazon Rekognition Custom Labels creates during model training.
 *
 * </p
 *
 * You can filter the response in variety of ways, such as choosing which labels to return and returning JSON Lines created
 * after a specific date.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:ListDatasetEntries</code>
 */
ListDatasetEntriesResponse * RekognitionClient::listDatasetEntries(const ListDatasetEntriesRequest &request)
{
    return qobject_cast<ListDatasetEntriesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListDatasetLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the labels in a dataset. Amazon Rekognition Custom Labels uses labels to describe images. For more information,
 * see <a href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/md-labeling-images.html">Labeling
 * images</a>.
 *
 * </p
 *
 * Lists the labels in a dataset. Amazon Rekognition Custom Labels uses labels to describe images. For more information,
 * see Labeling images in the <i>Amazon Rekognition Custom Labels Developer Guide</i>.
 */
ListDatasetLabelsResponse * RekognitionClient::listDatasetLabels(const ListDatasetLabelsRequest &request)
{
    return qobject_cast<ListDatasetLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListFacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata for faces in the specified collection. This metadata includes information such as the bounding box
 * coordinates, the confidence (that the bounding box contains a face), and face ID. For an example, see Listing Faces in a
 * Collection in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:ListFaces</code>
 */
ListFacesResponse * RekognitionClient::listFaces(const ListFacesRequest &request)
{
    return qobject_cast<ListFacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListProjectPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the project policies attached to a
 *
 * project>
 *
 * To attach a project policy to a project, call <a>PutProjectPolicy</a>. To remove a project policy from a project, call
 */
ListProjectPoliciesResponse * RekognitionClient::listProjectPolicies(const ListProjectPoliciesRequest &request)
{
    return qobject_cast<ListProjectPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListStreamProcessorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of stream processors that you have created with <a>CreateStreamProcessor</a>.
 */
ListStreamProcessorsResponse * RekognitionClient::listStreamProcessors(const ListStreamProcessorsRequest &request)
{
    return qobject_cast<ListStreamProcessorsResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags in an Amazon Rekognition collection, stream processor, or Custom Labels model.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:ListTagsForResource</code> action.
 */
ListTagsForResourceResponse * RekognitionClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * PutProjectPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a project policy to a Amazon Rekognition Custom Labels project in a trusting AWS account. A project policy
 * specifies that a trusted AWS account can copy a model version from a trusting AWS account to a project in the trusted
 * AWS account. To copy a model version you use the <a>CopyProjectVersion</a>
 *
 * operation>
 *
 * For more information about the format of a project policy document, see Attaching a project policy (SDK) in the
 * <i>Amazon Rekognition Custom Labels Developer Guide</i>.
 *
 * </p
 *
 * The response from <code>PutProjectPolicy</code> is a revision ID for the project policy. You can attach multiple project
 * policies to a project. You can also update an existing project policy by specifying the policy revision ID of the
 * existing
 *
 * policy>
 *
 * To remove a project policy from a project, call <a>DeleteProjectPolicy</a>. To get a list of project policies attached
 * to a project, call <a>ListProjectPolicies</a>.
 *
 * </p
 *
 * You copy a model version by calling
 */
PutProjectPolicyResponse * RekognitionClient::putProjectPolicy(const PutProjectPolicyRequest &request)
{
    return qobject_cast<PutProjectPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * RecognizeCelebritiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of celebrities recognized in the input image. For more information, see Recognizing celebrities in the
 * Amazon Rekognition Developer Guide.
 *
 * </p
 *
 * <code>RecognizeCelebrities</code> returns the 64 largest faces in the image. It lists the recognized celebrities in the
 * <code>CelebrityFaces</code> array and any unrecognized faces in the <code>UnrecognizedFaces</code> array.
 * <code>RecognizeCelebrities</code> doesn't return celebrities whose faces aren't among the largest 64 faces in the
 *
 * image>
 *
 * For each celebrity recognized, <code>RecognizeCelebrities</code> returns a <code>Celebrity</code> object. The
 * <code>Celebrity</code> object contains the celebrity name, ID, URL links to additional information, match confidence,
 * and a <code>ComparedFace</code> object that you can use to locate the celebrity's face on the
 *
 * image>
 *
 * Amazon Rekognition doesn't retain information about which images a celebrity has been recognized in. Your application
 * must store this information and use the <code>Celebrity</code> ID property as a unique identifier for the celebrity. If
 * you don't store the celebrity name or additional information URLs returned by <code>RecognizeCelebrities</code>, you
 * will need the ID to identify the celebrity in a call to the <a>GetCelebrityInfo</a>
 *
 * operation>
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the AWS CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
 * either a PNG or JPEG formatted file.
 *
 * </p
 *
 * For an example, see Recognizing celebrities in an image in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:RecognizeCelebrities</code>
 */
RecognizeCelebritiesResponse * RekognitionClient::recognizeCelebrities(const RecognizeCelebritiesRequest &request)
{
    return qobject_cast<RecognizeCelebritiesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * SearchFacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * For an example, see Searching for a face using its face ID in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:SearchFaces</code>
 */
SearchFacesResponse * RekognitionClient::searchFaces(const SearchFacesRequest &request)
{
    return qobject_cast<SearchFacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * SearchFacesByImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a given input image, first detects the largest face in the image, and then searches the specified collection for
 * matching faces. The operation compares the features of the input face with faces in the specified collection.
 *
 * </p <note>
 *
 * To search for all faces in an input image, you might first call the <a>IndexFaces</a> operation, and then use the face
 * IDs returned in subsequent calls to the <a>SearchFaces</a> operation.
 *
 * </p
 *
 * You can also call the <code>DetectFaces</code> operation and use the bounding boxes in the response to make face crops,
 * which then you can pass in to the <code>SearchFacesByImage</code> operation.
 *
 * </p </note>
 *
 * You pass the input image either as base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket. If
 * you use the AWS CLI to call Amazon Rekognition operations, passing image bytes is not supported. The image must be
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
 * If no faces are detected in the input image, <code>SearchFacesByImage</code> returns an
 * <code>InvalidParameterException</code> error.
 *
 * </p
 *
 * For an example, Searching for a Face Using an Image in the Amazon Rekognition Developer
 *
 * Guide>
 *
 * The <code>QualityFilter</code> input parameter allows you to filter out detected faces that don’t meet a required
 * quality bar. The quality bar is based on a variety of common use cases. Use <code>QualityFilter</code> to set the
 * quality bar for filtering by specifying <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>. If you do not want
 * to filter detected faces, specify <code>NONE</code>. The default value is
 *
 * <code>NONE</code>> <note>
 *
 * To use quality filtering, you need a collection associated with version 3 of the face model or higher. To get the
 * version of the face model associated with a collection, call <a>DescribeCollection</a>.
 *
 * </p </note>
 *
 * This operation requires permissions to perform the <code>rekognition:SearchFacesByImage</code>
 */
SearchFacesByImageResponse * RekognitionClient::searchFacesByImage(const SearchFacesByImageRequest &request)
{
    return qobject_cast<SearchFacesByImageResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartCelebrityRecognitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts asynchronous recognition of celebrities in a stored
 *
 * video>
 *
 * Amazon Rekognition Video can detect celebrities in a video must be stored in an Amazon S3 bucket. Use <a>Video</a> to
 * specify the bucket name and the filename of the video. <code>StartCelebrityRecognition</code> returns a job identifier
 * (<code>JobId</code>) which you use to get the results of the analysis. When celebrity recognition analysis is finished,
 * Amazon Rekognition Video publishes a completion status to the Amazon Simple Notification Service topic that you specify
 * in <code>NotificationChannel</code>. To get the results of the celebrity recognition analysis, first check that the
 * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetCelebrityRecognition</a> and
 * pass the job identifier (<code>JobId</code>) from the initial call to <code>StartCelebrityRecognition</code>.
 *
 * </p
 *
 * For more information, see Recognizing celebrities in the Amazon Rekognition Developer
 */
StartCelebrityRecognitionResponse * RekognitionClient::startCelebrityRecognition(const StartCelebrityRecognitionRequest &request)
{
    return qobject_cast<StartCelebrityRecognitionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartContentModerationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts asynchronous detection of inappropriate, unwanted, or offensive content in a stored video. For a list of
 * moderation labels in Amazon Rekognition, see <a
 * href="https://docs.aws.amazon.com/rekognition/latest/dg/moderation.html#moderation-api">Using the image and video
 * moderation
 *
 * APIs</a>>
 *
 * Amazon Rekognition Video can moderate content in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the
 * bucket name and the filename of the video. <code>StartContentModeration</code> returns a job identifier
 * (<code>JobId</code>) which you use to get the results of the analysis. When content analysis is finished, Amazon
 * Rekognition Video publishes a completion status to the Amazon Simple Notification Service topic that you specify in
 *
 * <code>NotificationChannel</code>>
 *
 * To get the results of the content analysis, first check that the status value published to the Amazon SNS topic is
 * <code>SUCCEEDED</code>. If so, call <a>GetContentModeration</a> and pass the job identifier (<code>JobId</code>) from
 * the initial call to <code>StartContentModeration</code>.
 *
 * </p
 *
 * For more information, see Moderating content in the Amazon Rekognition Developer
 */
StartContentModerationResponse * RekognitionClient::startContentModeration(const StartContentModerationRequest &request)
{
    return qobject_cast<StartContentModerationResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartFaceDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts asynchronous detection of faces in a stored
 *
 * video>
 *
 * Amazon Rekognition Video can detect faces in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the
 * bucket name and the filename of the video. <code>StartFaceDetection</code> returns a job identifier (<code>JobId</code>)
 * that you use to get the results of the operation. When face detection is finished, Amazon Rekognition Video publishes a
 * completion status to the Amazon Simple Notification Service topic that you specify in <code>NotificationChannel</code>.
 * To get the results of the face detection operation, first check that the status value published to the Amazon SNS topic
 * is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a> and pass the job identifier (<code>JobId</code>) from the
 * initial call to
 *
 * <code>StartFaceDetection</code>>
 *
 * For more information, see Detecting faces in a stored video in the Amazon Rekognition Developer
 */
StartFaceDetectionResponse * RekognitionClient::startFaceDetection(const StartFaceDetectionRequest &request)
{
    return qobject_cast<StartFaceDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartFaceSearchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the asynchronous search for faces in a collection that match the faces of persons detected in a stored
 *
 * video>
 *
 * The video must be stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename of the
 * video. <code>StartFaceSearch</code> returns a job identifier (<code>JobId</code>) which you use to get the search
 * results once the search has completed. When searching is finished, Amazon Rekognition Video publishes a completion
 * status to the Amazon Simple Notification Service topic that you specify in <code>NotificationChannel</code>. To get the
 * search results, first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so,
 * call <a>GetFaceSearch</a> and pass the job identifier (<code>JobId</code>) from the initial call to
 * <code>StartFaceSearch</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/rekognition/latest/dg/procedure-person-search-videos.html">Searching stored videos for
 * faces</a>.
 */
StartFaceSearchResponse * RekognitionClient::startFaceSearch(const StartFaceSearchRequest &request)
{
    return qobject_cast<StartFaceSearchResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartLabelDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts asynchronous detection of labels in a stored
 *
 * video>
 *
 * Amazon Rekognition Video can detect labels in a video. Labels are instances of real-world entities. This includes
 * objects like flower, tree, and table; events like wedding, graduation, and birthday party; concepts like landscape,
 * evening, and nature; and activities like a person getting out of a car or a person
 *
 * skiing>
 *
 * The video must be stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename of the
 * video. <code>StartLabelDetection</code> returns a job identifier (<code>JobId</code>) which you use to get the results
 * of the operation. When label detection is finished, Amazon Rekognition Video publishes a completion status to the Amazon
 * Simple Notification Service topic that you specify in
 *
 * <code>NotificationChannel</code>>
 *
 * To get the results of the label detection operation, first check that the status value published to the Amazon SNS topic
 * is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and pass the job identifier (<code>JobId</code>) from
 * the initial call to
 *
 * <code>StartLabelDetection</code>>
 */
StartLabelDetectionResponse * RekognitionClient::startLabelDetection(const StartLabelDetectionRequest &request)
{
    return qobject_cast<StartLabelDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartPersonTrackingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the asynchronous tracking of a person's path in a stored
 *
 * video>
 *
 * Amazon Rekognition Video can track the path of people in a video stored in an Amazon S3 bucket. Use <a>Video</a> to
 * specify the bucket name and the filename of the video. <code>StartPersonTracking</code> returns a job identifier
 * (<code>JobId</code>) which you use to get the results of the operation. When label detection is finished, Amazon
 * Rekognition publishes a completion status to the Amazon Simple Notification Service topic that you specify in
 * <code>NotificationChannel</code>.
 *
 * </p
 *
 * To get the results of the person detection operation, first check that the status value published to the Amazon SNS
 * topic is <code>SUCCEEDED</code>. If so, call <a>GetPersonTracking</a> and pass the job identifier (<code>JobId</code>)
 * from the initial call to
 */
StartPersonTrackingResponse * RekognitionClient::startPersonTracking(const StartPersonTrackingRequest &request)
{
    return qobject_cast<StartPersonTrackingResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartProjectVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the running of the version of a model. Starting a model takes a while to complete. To check the current state of
 * the model, use
 *
 * <a>DescribeProjectVersions</a>>
 *
 * Once the model is running, you can detect custom labels in new images by calling
 *
 * <a>DetectCustomLabels</a>> <note>
 *
 * You are charged for the amount of time that the model is running. To stop a running model, call
 *
 * <a>StopProjectVersion</a>> </note>
 *
 * For more information, see <i>Running a trained Amazon Rekognition Custom Labels model</i> in the Amazon Rekognition
 * Custom Labels
 *
 * Guide>
 *
 * This operation requires permissions to perform the <code>rekognition:StartProjectVersion</code>
 */
StartProjectVersionResponse * RekognitionClient::startProjectVersion(const StartProjectVersionRequest &request)
{
    return qobject_cast<StartProjectVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartSegmentDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts asynchronous detection of segment detection in a stored
 *
 * video>
 *
 * Amazon Rekognition Video can detect segments in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the
 * bucket name and the filename of the video. <code>StartSegmentDetection</code> returns a job identifier
 * (<code>JobId</code>) which you use to get the results of the operation. When segment detection is finished, Amazon
 * Rekognition Video publishes a completion status to the Amazon Simple Notification Service topic that you specify in
 *
 * <code>NotificationChannel</code>>
 *
 * You can use the <code>Filters</code> (<a>StartSegmentDetectionFilters</a>) input parameter to specify the minimum
 * detection confidence returned in the response. Within <code>Filters</code>, use <code>ShotFilter</code>
 * (<a>StartShotDetectionFilter</a>) to filter detected shots. Use <code>TechnicalCueFilter</code>
 * (<a>StartTechnicalCueDetectionFilter</a>) to filter technical cues.
 *
 * </p
 *
 * To get the results of the segment detection operation, first check that the status value published to the Amazon SNS
 * topic is <code>SUCCEEDED</code>. if so, call <a>GetSegmentDetection</a> and pass the job identifier (<code>JobId</code>)
 * from the initial call to <code>StartSegmentDetection</code>.
 *
 * </p
 *
 * For more information, see Detecting video segments in stored video in the Amazon Rekognition Developer
 */
StartSegmentDetectionResponse * RekognitionClient::startSegmentDetection(const StartSegmentDetectionRequest &request)
{
    return qobject_cast<StartSegmentDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartStreamProcessorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts processing a stream processor. You create a stream processor by calling <a>CreateStreamProcessor</a>. To tell
 * <code>StartStreamProcessor</code> which stream processor to start, use the value of the <code>Name</code> field
 * specified in the call to
 *
 * <code>CreateStreamProcessor</code>>
 *
 * If you are using a label detection stream processor to detect labels, you need to provide a <code>Start selector</code>
 * and a <code>Stop selector</code> to determine the length of the stream processing
 */
StartStreamProcessorResponse * RekognitionClient::startStreamProcessor(const StartStreamProcessorRequest &request)
{
    return qobject_cast<StartStreamProcessorResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StartTextDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts asynchronous detection of text in a stored
 *
 * video>
 *
 * Amazon Rekognition Video can detect text in a video stored in an Amazon S3 bucket. Use <a>Video</a> to specify the
 * bucket name and the filename of the video. <code>StartTextDetection</code> returns a job identifier (<code>JobId</code>)
 * which you use to get the results of the operation. When text detection is finished, Amazon Rekognition Video publishes a
 * completion status to the Amazon Simple Notification Service topic that you specify in
 *
 * <code>NotificationChannel</code>>
 *
 * To get the results of the text detection operation, first check that the status value published to the Amazon SNS topic
 * is <code>SUCCEEDED</code>. if so, call <a>GetTextDetection</a> and pass the job identifier (<code>JobId</code>) from the
 * initial call to <code>StartTextDetection</code>.
 */
StartTextDetectionResponse * RekognitionClient::startTextDetection(const StartTextDetectionRequest &request)
{
    return qobject_cast<StartTextDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StopProjectVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running model. The operation might take a while to complete. To check the current status, call
 * <a>DescribeProjectVersions</a>.
 */
StopProjectVersionResponse * RekognitionClient::stopProjectVersion(const StopProjectVersionRequest &request)
{
    return qobject_cast<StopProjectVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * StopStreamProcessorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running stream processor that was created by
 */
StopStreamProcessorResponse * RekognitionClient::stopStreamProcessor(const StopStreamProcessorRequest &request)
{
    return qobject_cast<StopStreamProcessorResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more key-value tags to an Amazon Rekognition collection, stream processor, or Custom Labels model. For more
 * information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging AWS Resources</a>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:TagResource</code> action.
 */
TagResourceResponse * RekognitionClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from an Amazon Rekognition collection, stream processor, or Custom Labels model.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:UntagResource</code> action.
 */
UntagResourceResponse * RekognitionClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * UpdateDatasetEntriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates one or more entries (images) in a dataset. An entry is a JSON Line which contains the information for a
 * single image, including the image location, assigned labels, and object location bounding boxes. For more information,
 * see Image-Level labels in manifest files and Object localization in manifest files in the <i>Amazon Rekognition Custom
 * Labels Developer Guide</i>.
 *
 * </p
 *
 * If the <code>source-ref</code> field in the JSON line references an existing image, the existing image in the dataset is
 * updated. If <code>source-ref</code> field doesn't reference an existing image, the image is added as a new image to the
 * dataset.
 *
 * </p
 *
 * You specify the changes that you want to make in the <code>Changes</code> input parameter. There isn't a limit to the
 * number JSON Lines that you can change, but the size of <code>Changes</code> must be less than
 *
 * 5MB>
 *
 * <code>UpdateDatasetEntries</code> returns immediatly, but the dataset update might take a while to complete. Use
 * <a>DescribeDataset</a> to check the current status. The dataset updated successfully if the value of <code>Status</code>
 * is <code>UPDATE_COMPLETE</code>.
 *
 * </p
 *
 * To check if any non-terminal errors occured, call <a>ListDatasetEntries</a> and check for the presence of
 * <code>errors</code> lists in the JSON
 *
 * Lines>
 *
 * Dataset update fails if a terminal error occurs (<code>Status</code> = <code>UPDATE_FAILED</code>). Currently, you can't
 * access the terminal error information from the Amazon Rekognition Custom Labels SDK.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>rekognition:UpdateDatasetEntries</code>
 */
UpdateDatasetEntriesResponse * RekognitionClient::updateDatasetEntries(const UpdateDatasetEntriesRequest &request)
{
    return qobject_cast<UpdateDatasetEntriesResponse *>(send(request));
}

/*!
 * Sends \a request to the RekognitionClient service, and returns a pointer to an
 * UpdateStreamProcessorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to update a stream processor. You can change some settings and regions of interest and delete certain
 * parameters.
 */
UpdateStreamProcessorResponse * RekognitionClient::updateStreamProcessor(const UpdateStreamProcessorRequest &request)
{
    return qobject_cast<UpdateStreamProcessorResponse *>(send(request));
}

/*!
 * \class QtAws::Rekognition::RekognitionClientPrivate
 * \brief The RekognitionClientPrivate class provides private implementation for RekognitionClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RekognitionClientPrivate object with public implementation \a q.
 */
RekognitionClientPrivate::RekognitionClientPrivate(RekognitionClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Rekognition
} // namespace QtAws
