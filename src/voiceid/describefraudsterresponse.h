// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAUDSTERRESPONSE_H
#define QTAWS_DESCRIBEFRAUDSTERRESPONSE_H

#include "voiceidresponse.h"
#include "describefraudsterrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeFraudsterResponsePrivate;

class QTAWSVOICEID_EXPORT DescribeFraudsterResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    DescribeFraudsterResponse(const DescribeFraudsterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFraudsterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFraudsterResponse)
    Q_DISABLE_COPY(DescribeFraudsterResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
