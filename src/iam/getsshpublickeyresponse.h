// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSSHPUBLICKEYRESPONSE_H
#define QTAWS_GETSSHPUBLICKEYRESPONSE_H

#include "iamresponse.h"
#include "getsshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class GetSSHPublicKeyResponsePrivate;

class QTAWSIAM_EXPORT GetSSHPublicKeyResponse : public IamResponse {
    Q_OBJECT

public:
    GetSSHPublicKeyResponse(const GetSSHPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSSHPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSSHPublicKeyResponse)
    Q_DISABLE_COPY(GetSSHPublicKeyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
