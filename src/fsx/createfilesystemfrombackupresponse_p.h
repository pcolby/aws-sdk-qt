// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMFROMBACKUPRESPONSE_P_H
#define QTAWS_CREATEFILESYSTEMFROMBACKUPRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateFileSystemFromBackupResponse;

class CreateFileSystemFromBackupResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateFileSystemFromBackupResponsePrivate(CreateFileSystemFromBackupResponse * const q);

    void parseCreateFileSystemFromBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFileSystemFromBackupResponse)
    Q_DISABLE_COPY(CreateFileSystemFromBackupResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
