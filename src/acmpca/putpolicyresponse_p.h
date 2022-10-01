// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOLICYRESPONSE_P_H
#define QTAWS_PUTPOLICYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class PutPolicyResponse;

class PutPolicyResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit PutPolicyResponsePrivate(PutPolicyResponse * const q);

    void parsePutPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPolicyResponse)
    Q_DISABLE_COPY(PutPolicyResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
