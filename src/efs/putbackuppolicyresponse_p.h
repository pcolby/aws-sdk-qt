// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPPOLICYRESPONSE_P_H
#define QTAWS_PUTBACKUPPOLICYRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class PutBackupPolicyResponse;

class PutBackupPolicyResponsePrivate : public EfsResponsePrivate {

public:

    explicit PutBackupPolicyResponsePrivate(PutBackupPolicyResponse * const q);

    void parsePutBackupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBackupPolicyResponse)
    Q_DISABLE_COPY(PutBackupPolicyResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
