// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getextensionversionresponse.h"
#include "getextensionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionVersionResponse
 * \brief The GetExtensionVersionResponse class provides an interace for GameSparks GetExtensionVersion responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtensionVersion
 */

/*!
 * Constructs a GetExtensionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetExtensionVersionResponse::GetExtensionVersionResponse(
        const GetExtensionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetExtensionVersionResponsePrivate(this), parent)
{
    setRequest(new GetExtensionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExtensionVersionRequest * GetExtensionVersionResponse::request() const
{
    Q_D(const GetExtensionVersionResponse);
    return static_cast<const GetExtensionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetExtensionVersion \a response.
 */
void GetExtensionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExtensionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetExtensionVersionResponsePrivate
 * \brief The GetExtensionVersionResponsePrivate class provides private implementation for GetExtensionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionVersionResponsePrivate object with public implementation \a q.
 */
GetExtensionVersionResponsePrivate::GetExtensionVersionResponsePrivate(
    GetExtensionVersionResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetExtensionVersion response element from \a xml.
 */
void GetExtensionVersionResponsePrivate::parseGetExtensionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExtensionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
