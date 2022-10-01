// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiocomponentresponse.h"
#include "getstudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStudioComponentResponse
 * \brief The GetStudioComponentResponse class provides an interace for Nimble GetStudioComponent responses.
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
 * \sa NimbleClient::getStudioComponent
 */

/*!
 * Constructs a GetStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioComponentResponse::GetStudioComponentResponse(
        const GetStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetStudioComponentResponsePrivate(this), parent)
{
    setRequest(new GetStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioComponentRequest * GetStudioComponentResponse::request() const
{
    Q_D(const GetStudioComponentResponse);
    return static_cast<const GetStudioComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetStudioComponent \a response.
 */
void GetStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetStudioComponentResponsePrivate
 * \brief The GetStudioComponentResponsePrivate class provides private implementation for GetStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStudioComponentResponsePrivate object with public implementation \a q.
 */
GetStudioComponentResponsePrivate::GetStudioComponentResponsePrivate(
    GetStudioComponentResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetStudioComponent response element from \a xml.
 */
void GetStudioComponentResponsePrivate::parseGetStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
