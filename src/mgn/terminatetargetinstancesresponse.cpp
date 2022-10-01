// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminatetargetinstancesresponse.h"
#include "terminatetargetinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::TerminateTargetInstancesResponse
 * \brief The TerminateTargetInstancesResponse class provides an interace for Mgn TerminateTargetInstances responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::terminateTargetInstances
 */

/*!
 * Constructs a TerminateTargetInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateTargetInstancesResponse::TerminateTargetInstancesResponse(
        const TerminateTargetInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new TerminateTargetInstancesResponsePrivate(this), parent)
{
    setRequest(new TerminateTargetInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateTargetInstancesRequest * TerminateTargetInstancesResponse::request() const
{
    Q_D(const TerminateTargetInstancesResponse);
    return static_cast<const TerminateTargetInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn TerminateTargetInstances \a response.
 */
void TerminateTargetInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateTargetInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::TerminateTargetInstancesResponsePrivate
 * \brief The TerminateTargetInstancesResponsePrivate class provides private implementation for TerminateTargetInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a TerminateTargetInstancesResponsePrivate object with public implementation \a q.
 */
TerminateTargetInstancesResponsePrivate::TerminateTargetInstancesResponsePrivate(
    TerminateTargetInstancesResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn TerminateTargetInstances response element from \a xml.
 */
void TerminateTargetInstancesResponsePrivate::parseTerminateTargetInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateTargetInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
