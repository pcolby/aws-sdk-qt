// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYRESPONSE_H
#define QTAWS_ATTACHPOLICYRESPONSE_H

#include "organizationsresponse.h"
#include "attachpolicyrequest.h"

namespace QtAws {
namespace Organizations {

class AttachPolicyResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT AttachPolicyResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    AttachPolicyResponse(const AttachPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPolicyResponse)
    Q_DISABLE_COPY(AttachPolicyResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
