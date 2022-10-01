// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCUSTOMKEYSTORERESPONSE_H
#define QTAWS_CONNECTCUSTOMKEYSTORERESPONSE_H

#include "kmsresponse.h"
#include "connectcustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class ConnectCustomKeyStoreResponsePrivate;

class QTAWSKMS_EXPORT ConnectCustomKeyStoreResponse : public KmsResponse {
    Q_OBJECT

public:
    ConnectCustomKeyStoreResponse(const ConnectCustomKeyStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConnectCustomKeyStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectCustomKeyStoreResponse)
    Q_DISABLE_COPY(ConnectCustomKeyStoreResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
