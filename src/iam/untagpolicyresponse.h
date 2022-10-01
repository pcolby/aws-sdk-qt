// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPOLICYRESPONSE_H
#define QTAWS_UNTAGPOLICYRESPONSE_H

#include "iamresponse.h"
#include "untagpolicyrequest.h"

namespace QtAws {
namespace Iam {

class UntagPolicyResponsePrivate;

class QTAWSIAM_EXPORT UntagPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    UntagPolicyResponse(const UntagPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagPolicyResponse)
    Q_DISABLE_COPY(UntagPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
