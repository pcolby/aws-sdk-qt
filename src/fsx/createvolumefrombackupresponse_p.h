// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEFROMBACKUPRESPONSE_P_H
#define QTAWS_CREATEVOLUMEFROMBACKUPRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateVolumeFromBackupResponse;

class CreateVolumeFromBackupResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateVolumeFromBackupResponsePrivate(CreateVolumeFromBackupResponse * const q);

    void parseCreateVolumeFromBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVolumeFromBackupResponse)
    Q_DISABLE_COPY(CreateVolumeFromBackupResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
