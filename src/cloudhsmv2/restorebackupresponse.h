// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREBACKUPRESPONSE_H
#define QTAWS_RESTOREBACKUPRESPONSE_H

#include "cloudhsmv2response.h"
#include "restorebackuprequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class RestoreBackupResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT RestoreBackupResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    RestoreBackupResponse(const RestoreBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreBackupResponse)
    Q_DISABLE_COPY(RestoreBackupResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
