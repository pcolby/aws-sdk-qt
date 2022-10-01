// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHGROUPPOLICYRESPONSE_H
#define QTAWS_DETACHGROUPPOLICYRESPONSE_H

#include "iamresponse.h"
#include "detachgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class DetachGroupPolicyResponsePrivate;

class QTAWSIAM_EXPORT DetachGroupPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DetachGroupPolicyResponse(const DetachGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachGroupPolicyResponse)
    Q_DISABLE_COPY(DetachGroupPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
