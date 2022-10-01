// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPRESPONSE_P_H
#define QTAWS_BACKUPRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Backup {

class BackupResponse;

class BackupResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BackupResponsePrivate(BackupResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BackupResponse)
    Q_DISABLE_COPY(BackupResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
