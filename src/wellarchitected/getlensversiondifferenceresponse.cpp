// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensversiondifferenceresponse.h"
#include "getlensversiondifferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensVersionDifferenceResponse
 * \brief The GetLensVersionDifferenceResponse class provides an interace for WellArchitected GetLensVersionDifference responses.
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
 * \sa WellArchitectedClient::getLensVersionDifference
 */

/*!
 * Constructs a GetLensVersionDifferenceResponse object for \a reply to \a request, with parent \a parent.
 */
GetLensVersionDifferenceResponse::GetLensVersionDifferenceResponse(
        const GetLensVersionDifferenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetLensVersionDifferenceResponsePrivate(this), parent)
{
    setRequest(new GetLensVersionDifferenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLensVersionDifferenceRequest * GetLensVersionDifferenceResponse::request() const
{
    Q_D(const GetLensVersionDifferenceResponse);
    return static_cast<const GetLensVersionDifferenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetLensVersionDifference \a response.
 */
void GetLensVersionDifferenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLensVersionDifferenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetLensVersionDifferenceResponsePrivate
 * \brief The GetLensVersionDifferenceResponsePrivate class provides private implementation for GetLensVersionDifferenceResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensVersionDifferenceResponsePrivate object with public implementation \a q.
 */
GetLensVersionDifferenceResponsePrivate::GetLensVersionDifferenceResponsePrivate(
    GetLensVersionDifferenceResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetLensVersionDifference response element from \a xml.
 */
void GetLensVersionDifferenceResponsePrivate::parseGetLensVersionDifferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLensVersionDifferenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
