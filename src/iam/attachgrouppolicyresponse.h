// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHGROUPPOLICYRESPONSE_H
#define QTAWS_ATTACHGROUPPOLICYRESPONSE_H

#include "iamresponse.h"
#include "attachgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class AttachGroupPolicyResponsePrivate;

class QTAWSIAM_EXPORT AttachGroupPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    AttachGroupPolicyResponse(const AttachGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachGroupPolicyResponse)
    Q_DISABLE_COPY(AttachGroupPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
