// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYRESPONSE_H
#define QTAWS_ENABLEKEYRESPONSE_H

#include "kmsresponse.h"
#include "enablekeyrequest.h"

namespace QtAws {
namespace Kms {

class EnableKeyResponsePrivate;

class QTAWSKMS_EXPORT EnableKeyResponse : public KmsResponse {
    Q_OBJECT

public:
    EnableKeyResponse(const EnableKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableKeyResponse)
    Q_DISABLE_COPY(EnableKeyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
