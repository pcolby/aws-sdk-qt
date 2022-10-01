// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEGRANTRESPONSE_H
#define QTAWS_REVOKEGRANTRESPONSE_H

#include "kmsresponse.h"
#include "revokegrantrequest.h"

namespace QtAws {
namespace Kms {

class RevokeGrantResponsePrivate;

class QTAWSKMS_EXPORT RevokeGrantResponse : public KmsResponse {
    Q_OBJECT

public:
    RevokeGrantResponse(const RevokeGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeGrantResponse)
    Q_DISABLE_COPY(RevokeGrantResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
