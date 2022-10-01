// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSSHPUBLICKEYRESPONSE_H
#define QTAWS_UPLOADSSHPUBLICKEYRESPONSE_H

#include "iamresponse.h"
#include "uploadsshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class UploadSSHPublicKeyResponsePrivate;

class QTAWSIAM_EXPORT UploadSSHPublicKeyResponse : public IamResponse {
    Q_OBJECT

public:
    UploadSSHPublicKeyResponse(const UploadSSHPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadSSHPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadSSHPublicKeyResponse)
    Q_DISABLE_COPY(UploadSSHPublicKeyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
