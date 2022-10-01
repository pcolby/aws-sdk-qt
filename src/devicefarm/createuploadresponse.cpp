// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuploadresponse.h"
#include "createuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateUploadResponse
 * \brief The CreateUploadResponse class provides an interace for DeviceFarm CreateUpload responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::createUpload
 */

/*!
 * Constructs a CreateUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUploadResponse::CreateUploadResponse(
        const CreateUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateUploadResponsePrivate(this), parent)
{
    setRequest(new CreateUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUploadRequest * CreateUploadResponse::request() const
{
    Q_D(const CreateUploadResponse);
    return static_cast<const CreateUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateUpload \a response.
 */
void CreateUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateUploadResponsePrivate
 * \brief The CreateUploadResponsePrivate class provides private implementation for CreateUploadResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateUploadResponsePrivate object with public implementation \a q.
 */
CreateUploadResponsePrivate::CreateUploadResponsePrivate(
    CreateUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateUpload response element from \a xml.
 */
void CreateUploadResponsePrivate::parseCreateUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
