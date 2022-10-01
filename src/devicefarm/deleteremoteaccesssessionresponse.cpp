// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteremoteaccesssessionresponse.h"
#include "deleteremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteRemoteAccessSessionResponse
 * \brief The DeleteRemoteAccessSessionResponse class provides an interace for DeviceFarm DeleteRemoteAccessSession responses.
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
 * \sa DeviceFarmClient::deleteRemoteAccessSession
 */

/*!
 * Constructs a DeleteRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRemoteAccessSessionResponse::DeleteRemoteAccessSessionResponse(
        const DeleteRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRemoteAccessSessionRequest * DeleteRemoteAccessSessionResponse::request() const
{
    Q_D(const DeleteRemoteAccessSessionResponse);
    return static_cast<const DeleteRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteRemoteAccessSession \a response.
 */
void DeleteRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteRemoteAccessSessionResponsePrivate
 * \brief The DeleteRemoteAccessSessionResponsePrivate class provides private implementation for DeleteRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
DeleteRemoteAccessSessionResponsePrivate::DeleteRemoteAccessSessionResponsePrivate(
    DeleteRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteRemoteAccessSession response element from \a xml.
 */
void DeleteRemoteAccessSessionResponsePrivate::parseDeleteRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRemoteAccessSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
