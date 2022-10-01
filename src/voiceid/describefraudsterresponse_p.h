// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAUDSTERRESPONSE_P_H
#define QTAWS_DESCRIBEFRAUDSTERRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class DescribeFraudsterResponse;

class DescribeFraudsterResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit DescribeFraudsterResponsePrivate(DescribeFraudsterResponse * const q);

    void parseDescribeFraudsterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFraudsterResponse)
    Q_DISABLE_COPY(DescribeFraudsterResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
