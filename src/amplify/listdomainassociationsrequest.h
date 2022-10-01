// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINASSOCIATIONSREQUEST_H
#define QTAWS_LISTDOMAINASSOCIATIONSREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class ListDomainAssociationsRequestPrivate;

class QTAWSAMPLIFY_EXPORT ListDomainAssociationsRequest : public AmplifyRequest {

public:
    ListDomainAssociationsRequest(const ListDomainAssociationsRequest &other);
    ListDomainAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainAssociationsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
