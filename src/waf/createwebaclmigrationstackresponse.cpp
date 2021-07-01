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

#include "createwebaclmigrationstackresponse.h"
#include "createwebaclmigrationstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::CreateWebACLMigrationStackResponse
 * \brief The CreateWebACLMigrationStackResponse class provides an interace for WAF CreateWebACLMigrationStack responses.
 *
 * \inmodule QtAwsWAF
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
 * \sa WafClient::createWebACLMigrationStack
 */

/*!
 * Constructs a CreateWebACLMigrationStackResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWebACLMigrationStackResponse::CreateWebACLMigrationStackResponse(
        const CreateWebACLMigrationStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new CreateWebACLMigrationStackResponsePrivate(this), parent)
{
    setRequest(new CreateWebACLMigrationStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWebACLMigrationStackRequest * CreateWebACLMigrationStackResponse::request() const
{
    Q_D(const CreateWebACLMigrationStackResponse);
    return static_cast<const CreateWebACLMigrationStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF CreateWebACLMigrationStack \a response.
 */
void CreateWebACLMigrationStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWebACLMigrationStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::CreateWebACLMigrationStackResponsePrivate
 * \brief The CreateWebACLMigrationStackResponsePrivate class provides private implementation for CreateWebACLMigrationStackResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a CreateWebACLMigrationStackResponsePrivate object with public implementation \a q.
 */
CreateWebACLMigrationStackResponsePrivate::CreateWebACLMigrationStackResponsePrivate(
    CreateWebACLMigrationStackResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF CreateWebACLMigrationStack response element from \a xml.
 */
void CreateWebACLMigrationStackResponsePrivate::parseCreateWebACLMigrationStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebACLMigrationStackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAF
} // namespace QtAws
