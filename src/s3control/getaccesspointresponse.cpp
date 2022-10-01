// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointresponse.h"
#include "getaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointResponse
 * \brief The GetAccessPointResponse class provides an interace for S3Control GetAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPoint
 */

/*!
 * Constructs a GetAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointResponse::GetAccessPointResponse(
        const GetAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointRequest * GetAccessPointResponse::request() const
{
    Q_D(const GetAccessPointResponse);
    return static_cast<const GetAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPoint \a response.
 */
void GetAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointResponsePrivate
 * \brief The GetAccessPointResponsePrivate class provides private implementation for GetAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointResponsePrivate object with public implementation \a q.
 */
GetAccessPointResponsePrivate::GetAccessPointResponsePrivate(
    GetAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPoint response element from \a xml.
 */
void GetAccessPointResponsePrivate::parseGetAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
