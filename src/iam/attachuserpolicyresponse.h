// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHUSERPOLICYRESPONSE_H
#define QTAWS_ATTACHUSERPOLICYRESPONSE_H

#include "iamresponse.h"
#include "attachuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class AttachUserPolicyResponsePrivate;

class QTAWSIAM_EXPORT AttachUserPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    AttachUserPolicyResponse(const AttachUserPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachUserPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachUserPolicyResponse)
    Q_DISABLE_COPY(AttachUserPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
