// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuploadresponse.h"
#include "updateuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateUploadResponse
 * \brief The UpdateUploadResponse class provides an interace for DeviceFarm UpdateUpload responses.
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
 * \sa DeviceFarmClient::updateUpload
 */

/*!
 * Constructs a UpdateUploadResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUploadResponse::UpdateUploadResponse(
        const UpdateUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateUploadResponsePrivate(this), parent)
{
    setRequest(new UpdateUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUploadRequest * UpdateUploadResponse::request() const
{
    Q_D(const UpdateUploadResponse);
    return static_cast<const UpdateUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateUpload \a response.
 */
void UpdateUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateUploadResponsePrivate
 * \brief The UpdateUploadResponsePrivate class provides private implementation for UpdateUploadResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateUploadResponsePrivate object with public implementation \a q.
 */
UpdateUploadResponsePrivate::UpdateUploadResponsePrivate(
    UpdateUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateUpload response element from \a xml.
 */
void UpdateUploadResponsePrivate::parseUpdateUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
