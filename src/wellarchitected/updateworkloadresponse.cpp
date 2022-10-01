// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkloadresponse.h"
#include "updateworkloadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadResponse
 * \brief The UpdateWorkloadResponse class provides an interace for WellArchitected UpdateWorkload responses.
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
 * \sa WellArchitectedClient::updateWorkload
 */

/*!
 * Constructs a UpdateWorkloadResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkloadResponse::UpdateWorkloadResponse(
        const UpdateWorkloadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpdateWorkloadResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkloadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkloadRequest * UpdateWorkloadResponse::request() const
{
    Q_D(const UpdateWorkloadResponse);
    return static_cast<const UpdateWorkloadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpdateWorkload \a response.
 */
void UpdateWorkloadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkloadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpdateWorkloadResponsePrivate
 * \brief The UpdateWorkloadResponsePrivate class provides private implementation for UpdateWorkloadResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateWorkloadResponsePrivate object with public implementation \a q.
 */
UpdateWorkloadResponsePrivate::UpdateWorkloadResponsePrivate(
    UpdateWorkloadResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpdateWorkload response element from \a xml.
 */
void UpdateWorkloadResponsePrivate::parseUpdateWorkloadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkloadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
