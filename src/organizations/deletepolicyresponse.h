// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYRESPONSE_H
#define QTAWS_DELETEPOLICYRESPONSE_H

#include "organizationsresponse.h"
#include "deletepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DeletePolicyResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DeletePolicyResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DeletePolicyResponse(const DeletePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePolicyResponse)
    Q_DISABLE_COPY(DeletePolicyResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
