// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdedicatedipresponse.h"
#include "getdedicatedipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDedicatedIpResponse
 * \brief The GetDedicatedIpResponse class provides an interace for SESv2 GetDedicatedIp responses.
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
 * \sa SESv2Client::getDedicatedIp
 */

/*!
 * Constructs a GetDedicatedIpResponse object for \a reply to \a request, with parent \a parent.
 */
GetDedicatedIpResponse::GetDedicatedIpResponse(
        const GetDedicatedIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetDedicatedIpResponsePrivate(this), parent)
{
    setRequest(new GetDedicatedIpRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDedicatedIpRequest * GetDedicatedIpResponse::request() const
{
    Q_D(const GetDedicatedIpResponse);
    return static_cast<const GetDedicatedIpRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetDedicatedIp \a response.
 */
void GetDedicatedIpResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDedicatedIpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetDedicatedIpResponsePrivate
 * \brief The GetDedicatedIpResponsePrivate class provides private implementation for GetDedicatedIpResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDedicatedIpResponsePrivate object with public implementation \a q.
 */
GetDedicatedIpResponsePrivate::GetDedicatedIpResponsePrivate(
    GetDedicatedIpResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetDedicatedIp response element from \a xml.
 */
void GetDedicatedIpResponsePrivate::parseGetDedicatedIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDedicatedIpResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
