// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYRESOURCERESPONSE_P_H
#define QTAWS_LISTRECOVERYPOINTSBYRESOURCERESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByResourceResponse;

class ListRecoveryPointsByResourceResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListRecoveryPointsByResourceResponsePrivate(ListRecoveryPointsByResourceResponse * const q);

    void parseListRecoveryPointsByResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecoveryPointsByResourceResponse)
    Q_DISABLE_COPY(ListRecoveryPointsByResourceResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
