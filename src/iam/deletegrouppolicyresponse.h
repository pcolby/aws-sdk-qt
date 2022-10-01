// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPPOLICYRESPONSE_H
#define QTAWS_DELETEGROUPPOLICYRESPONSE_H

#include "iamresponse.h"
#include "deletegrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteGroupPolicyResponsePrivate;

class QTAWSIAM_EXPORT DeleteGroupPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteGroupPolicyResponse(const DeleteGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGroupPolicyResponse)
    Q_DISABLE_COPY(DeleteGroupPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
