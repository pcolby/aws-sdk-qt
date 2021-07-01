/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createrealtimelogconfigresponse.h"
#include "createrealtimelogconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateRealtimeLogConfigResponse
 * \brief The CreateRealtimeLogConfigResponse class provides an interace for CloudFront CreateRealtimeLogConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createRealtimeLogConfig
 */

/*!
 * Constructs a CreateRealtimeLogConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRealtimeLogConfigResponse::CreateRealtimeLogConfigResponse(
        const CreateRealtimeLogConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateRealtimeLogConfigResponsePrivate(this), parent)
{
    setRequest(new CreateRealtimeLogConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRealtimeLogConfigRequest * CreateRealtimeLogConfigResponse::request() const
{
    Q_D(const CreateRealtimeLogConfigResponse);
    return static_cast<const CreateRealtimeLogConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateRealtimeLogConfig \a response.
 */
void CreateRealtimeLogConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRealtimeLogConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateRealtimeLogConfigResponsePrivate
 * \brief The CreateRealtimeLogConfigResponsePrivate class provides private implementation for CreateRealtimeLogConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateRealtimeLogConfigResponsePrivate object with public implementation \a q.
 */
CreateRealtimeLogConfigResponsePrivate::CreateRealtimeLogConfigResponsePrivate(
    CreateRealtimeLogConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateRealtimeLogConfig response element from \a xml.
 */
void CreateRealtimeLogConfigResponsePrivate::parseCreateRealtimeLogConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRealtimeLogConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
