// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createorupdatetagsresponse.h"
#include "createorupdatetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateOrUpdateTagsResponse
 * \brief The CreateOrUpdateTagsResponse class provides an interace for AutoScaling CreateOrUpdateTags responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::createOrUpdateTags
 */

/*!
 * Constructs a CreateOrUpdateTagsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOrUpdateTagsResponse::CreateOrUpdateTagsResponse(
        const CreateOrUpdateTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateOrUpdateTagsResponsePrivate(this), parent)
{
    setRequest(new CreateOrUpdateTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOrUpdateTagsRequest * CreateOrUpdateTagsResponse::request() const
{
    Q_D(const CreateOrUpdateTagsResponse);
    return static_cast<const CreateOrUpdateTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling CreateOrUpdateTags \a response.
 */
void CreateOrUpdateTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOrUpdateTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::CreateOrUpdateTagsResponsePrivate
 * \brief The CreateOrUpdateTagsResponsePrivate class provides private implementation for CreateOrUpdateTagsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateOrUpdateTagsResponsePrivate object with public implementation \a q.
 */
CreateOrUpdateTagsResponsePrivate::CreateOrUpdateTagsResponsePrivate(
    CreateOrUpdateTagsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling CreateOrUpdateTags response element from \a xml.
 */
void CreateOrUpdateTagsResponsePrivate::parseCreateOrUpdateTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOrUpdateTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
