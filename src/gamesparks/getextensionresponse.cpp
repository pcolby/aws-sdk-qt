// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getextensionresponse.h"
#include "getextensionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionResponse
 * \brief The GetExtensionResponse class provides an interace for GameSparks GetExtension responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtension
 */

/*!
 * Constructs a GetExtensionResponse object for \a reply to \a request, with parent \a parent.
 */
GetExtensionResponse::GetExtensionResponse(
        const GetExtensionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetExtensionResponsePrivate(this), parent)
{
    setRequest(new GetExtensionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExtensionRequest * GetExtensionResponse::request() const
{
    Q_D(const GetExtensionResponse);
    return static_cast<const GetExtensionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetExtension \a response.
 */
void GetExtensionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExtensionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetExtensionResponsePrivate
 * \brief The GetExtensionResponsePrivate class provides private implementation for GetExtensionResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionResponsePrivate object with public implementation \a q.
 */
GetExtensionResponsePrivate::GetExtensionResponsePrivate(
    GetExtensionResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetExtension response element from \a xml.
 */
void GetExtensionResponsePrivate::parseGetExtensionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExtensionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
