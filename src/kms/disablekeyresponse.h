// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYRESPONSE_H
#define QTAWS_DISABLEKEYRESPONSE_H

#include "kmsresponse.h"
#include "disablekeyrequest.h"

namespace QtAws {
namespace Kms {

class DisableKeyResponsePrivate;

class QTAWSKMS_EXPORT DisableKeyResponse : public KmsResponse {
    Q_OBJECT

public:
    DisableKeyResponse(const DisableKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableKeyResponse)
    Q_DISABLE_COPY(DisableKeyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
