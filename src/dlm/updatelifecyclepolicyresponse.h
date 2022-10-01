// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIFECYCLEPOLICYRESPONSE_H
#define QTAWS_UPDATELIFECYCLEPOLICYRESPONSE_H

#include "dlmresponse.h"
#include "updatelifecyclepolicyrequest.h"

namespace QtAws {
namespace Dlm {

class UpdateLifecyclePolicyResponsePrivate;

class QTAWSDLM_EXPORT UpdateLifecyclePolicyResponse : public DlmResponse {
    Q_OBJECT

public:
    UpdateLifecyclePolicyResponse(const UpdateLifecyclePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLifecyclePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLifecyclePolicyResponse)
    Q_DISABLE_COPY(UpdateLifecyclePolicyResponse)

};

} // namespace Dlm
} // namespace QtAws

#endif
