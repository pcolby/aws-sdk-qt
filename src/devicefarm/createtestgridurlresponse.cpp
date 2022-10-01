// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtestgridurlresponse.h"
#include "createtestgridurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateTestGridUrlResponse
 * \brief The CreateTestGridUrlResponse class provides an interace for DeviceFarm CreateTestGridUrl responses.
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
 * \sa DeviceFarmClient::createTestGridUrl
 */

/*!
 * Constructs a CreateTestGridUrlResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTestGridUrlResponse::CreateTestGridUrlResponse(
        const CreateTestGridUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateTestGridUrlResponsePrivate(this), parent)
{
    setRequest(new CreateTestGridUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTestGridUrlRequest * CreateTestGridUrlResponse::request() const
{
    Q_D(const CreateTestGridUrlResponse);
    return static_cast<const CreateTestGridUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateTestGridUrl \a response.
 */
void CreateTestGridUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTestGridUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateTestGridUrlResponsePrivate
 * \brief The CreateTestGridUrlResponsePrivate class provides private implementation for CreateTestGridUrlResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateTestGridUrlResponsePrivate object with public implementation \a q.
 */
CreateTestGridUrlResponsePrivate::CreateTestGridUrlResponsePrivate(
    CreateTestGridUrlResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateTestGridUrl response element from \a xml.
 */
void CreateTestGridUrlResponsePrivate::parseCreateTestGridUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTestGridUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
