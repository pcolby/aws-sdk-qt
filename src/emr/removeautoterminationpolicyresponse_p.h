// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOTERMINATIONPOLICYRESPONSE_P_H
#define QTAWS_REMOVEAUTOTERMINATIONPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class RemoveAutoTerminationPolicyResponse;

class RemoveAutoTerminationPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit RemoveAutoTerminationPolicyResponsePrivate(RemoveAutoTerminationPolicyResponse * const q);

    void parseRemoveAutoTerminationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAutoTerminationPolicyResponse)
    Q_DISABLE_COPY(RemoveAutoTerminationPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
