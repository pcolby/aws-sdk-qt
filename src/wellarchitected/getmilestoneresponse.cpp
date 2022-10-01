// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmilestoneresponse.h"
#include "getmilestoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetMilestoneResponse
 * \brief The GetMilestoneResponse class provides an interace for WellArchitected GetMilestone responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getMilestone
 */

/*!
 * Constructs a GetMilestoneResponse object for \a reply to \a request, with parent \a parent.
 */
GetMilestoneResponse::GetMilestoneResponse(
        const GetMilestoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetMilestoneResponsePrivate(this), parent)
{
    setRequest(new GetMilestoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMilestoneRequest * GetMilestoneResponse::request() const
{
    Q_D(const GetMilestoneResponse);
    return static_cast<const GetMilestoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetMilestone \a response.
 */
void GetMilestoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMilestoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetMilestoneResponsePrivate
 * \brief The GetMilestoneResponsePrivate class provides private implementation for GetMilestoneResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetMilestoneResponsePrivate object with public implementation \a q.
 */
GetMilestoneResponsePrivate::GetMilestoneResponsePrivate(
    GetMilestoneResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetMilestone response element from \a xml.
 */
void GetMilestoneResponsePrivate::parseGetMilestoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMilestoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
