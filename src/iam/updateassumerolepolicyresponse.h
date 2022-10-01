// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSUMEROLEPOLICYRESPONSE_H
#define QTAWS_UPDATEASSUMEROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "updateassumerolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAssumeRolePolicyResponsePrivate;

class QTAWSIAM_EXPORT UpdateAssumeRolePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateAssumeRolePolicyResponse(const UpdateAssumeRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssumeRolePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssumeRolePolicyResponse)
    Q_DISABLE_COPY(UpdateAssumeRolePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
