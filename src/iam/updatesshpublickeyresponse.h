// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESSHPUBLICKEYRESPONSE_H
#define QTAWS_UPDATESSHPUBLICKEYRESPONSE_H

#include "iamresponse.h"
#include "updatesshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSSHPublicKeyResponsePrivate;

class QTAWSIAM_EXPORT UpdateSSHPublicKeyResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateSSHPublicKeyResponse(const UpdateSSHPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSSHPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSSHPublicKeyResponse)
    Q_DISABLE_COPY(UpdateSSHPublicKeyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
