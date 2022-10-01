// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmapstyledescriptorresponse.h"
#include "getmapstyledescriptorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapStyleDescriptorResponse
 * \brief The GetMapStyleDescriptorResponse class provides an interace for Location GetMapStyleDescriptor responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapStyleDescriptor
 */

/*!
 * Constructs a GetMapStyleDescriptorResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapStyleDescriptorResponse::GetMapStyleDescriptorResponse(
        const GetMapStyleDescriptorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetMapStyleDescriptorResponsePrivate(this), parent)
{
    setRequest(new GetMapStyleDescriptorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapStyleDescriptorRequest * GetMapStyleDescriptorResponse::request() const
{
    Q_D(const GetMapStyleDescriptorResponse);
    return static_cast<const GetMapStyleDescriptorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location GetMapStyleDescriptor \a response.
 */
void GetMapStyleDescriptorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapStyleDescriptorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetMapStyleDescriptorResponsePrivate
 * \brief The GetMapStyleDescriptorResponsePrivate class provides private implementation for GetMapStyleDescriptorResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapStyleDescriptorResponsePrivate object with public implementation \a q.
 */
GetMapStyleDescriptorResponsePrivate::GetMapStyleDescriptorResponsePrivate(
    GetMapStyleDescriptorResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetMapStyleDescriptor response element from \a xml.
 */
void GetMapStyleDescriptorResponsePrivate::parseGetMapStyleDescriptorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapStyleDescriptorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
