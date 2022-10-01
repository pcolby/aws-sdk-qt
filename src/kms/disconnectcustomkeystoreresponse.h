// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTCUSTOMKEYSTORERESPONSE_H
#define QTAWS_DISCONNECTCUSTOMKEYSTORERESPONSE_H

#include "kmsresponse.h"
#include "disconnectcustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class DisconnectCustomKeyStoreResponsePrivate;

class QTAWSKMS_EXPORT DisconnectCustomKeyStoreResponse : public KmsResponse {
    Q_OBJECT

public:
    DisconnectCustomKeyStoreResponse(const DisconnectCustomKeyStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectCustomKeyStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectCustomKeyStoreResponse)
    Q_DISABLE_COPY(DisconnectCustomKeyStoreResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
