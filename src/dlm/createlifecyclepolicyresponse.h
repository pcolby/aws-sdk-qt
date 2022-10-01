// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIFECYCLEPOLICYRESPONSE_H
#define QTAWS_CREATELIFECYCLEPOLICYRESPONSE_H

#include "dlmresponse.h"
#include "createlifecyclepolicyrequest.h"

namespace QtAws {
namespace Dlm {

class CreateLifecyclePolicyResponsePrivate;

class QTAWSDLM_EXPORT CreateLifecyclePolicyResponse : public DlmResponse {
    Q_OBJECT

public:
    CreateLifecyclePolicyResponse(const CreateLifecyclePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLifecyclePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLifecyclePolicyResponse)
    Q_DISABLE_COPY(CreateLifecyclePolicyResponse)

};

} // namespace Dlm
} // namespace QtAws

#endif
