// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHOSTKEYRESPONSE_H
#define QTAWS_IMPORTHOSTKEYRESPONSE_H

#include "transferresponse.h"
#include "importhostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class ImportHostKeyResponsePrivate;

class QTAWSTRANSFER_EXPORT ImportHostKeyResponse : public TransferResponse {
    Q_OBJECT

public:
    ImportHostKeyResponse(const ImportHostKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportHostKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportHostKeyResponse)
    Q_DISABLE_COPY(ImportHostKeyResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
