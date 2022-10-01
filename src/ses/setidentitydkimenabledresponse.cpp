// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitydkimenabledresponse.h"
#include "setidentitydkimenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityDkimEnabledResponse
 * \brief The SetIdentityDkimEnabledResponse class provides an interace for Ses SetIdentityDkimEnabled responses.
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
 * \sa SesClient::setIdentityDkimEnabled
 */

/*!
 * Constructs a SetIdentityDkimEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
SetIdentityDkimEnabledResponse::SetIdentityDkimEnabledResponse(
        const SetIdentityDkimEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetIdentityDkimEnabledResponsePrivate(this), parent)
{
    setRequest(new SetIdentityDkimEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetIdentityDkimEnabledRequest * SetIdentityDkimEnabledResponse::request() const
{
    Q_D(const SetIdentityDkimEnabledResponse);
    return static_cast<const SetIdentityDkimEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SetIdentityDkimEnabled \a response.
 */
void SetIdentityDkimEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetIdentityDkimEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SetIdentityDkimEnabledResponsePrivate
 * \brief The SetIdentityDkimEnabledResponsePrivate class provides private implementation for SetIdentityDkimEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityDkimEnabledResponsePrivate object with public implementation \a q.
 */
SetIdentityDkimEnabledResponsePrivate::SetIdentityDkimEnabledResponsePrivate(
    SetIdentityDkimEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SetIdentityDkimEnabled response element from \a xml.
 */
void SetIdentityDkimEnabledResponsePrivate::parseSetIdentityDkimEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityDkimEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
