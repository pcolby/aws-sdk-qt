// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPHONENUMBERRESPONSE_P_H
#define QTAWS_BATCHUPDATEPHONENUMBERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchUpdatePhoneNumberResponse;

class BatchUpdatePhoneNumberResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchUpdatePhoneNumberResponsePrivate(BatchUpdatePhoneNumberResponse * const q);

    void parseBatchUpdatePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdatePhoneNumberResponse)
    Q_DISABLE_COPY(BatchUpdatePhoneNumberResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
