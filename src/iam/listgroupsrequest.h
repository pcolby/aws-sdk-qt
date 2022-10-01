// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_H
#define QTAWS_LISTGROUPSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupsRequestPrivate;

class QTAWSIAM_EXPORT ListGroupsRequest : public IamRequest {

public:
    ListGroupsRequest(const ListGroupsRequest &other);
    ListGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
