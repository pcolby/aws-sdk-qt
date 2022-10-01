// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpolicyresponse.h"
#include "putpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::PutPolicyResponse
 * \brief The PutPolicyResponse class provides an interace for MediaConvert PutPolicy responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::putPolicy
 */

/*!
 * Constructs a PutPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutPolicyResponse::PutPolicyResponse(
        const PutPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new PutPolicyResponsePrivate(this), parent)
{
    setRequest(new PutPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPolicyRequest * PutPolicyResponse::request() const
{
    Q_D(const PutPolicyResponse);
    return static_cast<const PutPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert PutPolicy \a response.
 */
void PutPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::PutPolicyResponsePrivate
 * \brief The PutPolicyResponsePrivate class provides private implementation for PutPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a PutPolicyResponsePrivate object with public implementation \a q.
 */
PutPolicyResponsePrivate::PutPolicyResponsePrivate(
    PutPolicyResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert PutPolicy response element from \a xml.
 */
void PutPolicyResponsePrivate::parsePutPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
