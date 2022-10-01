// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
