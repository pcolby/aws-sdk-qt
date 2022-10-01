// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEKEYSIGNINGKEYRESPONSE_H
#define QTAWS_ACTIVATEKEYSIGNINGKEYRESPONSE_H

#include "route53response.h"
#include "activatekeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class ActivateKeySigningKeyResponsePrivate;

class QTAWSROUTE53_EXPORT ActivateKeySigningKeyResponse : public Route53Response {
    Q_OBJECT

public:
    ActivateKeySigningKeyResponse(const ActivateKeySigningKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateKeySigningKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateKeySigningKeyResponse)
    Q_DISABLE_COPY(ActivateKeySigningKeyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
