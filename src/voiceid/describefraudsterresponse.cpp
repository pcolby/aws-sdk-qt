// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefraudsterresponse.h"
#include "describefraudsterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeFraudsterResponse
 * \brief The DescribeFraudsterResponse class provides an interace for VoiceId DescribeFraudster responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeFraudster
 */

/*!
 * Constructs a DescribeFraudsterResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFraudsterResponse::DescribeFraudsterResponse(
        const DescribeFraudsterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DescribeFraudsterResponsePrivate(this), parent)
{
    setRequest(new DescribeFraudsterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFraudsterRequest * DescribeFraudsterResponse::request() const
{
    Q_D(const DescribeFraudsterResponse);
    return static_cast<const DescribeFraudsterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DescribeFraudster \a response.
 */
void DescribeFraudsterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFraudsterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DescribeFraudsterResponsePrivate
 * \brief The DescribeFraudsterResponsePrivate class provides private implementation for DescribeFraudsterResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeFraudsterResponsePrivate object with public implementation \a q.
 */
DescribeFraudsterResponsePrivate::DescribeFraudsterResponsePrivate(
    DescribeFraudsterResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DescribeFraudster response element from \a xml.
 */
void DescribeFraudsterResponsePrivate::parseDescribeFraudsterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFraudsterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
