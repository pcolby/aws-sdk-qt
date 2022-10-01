// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELKEYDELETIONRESPONSE_H
#define QTAWS_CANCELKEYDELETIONRESPONSE_H

#include "kmsresponse.h"
#include "cancelkeydeletionrequest.h"

namespace QtAws {
namespace Kms {

class CancelKeyDeletionResponsePrivate;

class QTAWSKMS_EXPORT CancelKeyDeletionResponse : public KmsResponse {
    Q_OBJECT

public:
    CancelKeyDeletionResponse(const CancelKeyDeletionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelKeyDeletionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelKeyDeletionResponse)
    Q_DISABLE_COPY(CancelKeyDeletionResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
