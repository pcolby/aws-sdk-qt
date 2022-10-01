// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPRESPONSE_P_H
#define QTAWS_DELETEBACKUPRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class DeleteBackupResponse;

class DeleteBackupResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit DeleteBackupResponsePrivate(DeleteBackupResponse * const q);

    void parseDeleteBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupResponse)
    Q_DISABLE_COPY(DeleteBackupResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
