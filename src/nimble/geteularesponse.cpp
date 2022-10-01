// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteularesponse.h"
#include "geteularesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetEulaResponse
 * \brief The GetEulaResponse class provides an interace for Nimble GetEula responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::getEula
 */

/*!
 * Constructs a GetEulaResponse object for \a reply to \a request, with parent \a parent.
 */
GetEulaResponse::GetEulaResponse(
        const GetEulaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetEulaResponsePrivate(this), parent)
{
    setRequest(new GetEulaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEulaRequest * GetEulaResponse::request() const
{
    Q_D(const GetEulaResponse);
    return static_cast<const GetEulaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetEula \a response.
 */
void GetEulaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEulaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetEulaResponsePrivate
 * \brief The GetEulaResponsePrivate class provides private implementation for GetEulaResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetEulaResponsePrivate object with public implementation \a q.
 */
GetEulaResponsePrivate::GetEulaResponsePrivate(
    GetEulaResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetEula response element from \a xml.
 */
void GetEulaResponsePrivate::parseGetEulaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEulaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
