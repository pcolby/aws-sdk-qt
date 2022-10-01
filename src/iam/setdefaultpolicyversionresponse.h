// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTPOLICYVERSIONRESPONSE_H
#define QTAWS_SETDEFAULTPOLICYVERSIONRESPONSE_H

#include "iamresponse.h"
#include "setdefaultpolicyversionrequest.h"

namespace QtAws {
namespace Iam {

class SetDefaultPolicyVersionResponsePrivate;

class QTAWSIAM_EXPORT SetDefaultPolicyVersionResponse : public IamResponse {
    Q_OBJECT

public:
    SetDefaultPolicyVersionResponse(const SetDefaultPolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDefaultPolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultPolicyVersionResponse)
    Q_DISABLE_COPY(SetDefaultPolicyVersionResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
