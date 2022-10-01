// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMKEYSTORERESPONSE_H
#define QTAWS_UPDATECUSTOMKEYSTORERESPONSE_H

#include "kmsresponse.h"
#include "updatecustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class UpdateCustomKeyStoreResponsePrivate;

class QTAWSKMS_EXPORT UpdateCustomKeyStoreResponse : public KmsResponse {
    Q_OBJECT

public:
    UpdateCustomKeyStoreResponse(const UpdateCustomKeyStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomKeyStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomKeyStoreResponse)
    Q_DISABLE_COPY(UpdateCustomKeyStoreResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
