/*
    Copyright 2013-2021 Paul Colby

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

#include "deletesizeconstraintsetresponse.h"
#include "deletesizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::DeleteSizeConstraintSetResponse
 * \brief The DeleteSizeConstraintSetResponse class provides an interace for Waf DeleteSizeConstraintSet responses.
 *
 * \inmodule QtAwsWaf
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic</b> documentation. For more information, see <a
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
 *  This is the <i>AWS WAF Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The AWS WAF Classic
 *  actions and data types listed in the reference are available for protecting Amazon CloudFront distributions. You can use
 *  these actions and data types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed
 *  information about the AWS WAF Classic API actions, data types, and errors. For detailed information about AWS WAF
 *  Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafClient::deleteSizeConstraintSet
 */

/*!
 * Constructs a DeleteSizeConstraintSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSizeConstraintSetResponse::DeleteSizeConstraintSetResponse(
        const DeleteSizeConstraintSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new DeleteSizeConstraintSetResponsePrivate(this), parent)
{
    setRequest(new DeleteSizeConstraintSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSizeConstraintSetRequest * DeleteSizeConstraintSetResponse::request() const
{
    Q_D(const DeleteSizeConstraintSetResponse);
    return static_cast<const DeleteSizeConstraintSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Waf DeleteSizeConstraintSet \a response.
 */
void DeleteSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSizeConstraintSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Waf::DeleteSizeConstraintSetResponsePrivate
 * \brief The DeleteSizeConstraintSetResponsePrivate class provides private implementation for DeleteSizeConstraintSetResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a DeleteSizeConstraintSetResponsePrivate object with public implementation \a q.
 */
DeleteSizeConstraintSetResponsePrivate::DeleteSizeConstraintSetResponsePrivate(
    DeleteSizeConstraintSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a Waf DeleteSizeConstraintSet response element from \a xml.
 */
void DeleteSizeConstraintSetResponsePrivate::parseDeleteSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSizeConstraintSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Waf
} // namespace QtAws
