// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYRESPONSE_H
#define QTAWS_CREATEKEYRESPONSE_H

#include "kmsresponse.h"
#include "createkeyrequest.h"

namespace QtAws {
namespace Kms {

class CreateKeyResponsePrivate;

class QTAWSKMS_EXPORT CreateKeyResponse : public KmsResponse {
    Q_OBJECT

public:
    CreateKeyResponse(const CreateKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyResponse)
    Q_DISABLE_COPY(CreateKeyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
