/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createipsetresponse.h"
#include "createipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::CreateIPSetResponse
 * \brief The CreateIPSetResponse class provides an interace for WAF CreateIPSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::createIPSet
 */

/*!
 * Constructs a CreateIPSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIPSetResponse::CreateIPSetResponse(
        const CreateIPSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateIPSetResponsePrivate(this), parent)
{
    setRequest(new CreateIPSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIPSetRequest * CreateIPSetResponse::request() const
{
    Q_D(const CreateIPSetResponse);
    return static_cast<const CreateIPSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF CreateIPSet \a response.
 */
void CreateIPSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateIPSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::CreateIPSetResponsePrivate
 * \brief The CreateIPSetResponsePrivate class provides private implementation for CreateIPSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a CreateIPSetResponsePrivate object with public implementation \a q.
 */
CreateIPSetResponsePrivate::CreateIPSetResponsePrivate(
    CreateIPSetResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF CreateIPSet response element from \a xml.
 */
void CreateIPSetResponsePrivate::parseCreateIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIPSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
