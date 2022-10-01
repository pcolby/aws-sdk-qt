// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEPOLICYRESPONSE_H
#define QTAWS_PUTLIFECYCLEPOLICYRESPONSE_H

#include "ecrresponse.h"
#include "putlifecyclepolicyrequest.h"

namespace QtAws {
namespace Ecr {

class PutLifecyclePolicyResponsePrivate;

class QTAWSECR_EXPORT PutLifecyclePolicyResponse : public EcrResponse {
    Q_OBJECT

public:
    PutLifecyclePolicyResponse(const PutLifecyclePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLifecyclePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecyclePolicyResponse)
    Q_DISABLE_COPY(PutLifecyclePolicyResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
