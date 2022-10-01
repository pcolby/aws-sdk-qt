// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOLICYRESPONSE_H
#define QTAWS_UPDATEPOLICYRESPONSE_H

#include "organizationsresponse.h"
#include "updatepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class UpdatePolicyResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT UpdatePolicyResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    UpdatePolicyResponse(const UpdatePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePolicyResponse)
    Q_DISABLE_COPY(UpdatePolicyResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
