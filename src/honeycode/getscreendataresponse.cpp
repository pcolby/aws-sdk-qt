// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getscreendataresponse.h"
#include "getscreendataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::GetScreenDataResponse
 * \brief The GetScreenDataResponse class provides an interace for Honeycode GetScreenData responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::getScreenData
 */

/*!
 * Constructs a GetScreenDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetScreenDataResponse::GetScreenDataResponse(
        const GetScreenDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new GetScreenDataResponsePrivate(this), parent)
{
    setRequest(new GetScreenDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetScreenDataRequest * GetScreenDataResponse::request() const
{
    Q_D(const GetScreenDataResponse);
    return static_cast<const GetScreenDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode GetScreenData \a response.
 */
void GetScreenDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetScreenDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::GetScreenDataResponsePrivate
 * \brief The GetScreenDataResponsePrivate class provides private implementation for GetScreenDataResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a GetScreenDataResponsePrivate object with public implementation \a q.
 */
GetScreenDataResponsePrivate::GetScreenDataResponsePrivate(
    GetScreenDataResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode GetScreenData response element from \a xml.
 */
void GetScreenDataResponsePrivate::parseGetScreenDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetScreenDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
