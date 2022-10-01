// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "upgradelensreviewresponse.h"
#include "upgradelensreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpgradeLensReviewResponse
 * \brief The UpgradeLensReviewResponse class provides an interace for WellArchitected UpgradeLensReview responses.
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
 * \sa WellArchitectedClient::upgradeLensReview
 */

/*!
 * Constructs a UpgradeLensReviewResponse object for \a reply to \a request, with parent \a parent.
 */
UpgradeLensReviewResponse::UpgradeLensReviewResponse(
        const UpgradeLensReviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpgradeLensReviewResponsePrivate(this), parent)
{
    setRequest(new UpgradeLensReviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpgradeLensReviewRequest * UpgradeLensReviewResponse::request() const
{
    Q_D(const UpgradeLensReviewResponse);
    return static_cast<const UpgradeLensReviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpgradeLensReview \a response.
 */
void UpgradeLensReviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpgradeLensReviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpgradeLensReviewResponsePrivate
 * \brief The UpgradeLensReviewResponsePrivate class provides private implementation for UpgradeLensReviewResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpgradeLensReviewResponsePrivate object with public implementation \a q.
 */
UpgradeLensReviewResponsePrivate::UpgradeLensReviewResponsePrivate(
    UpgradeLensReviewResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpgradeLensReview response element from \a xml.
 */
void UpgradeLensReviewResponsePrivate::parseUpgradeLensReviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpgradeLensReviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
