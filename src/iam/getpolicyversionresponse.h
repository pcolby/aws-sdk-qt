// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYVERSIONRESPONSE_H
#define QTAWS_GETPOLICYVERSIONRESPONSE_H

#include "iamresponse.h"
#include "getpolicyversionrequest.h"

namespace QtAws {
namespace Iam {

class GetPolicyVersionResponsePrivate;

class QTAWSIAM_EXPORT GetPolicyVersionResponse : public IamResponse {
    Q_OBJECT

public:
    GetPolicyVersionResponse(const GetPolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPolicyVersionResponse)
    Q_DISABLE_COPY(GetPolicyVersionResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
