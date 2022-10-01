// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYVERSIONRESPONSE_H
#define QTAWS_CREATEPOLICYVERSIONRESPONSE_H

#include "iamresponse.h"
#include "createpolicyversionrequest.h"

namespace QtAws {
namespace Iam {

class CreatePolicyVersionResponsePrivate;

class QTAWSIAM_EXPORT CreatePolicyVersionResponse : public IamResponse {
    Q_OBJECT

public:
    CreatePolicyVersionResponse(const CreatePolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePolicyVersionResponse)
    Q_DISABLE_COPY(CreatePolicyVersionResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
