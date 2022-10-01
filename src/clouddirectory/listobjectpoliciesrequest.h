// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPOLICIESREQUEST_H
#define QTAWS_LISTOBJECTPOLICIESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectPoliciesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectPoliciesRequest : public CloudDirectoryRequest {

public:
    ListObjectPoliciesRequest(const ListObjectPoliciesRequest &other);
    ListObjectPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectPoliciesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
