// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETIREGRANTRESPONSE_H
#define QTAWS_RETIREGRANTRESPONSE_H

#include "kmsresponse.h"
#include "retiregrantrequest.h"

namespace QtAws {
namespace Kms {

class RetireGrantResponsePrivate;

class QTAWSKMS_EXPORT RetireGrantResponse : public KmsResponse {
    Q_OBJECT

public:
    RetireGrantResponse(const RetireGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetireGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetireGrantResponse)
    Q_DISABLE_COPY(RetireGrantResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
