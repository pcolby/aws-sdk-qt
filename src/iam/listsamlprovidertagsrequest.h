// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERTAGSREQUEST_H
#define QTAWS_LISTSAMLPROVIDERTAGSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListSAMLProviderTagsRequestPrivate;

class QTAWSIAM_EXPORT ListSAMLProviderTagsRequest : public IamRequest {

public:
    ListSAMLProviderTagsRequest(const ListSAMLProviderTagsRequest &other);
    ListSAMLProviderTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSAMLProviderTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
