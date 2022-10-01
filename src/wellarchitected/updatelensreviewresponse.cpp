// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelensreviewresponse.h"
#include "updatelensreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateLensReviewResponse
 * \brief The UpdateLensReviewResponse class provides an interace for WellArchitected UpdateLensReview responses.
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
 * \sa WellArchitectedClient::updateLensReview
 */

/*!
 * Constructs a UpdateLensReviewResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLensReviewResponse::UpdateLensReviewResponse(
        const UpdateLensReviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpdateLensReviewResponsePrivate(this), parent)
{
    setRequest(new UpdateLensReviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLensReviewRequest * UpdateLensReviewResponse::request() const
{
    Q_D(const UpdateLensReviewResponse);
    return static_cast<const UpdateLensReviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpdateLensReview \a response.
 */
void UpdateLensReviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLensReviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpdateLensReviewResponsePrivate
 * \brief The UpdateLensReviewResponsePrivate class provides private implementation for UpdateLensReviewResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateLensReviewResponsePrivate object with public implementation \a q.
 */
UpdateLensReviewResponsePrivate::UpdateLensReviewResponsePrivate(
    UpdateLensReviewResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpdateLensReview response element from \a xml.
 */
void UpdateLensReviewResponsePrivate::parseUpdateLensReviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLensReviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
