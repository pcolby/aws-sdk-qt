// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREBACKUPRESPONSE_P_H
#define QTAWS_RESTOREBACKUPRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class RestoreBackupResponse;

class RestoreBackupResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit RestoreBackupResponsePrivate(RestoreBackupResponse * const q);

    void parseRestoreBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreBackupResponse)
    Q_DISABLE_COPY(RestoreBackupResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
