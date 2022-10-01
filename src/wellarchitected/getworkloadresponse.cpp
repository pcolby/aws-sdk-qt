// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkloadresponse.h"
#include "getworkloadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetWorkloadResponse
 * \brief The GetWorkloadResponse class provides an interace for WellArchitected GetWorkload responses.
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
 * \sa WellArchitectedClient::getWorkload
 */

/*!
 * Constructs a GetWorkloadResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkloadResponse::GetWorkloadResponse(
        const GetWorkloadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetWorkloadResponsePrivate(this), parent)
{
    setRequest(new GetWorkloadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkloadRequest * GetWorkloadResponse::request() const
{
    Q_D(const GetWorkloadResponse);
    return static_cast<const GetWorkloadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetWorkload \a response.
 */
void GetWorkloadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkloadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetWorkloadResponsePrivate
 * \brief The GetWorkloadResponsePrivate class provides private implementation for GetWorkloadResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetWorkloadResponsePrivate object with public implementation \a q.
 */
GetWorkloadResponsePrivate::GetWorkloadResponsePrivate(
    GetWorkloadResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetWorkload response element from \a xml.
 */
void GetWorkloadResponsePrivate::parseGetWorkloadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkloadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
