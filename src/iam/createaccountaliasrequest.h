// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTALIASREQUEST_H
#define QTAWS_CREATEACCOUNTALIASREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateAccountAliasRequestPrivate;

class QTAWSIAM_EXPORT CreateAccountAliasRequest : public IamRequest {

public:
    CreateAccountAliasRequest(const CreateAccountAliasRequest &other);
    CreateAccountAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountAliasRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
