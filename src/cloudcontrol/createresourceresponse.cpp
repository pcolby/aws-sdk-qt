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
