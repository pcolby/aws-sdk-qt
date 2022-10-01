// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkloadshareresponse.h"
#include "deleteworkloadshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadShareResponse
 * \brief The DeleteWorkloadShareResponse class provides an interace for WellArchitected DeleteWorkloadShare responses.
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
 * \sa WellArchitectedClient::deleteWorkloadShare
 */

/*!
 * Constructs a DeleteWorkloadShareResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkloadShareResponse::DeleteWorkloadShareResponse(
        const DeleteWorkloadShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new DeleteWorkloadShareResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkloadShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkloadShareRequest * DeleteWorkloadShareResponse::request() const
{
    Q_D(const DeleteWorkloadShareResponse);
    return static_cast<const DeleteWorkloadShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected DeleteWorkloadShare \a response.
 */
void DeleteWorkloadShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkloadShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadShareResponsePrivate
 * \brief The DeleteWorkloadShareResponsePrivate class provides private implementation for DeleteWorkloadShareResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DeleteWorkloadShareResponsePrivate object with public implementation \a q.
 */
DeleteWorkloadShareResponsePrivate::DeleteWorkloadShareResponsePrivate(
    DeleteWorkloadShareResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected DeleteWorkloadShare response element from \a xml.
 */
void DeleteWorkloadShareResponsePrivate::parseDeleteWorkloadShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkloadShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
