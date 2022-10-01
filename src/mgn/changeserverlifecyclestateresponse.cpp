// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changeserverlifecyclestateresponse.h"
#include "changeserverlifecyclestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::ChangeServerLifeCycleStateResponse
 * \brief The ChangeServerLifeCycleStateResponse class provides an interace for Mgn ChangeServerLifeCycleState responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::changeServerLifeCycleState
 */

/*!
 * Constructs a ChangeServerLifeCycleStateResponse object for \a reply to \a request, with parent \a parent.
 */
ChangeServerLifeCycleStateResponse::ChangeServerLifeCycleStateResponse(
        const ChangeServerLifeCycleStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new ChangeServerLifeCycleStateResponsePrivate(this), parent)
{
    setRequest(new ChangeServerLifeCycleStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangeServerLifeCycleStateRequest * ChangeServerLifeCycleStateResponse::request() const
{
    Q_D(const ChangeServerLifeCycleStateResponse);
    return static_cast<const ChangeServerLifeCycleStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn ChangeServerLifeCycleState \a response.
 */
void ChangeServerLifeCycleStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangeServerLifeCycleStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::ChangeServerLifeCycleStateResponsePrivate
 * \brief The ChangeServerLifeCycleStateResponsePrivate class provides private implementation for ChangeServerLifeCycleStateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a ChangeServerLifeCycleStateResponsePrivate object with public implementation \a q.
 */
ChangeServerLifeCycleStateResponsePrivate::ChangeServerLifeCycleStateResponsePrivate(
    ChangeServerLifeCycleStateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn ChangeServerLifeCycleState response element from \a xml.
 */
void ChangeServerLifeCycleStateResponsePrivate::parseChangeServerLifeCycleStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeServerLifeCycleStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
