// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensreviewresponse.h"
#include "getlensreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensReviewResponse
 * \brief The GetLensReviewResponse class provides an interace for WellArchitected GetLensReview responses.
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
 * \sa WellArchitectedClient::getLensReview
 */

/*!
 * Constructs a GetLensReviewResponse object for \a reply to \a request, with parent \a parent.
 */
GetLensReviewResponse::GetLensReviewResponse(
        const GetLensReviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetLensReviewResponsePrivate(this), parent)
{
    setRequest(new GetLensReviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLensReviewRequest * GetLensReviewResponse::request() const
{
    Q_D(const GetLensReviewResponse);
    return static_cast<const GetLensReviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetLensReview \a response.
 */
void GetLensReviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLensReviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetLensReviewResponsePrivate
 * \brief The GetLensReviewResponsePrivate class provides private implementation for GetLensReviewResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensReviewResponsePrivate object with public implementation \a q.
 */
GetLensReviewResponsePrivate::GetLensReviewResponsePrivate(
    GetLensReviewResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetLensReview response element from \a xml.
 */
void GetLensReviewResponsePrivate::parseGetLensReviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLensReviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
