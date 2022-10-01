// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMKEYSTORERESPONSE_H
#define QTAWS_DELETECUSTOMKEYSTORERESPONSE_H

#include "kmsresponse.h"
#include "deletecustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class DeleteCustomKeyStoreResponsePrivate;

class QTAWSKMS_EXPORT DeleteCustomKeyStoreResponse : public KmsResponse {
    Q_OBJECT

public:
    DeleteCustomKeyStoreResponse(const DeleteCustomKeyStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomKeyStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomKeyStoreResponse)
    Q_DISABLE_COPY(DeleteCustomKeyStoreResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
