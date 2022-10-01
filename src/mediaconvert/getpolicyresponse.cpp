// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpolicyresponse.h"
#include "getpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetPolicyResponse
 * \brief The GetPolicyResponse class provides an interace for MediaConvert GetPolicy responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getPolicy
 */

/*!
 * Constructs a GetPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetPolicyResponse::GetPolicyResponse(
        const GetPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetPolicyResponsePrivate(this), parent)
{
    setRequest(new GetPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPolicyRequest * GetPolicyResponse::request() const
{
    Q_D(const GetPolicyResponse);
    return static_cast<const GetPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert GetPolicy \a response.
 */
void GetPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::GetPolicyResponsePrivate
 * \brief The GetPolicyResponsePrivate class provides private implementation for GetPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetPolicyResponsePrivate object with public implementation \a q.
 */
GetPolicyResponsePrivate::GetPolicyResponsePrivate(
    GetPolicyResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert GetPolicy response element from \a xml.
 */
void GetPolicyResponsePrivate::parseGetPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
