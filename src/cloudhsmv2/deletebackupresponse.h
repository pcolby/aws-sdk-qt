// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPRESPONSE_H
#define QTAWS_DELETEBACKUPRESPONSE_H

#include "cloudhsmv2response.h"
#include "deletebackuprequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteBackupResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT DeleteBackupResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    DeleteBackupResponse(const DeleteBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupResponse)
    Q_DISABLE_COPY(DeleteBackupResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
