// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTALIASREQUEST_H
#define QTAWS_DELETEACCOUNTALIASREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccountAliasRequestPrivate;

class QTAWSIAM_EXPORT DeleteAccountAliasRequest : public IamRequest {

public:
    DeleteAccountAliasRequest(const DeleteAccountAliasRequest &other);
    DeleteAccountAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAliasRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
