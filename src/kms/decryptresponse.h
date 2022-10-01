// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECRYPTRESPONSE_H
#define QTAWS_DECRYPTRESPONSE_H

#include "kmsresponse.h"
#include "decryptrequest.h"

namespace QtAws {
namespace Kms {

class DecryptResponsePrivate;

class QTAWSKMS_EXPORT DecryptResponse : public KmsResponse {
    Q_OBJECT

public:
    DecryptResponse(const DecryptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DecryptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecryptResponse)
    Q_DISABLE_COPY(DecryptResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
