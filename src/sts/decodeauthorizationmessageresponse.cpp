// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "decodeauthorizationmessageresponse.h"
#include "decodeauthorizationmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::DecodeAuthorizationMessageResponse
 * \brief The DecodeAuthorizationMessageResponse class provides an interace for Sts DecodeAuthorizationMessage responses.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::decodeAuthorizationMessage
 */

/*!
 * Constructs a DecodeAuthorizationMessageResponse object for \a reply to \a request, with parent \a parent.
 */
DecodeAuthorizationMessageResponse::DecodeAuthorizationMessageResponse(
        const DecodeAuthorizationMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new DecodeAuthorizationMessageResponsePrivate(this), parent)
{
    setRequest(new DecodeAuthorizationMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DecodeAuthorizationMessageRequest * DecodeAuthorizationMessageResponse::request() const
{
    Q_D(const DecodeAuthorizationMessageResponse);
    return static_cast<const DecodeAuthorizationMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts DecodeAuthorizationMessage \a response.
 */
void DecodeAuthorizationMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DecodeAuthorizationMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::DecodeAuthorizationMessageResponsePrivate
 * \brief The DecodeAuthorizationMessageResponsePrivate class provides private implementation for DecodeAuthorizationMessageResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a DecodeAuthorizationMessageResponsePrivate object with public implementation \a q.
 */
DecodeAuthorizationMessageResponsePrivate::DecodeAuthorizationMessageResponsePrivate(
    DecodeAuthorizationMessageResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts DecodeAuthorizationMessage response element from \a xml.
 */
void DecodeAuthorizationMessageResponsePrivate::parseDecodeAuthorizationMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecodeAuthorizationMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
