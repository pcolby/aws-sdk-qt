// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPPOLICYRESPONSE_H
#define QTAWS_PUTGROUPPOLICYRESPONSE_H

#include "iamresponse.h"
#include "putgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class PutGroupPolicyResponsePrivate;

class QTAWSIAM_EXPORT PutGroupPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    PutGroupPolicyResponse(const PutGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGroupPolicyResponse)
    Q_DISABLE_COPY(PutGroupPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
