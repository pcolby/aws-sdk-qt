// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICIESRESPONSE_H
#define QTAWS_GETLIFECYCLEPOLICIESRESPONSE_H

#include "dlmresponse.h"
#include "getlifecyclepoliciesrequest.h"

namespace QtAws {
namespace Dlm {

class GetLifecyclePoliciesResponsePrivate;

class QTAWSDLM_EXPORT GetLifecyclePoliciesResponse : public DlmResponse {
    Q_OBJECT

public:
    GetLifecyclePoliciesResponse(const GetLifecyclePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLifecyclePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLifecyclePoliciesResponse)
    Q_DISABLE_COPY(GetLifecyclePoliciesResponse)

};

} // namespace Dlm
} // namespace QtAws

#endif
