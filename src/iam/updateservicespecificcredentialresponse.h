// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESPECIFICCREDENTIALRESPONSE_H
#define QTAWS_UPDATESERVICESPECIFICCREDENTIALRESPONSE_H

#include "iamresponse.h"
#include "updateservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class UpdateServiceSpecificCredentialResponsePrivate;

class QTAWSIAM_EXPORT UpdateServiceSpecificCredentialResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateServiceSpecificCredentialResponse(const UpdateServiceSpecificCredentialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceSpecificCredentialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(UpdateServiceSpecificCredentialResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
