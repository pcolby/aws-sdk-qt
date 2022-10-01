// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourceresponse.h"
#include "createresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CreateResourceResponse
 * \brief The CreateResourceResponse class provides an interace for CloudControl CreateResource responses.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::createResource
 */

/*!
 * Constructs a CreateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceResponse::CreateResourceResponse(
        const CreateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudControlResponse(new CreateResourceResponsePrivate(this), parent)
{
    setRequest(new CreateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceRequest * CreateResourceResponse::request() const
{
    Q_D(const CreateResourceResponse);
    return static_cast<const CreateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudControl CreateResource \a response.
 */
void CreateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudControl::CreateResourceResponsePrivate
 * \brief The CreateResourceResponsePrivate class provides private implementation for CreateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CreateResourceResponsePrivate object with public implementation \a q.
 */
CreateResourceResponsePrivate::CreateResourceResponsePrivate(
    CreateResourceResponse * const q) : CloudControlResponsePrivate(q)
{

}

/*!
 * Parses a CloudControl CreateResource response element from \a xml.
 */
void CreateResourceResponsePrivate::parseCreateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudControl
} // namespace QtAws
