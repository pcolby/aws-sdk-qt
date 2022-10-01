// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcutoverresponse.h"
#include "startcutoverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::StartCutoverResponse
 * \brief The StartCutoverResponse class provides an interace for Mgn StartCutover responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::startCutover
 */

/*!
 * Constructs a StartCutoverResponse object for \a reply to \a request, with parent \a parent.
 */
StartCutoverResponse::StartCutoverResponse(
        const StartCutoverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new StartCutoverResponsePrivate(this), parent)
{
    setRequest(new StartCutoverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCutoverRequest * StartCutoverResponse::request() const
{
    Q_D(const StartCutoverResponse);
    return static_cast<const StartCutoverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn StartCutover \a response.
 */
void StartCutoverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCutoverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::StartCutoverResponsePrivate
 * \brief The StartCutoverResponsePrivate class provides private implementation for StartCutoverResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a StartCutoverResponsePrivate object with public implementation \a q.
 */
StartCutoverResponsePrivate::StartCutoverResponsePrivate(
    StartCutoverResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn StartCutover response element from \a xml.
 */
void StartCutoverResponsePrivate::parseStartCutoverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCutoverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
