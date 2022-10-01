// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSIGNINGKEYRESPONSE_H
#define QTAWS_DELETEKEYSIGNINGKEYRESPONSE_H

#include "route53response.h"
#include "deletekeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteKeySigningKeyResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteKeySigningKeyResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteKeySigningKeyResponse(const DeleteKeySigningKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKeySigningKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeySigningKeyResponse)
    Q_DISABLE_COPY(DeleteKeySigningKeyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
