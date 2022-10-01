// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERSREQUEST_H
#define QTAWS_LISTSAMLPROVIDERSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListSAMLProvidersRequestPrivate;

class QTAWSIAM_EXPORT ListSAMLProvidersRequest : public IamRequest {

public:
    ListSAMLProvidersRequest(const ListSAMLProvidersRequest &other);
    ListSAMLProvidersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSAMLProvidersRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
