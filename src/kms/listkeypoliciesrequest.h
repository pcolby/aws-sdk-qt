// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPOLICIESREQUEST_H
#define QTAWS_LISTKEYPOLICIESREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ListKeyPoliciesRequestPrivate;

class QTAWSKMS_EXPORT ListKeyPoliciesRequest : public KmsRequest {

public:
    ListKeyPoliciesRequest(const ListKeyPoliciesRequest &other);
    ListKeyPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyPoliciesRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
