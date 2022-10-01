// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdedicatedipsresponse.h"
#include "getdedicatedipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDedicatedIpsResponse
 * \brief The GetDedicatedIpsResponse class provides an interace for SESv2 GetDedicatedIps responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getDedicatedIps
 */

/*!
 * Constructs a GetDedicatedIpsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDedicatedIpsResponse::GetDedicatedIpsResponse(
        const GetDedicatedIpsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetDedicatedIpsResponsePrivate(this), parent)
{
    setRequest(new GetDedicatedIpsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDedicatedIpsRequest * GetDedicatedIpsResponse::request() const
{
    Q_D(const GetDedicatedIpsResponse);
    return static_cast<const GetDedicatedIpsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetDedicatedIps \a response.
 */
void GetDedicatedIpsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDedicatedIpsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetDedicatedIpsResponsePrivate
 * \brief The GetDedicatedIpsResponsePrivate class provides private implementation for GetDedicatedIpsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDedicatedIpsResponsePrivate object with public implementation \a q.
 */
GetDedicatedIpsResponsePrivate::GetDedicatedIpsResponsePrivate(
    GetDedicatedIpsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetDedicatedIps response element from \a xml.
 */
void GetDedicatedIpsResponsePrivate::parseGetDedicatedIpsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDedicatedIpsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
