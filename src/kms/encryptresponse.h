// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENCRYPTRESPONSE_H
#define QTAWS_ENCRYPTRESPONSE_H

#include "kmsresponse.h"
#include "encryptrequest.h"

namespace QtAws {
namespace Kms {

class EncryptResponsePrivate;

class QTAWSKMS_EXPORT EncryptResponse : public KmsResponse {
    Q_OBJECT

public:
    EncryptResponse(const EncryptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EncryptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EncryptResponse)
    Q_DISABLE_COPY(EncryptResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
