// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFREETRIALINFORESPONSE_P_H
#define QTAWS_BATCHGETFREETRIALINFORESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetFreeTrialInfoResponse;

class BatchGetFreeTrialInfoResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit BatchGetFreeTrialInfoResponsePrivate(BatchGetFreeTrialInfoResponse * const q);

    void parseBatchGetFreeTrialInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetFreeTrialInfoResponse)
    Q_DISABLE_COPY(BatchGetFreeTrialInfoResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
