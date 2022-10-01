// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMKEYSTORERESPONSE_H
#define QTAWS_CREATECUSTOMKEYSTORERESPONSE_H

#include "kmsresponse.h"
#include "createcustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class CreateCustomKeyStoreResponsePrivate;

class QTAWSKMS_EXPORT CreateCustomKeyStoreResponse : public KmsResponse {
    Q_OBJECT

public:
    CreateCustomKeyStoreResponse(const CreateCustomKeyStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomKeyStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomKeyStoreResponse)
    Q_DISABLE_COPY(CreateCustomKeyStoreResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
