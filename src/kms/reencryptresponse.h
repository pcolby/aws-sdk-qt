// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REENCRYPTRESPONSE_H
#define QTAWS_REENCRYPTRESPONSE_H

#include "kmsresponse.h"
#include "reencryptrequest.h"

namespace QtAws {
namespace Kms {

class ReEncryptResponsePrivate;

class QTAWSKMS_EXPORT ReEncryptResponse : public KmsResponse {
    Q_OBJECT

public:
    ReEncryptResponse(const ReEncryptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReEncryptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReEncryptResponse)
    Q_DISABLE_COPY(ReEncryptResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
