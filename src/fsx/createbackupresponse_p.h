// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPRESPONSE_P_H
#define QTAWS_CREATEBACKUPRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateBackupResponse;

class CreateBackupResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateBackupResponsePrivate(CreateBackupResponse * const q);

    void parseCreateBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackupResponse)
    Q_DISABLE_COPY(CreateBackupResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
