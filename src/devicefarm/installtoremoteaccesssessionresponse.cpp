// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "installtoremoteaccesssessionresponse.h"
#include "installtoremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::InstallToRemoteAccessSessionResponse
 * \brief The InstallToRemoteAccessSessionResponse class provides an interace for DeviceFarm InstallToRemoteAccessSession responses.
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
 * \sa DeviceFarmClient::installToRemoteAccessSession
 */

/*!
 * Constructs a InstallToRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
InstallToRemoteAccessSessionResponse::InstallToRemoteAccessSessionResponse(
        const InstallToRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new InstallToRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new InstallToRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InstallToRemoteAccessSessionRequest * InstallToRemoteAccessSessionResponse::request() const
{
    Q_D(const InstallToRemoteAccessSessionResponse);
    return static_cast<const InstallToRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm InstallToRemoteAccessSession \a response.
 */
void InstallToRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InstallToRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::InstallToRemoteAccessSessionResponsePrivate
 * \brief The InstallToRemoteAccessSessionResponsePrivate class provides private implementation for InstallToRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a InstallToRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
InstallToRemoteAccessSessionResponsePrivate::InstallToRemoteAccessSessionResponsePrivate(
    InstallToRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm InstallToRemoteAccessSession response element from \a xml.
 */
void InstallToRemoteAccessSessionResponsePrivate::parseInstallToRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InstallToRemoteAccessSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
