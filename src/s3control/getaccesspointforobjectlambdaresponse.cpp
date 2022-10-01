// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointforobjectlambdaresponse.h"
#include "getaccesspointforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointForObjectLambdaResponse
 * \brief The GetAccessPointForObjectLambdaResponse class provides an interace for S3Control GetAccessPointForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointForObjectLambda
 */

/*!
 * Constructs a GetAccessPointForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointForObjectLambdaResponse::GetAccessPointForObjectLambdaResponse(
        const GetAccessPointForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointForObjectLambdaRequest * GetAccessPointForObjectLambdaResponse::request() const
{
    Q_D(const GetAccessPointForObjectLambdaResponse);
    return static_cast<const GetAccessPointForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointForObjectLambda \a response.
 */
void GetAccessPointForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointForObjectLambdaResponsePrivate
 * \brief The GetAccessPointForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointForObjectLambdaResponsePrivate::GetAccessPointForObjectLambdaResponsePrivate(
    GetAccessPointForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointForObjectLambda response element from \a xml.
 */
void GetAccessPointForObjectLambdaResponsePrivate::parseGetAccessPointForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
