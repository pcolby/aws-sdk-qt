// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplateresponse.h"
#include "updatetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateTemplateResponse
 * \brief The UpdateTemplateResponse class provides an interace for Ses UpdateTemplate responses.
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
 * \sa SesClient::updateTemplate
 */

/*!
 * Constructs a UpdateTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTemplateResponse::UpdateTemplateResponse(
        const UpdateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTemplateRequest * UpdateTemplateResponse::request() const
{
    Q_D(const UpdateTemplateResponse);
    return static_cast<const UpdateTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses UpdateTemplate \a response.
 */
void UpdateTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateTemplateResponsePrivate
 * \brief The UpdateTemplateResponsePrivate class provides private implementation for UpdateTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateTemplateResponsePrivate object with public implementation \a q.
 */
UpdateTemplateResponsePrivate::UpdateTemplateResponsePrivate(
    UpdateTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateTemplate response element from \a xml.
 */
void UpdateTemplateResponsePrivate::parseUpdateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
