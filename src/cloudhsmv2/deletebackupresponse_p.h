// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPRESPONSE_P_H
#define QTAWS_DELETEBACKUPRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteBackupResponse;

class DeleteBackupResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit DeleteBackupResponsePrivate(DeleteBackupResponse * const q);

    void parseDeleteBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupResponse)
    Q_DISABLE_COPY(DeleteBackupResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
