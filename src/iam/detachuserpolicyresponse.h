// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHUSERPOLICYRESPONSE_H
#define QTAWS_DETACHUSERPOLICYRESPONSE_H

#include "iamresponse.h"
#include "detachuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class DetachUserPolicyResponsePrivate;

class QTAWSIAM_EXPORT DetachUserPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DetachUserPolicyResponse(const DetachUserPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachUserPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachUserPolicyResponse)
    Q_DISABLE_COPY(DetachUserPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
