// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICESPECIFICCREDENTIALRESPONSE_H
#define QTAWS_CREATESERVICESPECIFICCREDENTIALRESPONSE_H

#include "iamresponse.h"
#include "createservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class CreateServiceSpecificCredentialResponsePrivate;

class QTAWSIAM_EXPORT CreateServiceSpecificCredentialResponse : public IamResponse {
    Q_OBJECT

public:
    CreateServiceSpecificCredentialResponse(const CreateServiceSpecificCredentialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceSpecificCredentialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(CreateServiceSpecificCredentialResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
