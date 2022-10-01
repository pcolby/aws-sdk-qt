// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHROLEPOLICYRESPONSE_H
#define QTAWS_ATTACHROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "attachrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class AttachRolePolicyResponsePrivate;

class QTAWSIAM_EXPORT AttachRolePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    AttachRolePolicyResponse(const AttachRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachRolePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachRolePolicyResponse)
    Q_DISABLE_COPY(AttachRolePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
