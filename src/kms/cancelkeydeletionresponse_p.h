// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELKEYDELETIONRESPONSE_P_H
#define QTAWS_CANCELKEYDELETIONRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class CancelKeyDeletionResponse;

class CancelKeyDeletionResponsePrivate : public KmsResponsePrivate {

public:

    explicit CancelKeyDeletionResponsePrivate(CancelKeyDeletionResponse * const q);

    void parseCancelKeyDeletionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelKeyDeletionResponse)
    Q_DISABLE_COPY(CancelKeyDeletionResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
