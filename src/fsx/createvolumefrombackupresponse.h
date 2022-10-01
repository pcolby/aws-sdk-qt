// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEFROMBACKUPRESPONSE_H
#define QTAWS_CREATEVOLUMEFROMBACKUPRESPONSE_H

#include "fsxresponse.h"
#include "createvolumefrombackuprequest.h"

namespace QtAws {
namespace FSx {

class CreateVolumeFromBackupResponsePrivate;

class QTAWSFSX_EXPORT CreateVolumeFromBackupResponse : public FSxResponse {
    Q_OBJECT

public:
    CreateVolumeFromBackupResponse(const CreateVolumeFromBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVolumeFromBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVolumeFromBackupResponse)
    Q_DISABLE_COPY(CreateVolumeFromBackupResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
