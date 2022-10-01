// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMPOLICYRESPONSE_P_H
#define QTAWS_DELETEFILESYSTEMPOLICYRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemPolicyResponse;

class DeleteFileSystemPolicyResponsePrivate : public EfsResponsePrivate {

public:

    explicit DeleteFileSystemPolicyResponsePrivate(DeleteFileSystemPolicyResponse * const q);

    void parseDeleteFileSystemPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFileSystemPolicyResponse)
    Q_DISABLE_COPY(DeleteFileSystemPolicyResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
