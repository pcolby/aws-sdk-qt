// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSHARESREQUEST_H
#define QTAWS_LISTWORKLOADSHARESREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadSharesRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListWorkloadSharesRequest : public WellArchitectedRequest {

public:
    ListWorkloadSharesRequest(const ListWorkloadSharesRequest &other);
    ListWorkloadSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkloadSharesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
