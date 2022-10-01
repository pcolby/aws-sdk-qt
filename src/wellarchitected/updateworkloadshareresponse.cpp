// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkloadshareresponse.h"
#include "updateworkloadshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadShareResponse
 * \brief The UpdateWorkloadShareResponse class provides an interace for WellArchitected UpdateWorkloadShare responses.
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
 * \sa WellArchitectedClient::updateWorkloadShare
 */

/*!
 * Constructs a UpdateWorkloadShareResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkloadShareResponse::UpdateWorkloadShareResponse(
        const UpdateWorkloadShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpdateWorkloadShareResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkloadShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkloadShareRequest * UpdateWorkloadShareResponse::request() const
{
    Q_D(const UpdateWorkloadShareResponse);
    return static_cast<const UpdateWorkloadShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpdateWorkloadShare \a response.
 */
void UpdateWorkloadShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkloadShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadShareResponsePrivate
 * \brief The UpdateWorkloadShareResponsePrivate class provides private implementation for UpdateWorkloadShareResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateWorkloadShareResponsePrivate object with public implementation \a q.
 */
UpdateWorkloadShareResponsePrivate::UpdateWorkloadShareResponsePrivate(
    UpdateWorkloadShareResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpdateWorkloadShare response element from \a xml.
 */
void UpdateWorkloadShareResponsePrivate::parseUpdateWorkloadShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkloadShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
