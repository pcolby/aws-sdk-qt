// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYRESPONSE_H
#define QTAWS_DELETESSHPUBLICKEYRESPONSE_H

#include "iamresponse.h"
#include "deletesshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSSHPublicKeyResponsePrivate;

class QTAWSIAM_EXPORT DeleteSSHPublicKeyResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteSSHPublicKeyResponse(const DeleteSSHPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSSHPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSSHPublicKeyResponse)
    Q_DISABLE_COPY(DeleteSSHPublicKeyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
