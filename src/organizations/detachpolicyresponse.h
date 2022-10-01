// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPOLICYRESPONSE_H
#define QTAWS_DETACHPOLICYRESPONSE_H

#include "organizationsresponse.h"
#include "detachpolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DetachPolicyResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DetachPolicyResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DetachPolicyResponse(const DetachPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachPolicyResponse)
    Q_DISABLE_COPY(DetachPolicyResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
