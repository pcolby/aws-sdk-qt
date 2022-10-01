// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttestresponse.h"
#include "starttestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::StartTestResponse
 * \brief The StartTestResponse class provides an interace for Mgn StartTest responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::startTest
 */

/*!
 * Constructs a StartTestResponse object for \a reply to \a request, with parent \a parent.
 */
StartTestResponse::StartTestResponse(
        const StartTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new StartTestResponsePrivate(this), parent)
{
    setRequest(new StartTestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTestRequest * StartTestResponse::request() const
{
    Q_D(const StartTestResponse);
    return static_cast<const StartTestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn StartTest \a response.
 */
void StartTestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::StartTestResponsePrivate
 * \brief The StartTestResponsePrivate class provides private implementation for StartTestResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a StartTestResponsePrivate object with public implementation \a q.
 */
StartTestResponsePrivate::StartTestResponsePrivate(
    StartTestResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn StartTest response element from \a xml.
 */
void StartTestResponsePrivate::parseStartTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
