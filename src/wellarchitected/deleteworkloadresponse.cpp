// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkloadresponse.h"
#include "deleteworkloadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadResponse
 * \brief The DeleteWorkloadResponse class provides an interace for WellArchitected DeleteWorkload responses.
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
 * \sa WellArchitectedClient::deleteWorkload
 */

/*!
 * Constructs a DeleteWorkloadResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkloadResponse::DeleteWorkloadResponse(
        const DeleteWorkloadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new DeleteWorkloadResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkloadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkloadRequest * DeleteWorkloadResponse::request() const
{
    Q_D(const DeleteWorkloadResponse);
    return static_cast<const DeleteWorkloadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected DeleteWorkload \a response.
 */
void DeleteWorkloadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkloadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadResponsePrivate
 * \brief The DeleteWorkloadResponsePrivate class provides private implementation for DeleteWorkloadResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DeleteWorkloadResponsePrivate object with public implementation \a q.
 */
DeleteWorkloadResponsePrivate::DeleteWorkloadResponsePrivate(
    DeleteWorkloadResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected DeleteWorkload response element from \a xml.
 */
void DeleteWorkloadResponsePrivate::parseDeleteWorkloadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkloadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
