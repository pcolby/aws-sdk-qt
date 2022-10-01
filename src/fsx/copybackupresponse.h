// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPRESPONSE_H
#define QTAWS_COPYBACKUPRESPONSE_H

#include "fsxresponse.h"
#include "copybackuprequest.h"

namespace QtAws {
namespace FSx {

class CopyBackupResponsePrivate;

class QTAWSFSX_EXPORT CopyBackupResponse : public FSxResponse {
    Q_OBJECT

public:
    CopyBackupResponse(const CopyBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyBackupResponse)
    Q_DISABLE_COPY(CopyBackupResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
