// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettemplateresponse.h"
#include "gettemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetTemplateResponse
 * \brief The GetTemplateResponse class provides an interace for Ses GetTemplate responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getTemplate
 */

/*!
 * Constructs a GetTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetTemplateResponse::GetTemplateResponse(
        const GetTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetTemplateResponsePrivate(this), parent)
{
    setRequest(new GetTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTemplateRequest * GetTemplateResponse::request() const
{
    Q_D(const GetTemplateResponse);
    return static_cast<const GetTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetTemplate \a response.
 */
void GetTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetTemplateResponsePrivate
 * \brief The GetTemplateResponsePrivate class provides private implementation for GetTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetTemplateResponsePrivate object with public implementation \a q.
 */
GetTemplateResponsePrivate::GetTemplateResponsePrivate(
    GetTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetTemplate response element from \a xml.
 */
void GetTemplateResponsePrivate::parseGetTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
