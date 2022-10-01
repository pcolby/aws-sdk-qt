// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworldtemplatebodyresponse.h"
#include "getworldtemplatebodyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyResponse
 * \brief The GetWorldTemplateBodyResponse class provides an interace for RoboMaker GetWorldTemplateBody responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::getWorldTemplateBody
 */

/*!
 * Constructs a GetWorldTemplateBodyResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorldTemplateBodyResponse::GetWorldTemplateBodyResponse(
        const GetWorldTemplateBodyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new GetWorldTemplateBodyResponsePrivate(this), parent)
{
    setRequest(new GetWorldTemplateBodyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorldTemplateBodyRequest * GetWorldTemplateBodyResponse::request() const
{
    Q_D(const GetWorldTemplateBodyResponse);
    return static_cast<const GetWorldTemplateBodyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker GetWorldTemplateBody \a response.
 */
void GetWorldTemplateBodyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorldTemplateBodyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyResponsePrivate
 * \brief The GetWorldTemplateBodyResponsePrivate class provides private implementation for GetWorldTemplateBodyResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a GetWorldTemplateBodyResponsePrivate object with public implementation \a q.
 */
GetWorldTemplateBodyResponsePrivate::GetWorldTemplateBodyResponsePrivate(
    GetWorldTemplateBodyResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker GetWorldTemplateBody response element from \a xml.
 */
void GetWorldTemplateBodyResponsePrivate::parseGetWorldTemplateBodyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorldTemplateBodyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
