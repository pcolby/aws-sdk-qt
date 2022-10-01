// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYRESPONSE_H
#define QTAWS_VERIFYRESPONSE_H

#include "kmsresponse.h"
#include "verifyrequest.h"

namespace QtAws {
namespace Kms {

class VerifyResponsePrivate;

class QTAWSKMS_EXPORT VerifyResponse : public KmsResponse {
    Q_OBJECT

public:
    VerifyResponse(const VerifyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyResponse)
    Q_DISABLE_COPY(VerifyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
