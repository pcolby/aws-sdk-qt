/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesizeconstraintsetresponse.h"
#include "updatesizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateSizeConstraintSetResponse
 * \brief The UpdateSizeConstraintSetResponse class provides an interace for WAF UpdateSizeConstraintSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::updateSizeConstraintSet
 */

/*!
 * Constructs a UpdateSizeConstraintSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSizeConstraintSetResponse::UpdateSizeConstraintSetResponse(
        const UpdateSizeConstraintSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new UpdateSizeConstraintSetResponsePrivate(this), parent)
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
 * Parses a successful WAF UpdateSizeConstraintSet \a response.
 */
void UpdateSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSizeConstraintSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::UpdateSizeConstraintSetResponsePrivate
 * \brief The UpdateSizeConstraintSetResponsePrivate class provides private implementation for UpdateSizeConstraintSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateSizeConstraintSetResponsePrivate object with public implementation \a q.
 */
UpdateSizeConstraintSetResponsePrivate::UpdateSizeConstraintSetResponsePrivate(
    UpdateSizeConstraintSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF UpdateSizeConstraintSet response element from \a xml.
 */
void UpdateSizeConstraintSetResponsePrivate::parseUpdateSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSizeConstraintSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAF
} // namespace QtAws
