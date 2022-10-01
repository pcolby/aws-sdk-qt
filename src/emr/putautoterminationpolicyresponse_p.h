// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOTERMINATIONPOLICYRESPONSE_P_H
#define QTAWS_PUTAUTOTERMINATIONPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class PutAutoTerminationPolicyResponse;

class PutAutoTerminationPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit PutAutoTerminationPolicyResponsePrivate(PutAutoTerminationPolicyResponse * const q);

    void parsePutAutoTerminationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAutoTerminationPolicyResponse)
    Q_DISABLE_COPY(PutAutoTerminationPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
