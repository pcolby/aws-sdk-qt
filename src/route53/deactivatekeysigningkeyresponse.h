// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEKEYSIGNINGKEYRESPONSE_H
#define QTAWS_DEACTIVATEKEYSIGNINGKEYRESPONSE_H

#include "route53response.h"
#include "deactivatekeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class DeactivateKeySigningKeyResponsePrivate;

class QTAWSROUTE53_EXPORT DeactivateKeySigningKeyResponse : public Route53Response {
    Q_OBJECT

public:
    DeactivateKeySigningKeyResponse(const DeactivateKeySigningKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateKeySigningKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateKeySigningKeyResponse)
    Q_DISABLE_COPY(DeactivateKeySigningKeyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
