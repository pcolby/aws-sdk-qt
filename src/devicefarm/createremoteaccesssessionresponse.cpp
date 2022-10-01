// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createremoteaccesssessionresponse.h"
#include "createremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionResponse
 * \brief The CreateRemoteAccessSessionResponse class provides an interace for DeviceFarm CreateRemoteAccessSession responses.
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
 * \sa DeviceFarmClient::createRemoteAccessSession
 */

/*!
 * Constructs a CreateRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRemoteAccessSessionResponse::CreateRemoteAccessSessionResponse(
        const CreateRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new CreateRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRemoteAccessSessionRequest * CreateRemoteAccessSessionResponse::request() const
{
    Q_D(const CreateRemoteAccessSessionResponse);
    return static_cast<const CreateRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateRemoteAccessSession \a response.
 */
void CreateRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionResponsePrivate
 * \brief The CreateRemoteAccessSessionResponsePrivate class provides private implementation for CreateRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
CreateRemoteAccessSessionResponsePrivate::CreateRemoteAccessSessionResponsePrivate(
    CreateRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateRemoteAccessSession response element from \a xml.
 */
void CreateRemoteAccessSessionResponsePrivate::parseCreateRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRemoteAccessSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
