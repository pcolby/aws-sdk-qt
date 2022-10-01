// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILESYSTEMPOLICYRESPONSE_P_H
#define QTAWS_PUTFILESYSTEMPOLICYRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class PutFileSystemPolicyResponse;

class PutFileSystemPolicyResponsePrivate : public EfsResponsePrivate {

public:

    explicit PutFileSystemPolicyResponsePrivate(PutFileSystemPolicyResponse * const q);

    void parsePutFileSystemPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFileSystemPolicyResponse)
    Q_DISABLE_COPY(PutFileSystemPolicyResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
