// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNRESPONSE_P_H
#define QTAWS_SIGNRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class SignResponse;

class SignResponsePrivate : public KmsResponsePrivate {

public:

    explicit SignResponsePrivate(SignResponse * const q);

    void parseSignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SignResponse)
    Q_DISABLE_COPY(SignResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
