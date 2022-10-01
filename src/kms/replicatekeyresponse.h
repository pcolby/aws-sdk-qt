// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATEKEYRESPONSE_H
#define QTAWS_REPLICATEKEYRESPONSE_H

#include "kmsresponse.h"
#include "replicatekeyrequest.h"

namespace QtAws {
namespace Kms {

class ReplicateKeyResponsePrivate;

class QTAWSKMS_EXPORT ReplicateKeyResponse : public KmsResponse {
    Q_OBJECT

public:
    ReplicateKeyResponse(const ReplicateKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplicateKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplicateKeyResponse)
    Q_DISABLE_COPY(ReplicateKeyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
