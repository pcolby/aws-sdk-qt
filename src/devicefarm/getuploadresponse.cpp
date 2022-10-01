// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuploadresponse.h"
#include "getuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetUploadResponse
 * \brief The GetUploadResponse class provides an interace for DeviceFarm GetUpload responses.
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
 * \sa DeviceFarmClient::getUpload
 */

/*!
 * Constructs a GetUploadResponse object for \a reply to \a request, with parent \a parent.
 */
GetUploadResponse::GetUploadResponse(
        const GetUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetUploadResponsePrivate(this), parent)
{
    setRequest(new GetUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUploadRequest * GetUploadResponse::request() const
{
    Q_D(const GetUploadResponse);
    return static_cast<const GetUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetUpload \a response.
 */
void GetUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetUploadResponsePrivate
 * \brief The GetUploadResponsePrivate class provides private implementation for GetUploadResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetUploadResponsePrivate object with public implementation \a q.
 */
GetUploadResponsePrivate::GetUploadResponsePrivate(
    GetUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetUpload response element from \a xml.
 */
void GetUploadResponsePrivate::parseGetUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
