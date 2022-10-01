// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOTERMINATIONPOLICYRESPONSE_P_H
#define QTAWS_GETAUTOTERMINATIONPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class GetAutoTerminationPolicyResponse;

class GetAutoTerminationPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit GetAutoTerminationPolicyResponsePrivate(GetAutoTerminationPolicyResponse * const q);

    void parseGetAutoTerminationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAutoTerminationPolicyResponse)
    Q_DISABLE_COPY(GetAutoTerminationPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
