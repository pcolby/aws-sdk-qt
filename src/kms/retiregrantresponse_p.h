// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETIREGRANTRESPONSE_P_H
#define QTAWS_RETIREGRANTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class RetireGrantResponse;

class RetireGrantResponsePrivate : public KmsResponsePrivate {

public:

    explicit RetireGrantResponsePrivate(RetireGrantResponse * const q);

    void parseRetireGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetireGrantResponse)
    Q_DISABLE_COPY(RetireGrantResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
