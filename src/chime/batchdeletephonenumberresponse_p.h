// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPHONENUMBERRESPONSE_P_H
#define QTAWS_BATCHDELETEPHONENUMBERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchDeletePhoneNumberResponse;

class BatchDeletePhoneNumberResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchDeletePhoneNumberResponsePrivate(BatchDeletePhoneNumberResponse * const q);

    void parseBatchDeletePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeletePhoneNumberResponse)
    Q_DISABLE_COPY(BatchDeletePhoneNumberResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
