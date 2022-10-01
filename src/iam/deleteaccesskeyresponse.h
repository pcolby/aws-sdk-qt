// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSKEYRESPONSE_H
#define QTAWS_DELETEACCESSKEYRESPONSE_H

#include "iamresponse.h"
#include "deleteaccesskeyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccessKeyResponsePrivate;

class QTAWSIAM_EXPORT DeleteAccessKeyResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteAccessKeyResponse(const DeleteAccessKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessKeyResponse)
    Q_DISABLE_COPY(DeleteAccessKeyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
