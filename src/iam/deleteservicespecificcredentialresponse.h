// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICESPECIFICCREDENTIALRESPONSE_H
#define QTAWS_DELETESERVICESPECIFICCREDENTIALRESPONSE_H

#include "iamresponse.h"
#include "deleteservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class DeleteServiceSpecificCredentialResponsePrivate;

class QTAWSIAM_EXPORT DeleteServiceSpecificCredentialResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteServiceSpecificCredentialResponse(const DeleteServiceSpecificCredentialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceSpecificCredentialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(DeleteServiceSpecificCredentialResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
