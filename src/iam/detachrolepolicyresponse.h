// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHROLEPOLICYRESPONSE_H
#define QTAWS_DETACHROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "detachrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class DetachRolePolicyResponsePrivate;

class QTAWSIAM_EXPORT DetachRolePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DetachRolePolicyResponse(const DetachRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachRolePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachRolePolicyResponse)
    Q_DISABLE_COPY(DetachRolePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
