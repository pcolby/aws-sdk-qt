// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYMACRESPONSE_H
#define QTAWS_VERIFYMACRESPONSE_H

#include "kmsresponse.h"
#include "verifymacrequest.h"

namespace QtAws {
namespace Kms {

class VerifyMacResponsePrivate;

class QTAWSKMS_EXPORT VerifyMacResponse : public KmsResponse {
    Q_OBJECT

public:
    VerifyMacResponse(const VerifyMacRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyMacRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyMacResponse)
    Q_DISABLE_COPY(VerifyMacResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
