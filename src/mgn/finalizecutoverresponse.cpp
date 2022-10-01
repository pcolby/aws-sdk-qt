// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finalizecutoverresponse.h"
#include "finalizecutoverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::FinalizeCutoverResponse
 * \brief The FinalizeCutoverResponse class provides an interace for Mgn FinalizeCutover responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::finalizeCutover
 */

/*!
 * Constructs a FinalizeCutoverResponse object for \a reply to \a request, with parent \a parent.
 */
FinalizeCutoverResponse::FinalizeCutoverResponse(
        const FinalizeCutoverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new FinalizeCutoverResponsePrivate(this), parent)
{
    setRequest(new FinalizeCutoverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FinalizeCutoverRequest * FinalizeCutoverResponse::request() const
{
    Q_D(const FinalizeCutoverResponse);
    return static_cast<const FinalizeCutoverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn FinalizeCutover \a response.
 */
void FinalizeCutoverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FinalizeCutoverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::FinalizeCutoverResponsePrivate
 * \brief The FinalizeCutoverResponsePrivate class provides private implementation for FinalizeCutoverResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a FinalizeCutoverResponsePrivate object with public implementation \a q.
 */
FinalizeCutoverResponsePrivate::FinalizeCutoverResponsePrivate(
    FinalizeCutoverResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn FinalizeCutover response element from \a xml.
 */
void FinalizeCutoverResponsePrivate::parseFinalizeCutoverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FinalizeCutoverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
