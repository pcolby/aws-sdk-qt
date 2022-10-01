// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getkeygroupconfigresponse.h"
#include "getkeygroupconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetKeyGroupConfigResponse
 * \brief The GetKeyGroupConfigResponse class provides an interace for CloudFront GetKeyGroupConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getKeyGroupConfig
 */

/*!
 * Constructs a GetKeyGroupConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetKeyGroupConfigResponse::GetKeyGroupConfigResponse(
        const GetKeyGroupConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetKeyGroupConfigResponsePrivate(this), parent)
{
    setRequest(new GetKeyGroupConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetKeyGroupConfigRequest * GetKeyGroupConfigResponse::request() const
{
    Q_D(const GetKeyGroupConfigResponse);
    return static_cast<const GetKeyGroupConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetKeyGroupConfig \a response.
 */
void GetKeyGroupConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetKeyGroupConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetKeyGroupConfigResponsePrivate
 * \brief The GetKeyGroupConfigResponsePrivate class provides private implementation for GetKeyGroupConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetKeyGroupConfigResponsePrivate object with public implementation \a q.
 */
GetKeyGroupConfigResponsePrivate::GetKeyGroupConfigResponsePrivate(
    GetKeyGroupConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetKeyGroupConfig response element from \a xml.
 */
void GetKeyGroupConfigResponsePrivate::parseGetKeyGroupConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyGroupConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
