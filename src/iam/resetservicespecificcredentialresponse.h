// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESPECIFICCREDENTIALRESPONSE_H
#define QTAWS_RESETSERVICESPECIFICCREDENTIALRESPONSE_H

#include "iamresponse.h"
#include "resetservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class ResetServiceSpecificCredentialResponsePrivate;

class QTAWSIAM_EXPORT ResetServiceSpecificCredentialResponse : public IamResponse {
    Q_OBJECT

public:
    ResetServiceSpecificCredentialResponse(const ResetServiceSpecificCredentialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetServiceSpecificCredentialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(ResetServiceSpecificCredentialResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
