// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPOLICYRESPONSE_H
#define QTAWS_PUTROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "putrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class PutRolePolicyResponsePrivate;

class QTAWSIAM_EXPORT PutRolePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    PutRolePolicyResponse(const PutRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRolePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRolePolicyResponse)
    Q_DISABLE_COPY(PutRolePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
