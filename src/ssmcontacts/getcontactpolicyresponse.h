// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTPOLICYRESPONSE_H
#define QTAWS_GETCONTACTPOLICYRESPONSE_H

#include "ssmcontactsresponse.h"
#include "getcontactpolicyrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactPolicyResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT GetContactPolicyResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    GetContactPolicyResponse(const GetContactPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactPolicyResponse)
    Q_DISABLE_COPY(GetContactPolicyResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
