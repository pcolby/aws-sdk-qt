// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTALIASESREQUEST_H
#define QTAWS_LISTACCOUNTALIASESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListAccountAliasesRequestPrivate;

class QTAWSIAM_EXPORT ListAccountAliasesRequest : public IamRequest {

public:
    ListAccountAliasesRequest(const ListAccountAliasesRequest &other);
    ListAccountAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAliasesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
