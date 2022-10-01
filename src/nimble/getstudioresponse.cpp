// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudioresponse.h"
#include "getstudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStudioResponse
 * \brief The GetStudioResponse class provides an interace for Nimble GetStudio responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::getStudio
 */

/*!
 * Constructs a GetStudioResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioResponse::GetStudioResponse(
        const GetStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetStudioResponsePrivate(this), parent)
{
    setRequest(new GetStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioRequest * GetStudioResponse::request() const
{
    Q_D(const GetStudioResponse);
    return static_cast<const GetStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetStudio \a response.
 */
void GetStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetStudioResponsePrivate
 * \brief The GetStudioResponsePrivate class provides private implementation for GetStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStudioResponsePrivate object with public implementation \a q.
 */
GetStudioResponsePrivate::GetStudioResponsePrivate(
    GetStudioResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetStudio response element from \a xml.
 */
void GetStudioResponsePrivate::parseGetStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
