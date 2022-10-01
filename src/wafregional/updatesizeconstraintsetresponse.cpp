// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesizeconstraintsetresponse.h"
#include "updatesizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::UpdateSizeConstraintSetResponse
 * \brief The UpdateSizeConstraintSetResponse class provides an interace for WafRegional UpdateSizeConstraintSet responses.
 *
 * \inmodule QtAwsWafRegional
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Regional Classic API Reference</i> for using AWS WAF Classic with the AWS resources, Elastic Load
 *  Balancing (ELB) Application Load Balancers and API Gateway APIs. The AWS WAF Classic actions and data types listed in
 *  the reference are available for protecting Elastic Load Balancing (ELB) Application Load Balancers and API Gateway APIs.
 *  You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF Classic API actions, data types, and errors. For detailed
 *  information about AWS WAF Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafRegionalClient::updateSizeConstraintSet
 */

/*!
 * Constructs a UpdateSizeConstraintSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSizeConstraintSetResponse::UpdateSizeConstraintSetResponse(
        const UpdateSizeConstraintSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafRegionalResponse(new UpdateSizeConstraintSetResponsePrivate(this), parent)
{
    setRequest(new UpdateSizeConstraintSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSizeConstraintSetRequest * UpdateSizeConstraintSetResponse::request() const
{
    Q_D(const UpdateSizeConstraintSetResponse);
    return static_cast<const UpdateSizeConstraintSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WafRegional UpdateSizeConstraintSet \a response.
 */
void UpdateSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSizeConstraintSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WafRegional::UpdateSizeConstraintSetResponsePrivate
 * \brief The UpdateSizeConstraintSetResponsePrivate class provides private implementation for UpdateSizeConstraintSetResponse.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a UpdateSizeConstraintSetResponsePrivate object with public implementation \a q.
 */
UpdateSizeConstraintSetResponsePrivate::UpdateSizeConstraintSetResponsePrivate(
    UpdateSizeConstraintSetResponse * const q) : WafRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WafRegional UpdateSizeConstraintSet response element from \a xml.
 */
void UpdateSizeConstraintSetResponsePrivate::parseUpdateSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSizeConstraintSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WafRegional
} // namespace QtAws
