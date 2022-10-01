// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYRESPONSE_P_H
#define QTAWS_DELETEPOLICYRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class DeletePolicyResponse;

class DeletePolicyResponsePrivate : public FmsResponsePrivate {

public:

    explicit DeletePolicyResponsePrivate(DeletePolicyResponse * const q);

    void parseDeletePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePolicyResponse)
    Q_DISABLE_COPY(DeletePolicyResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
