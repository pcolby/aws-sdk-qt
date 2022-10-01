// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSSHPUBLICKEYRESPONSE_H
#define QTAWS_IMPORTSSHPUBLICKEYRESPONSE_H

#include "transferresponse.h"
#include "importsshpublickeyrequest.h"

namespace QtAws {
namespace Transfer {

class ImportSshPublicKeyResponsePrivate;

class QTAWSTRANSFER_EXPORT ImportSshPublicKeyResponse : public TransferResponse {
    Q_OBJECT

public:
    ImportSshPublicKeyResponse(const ImportSshPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportSshPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportSshPublicKeyResponse)
    Q_DISABLE_COPY(ImportSshPublicKeyResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
