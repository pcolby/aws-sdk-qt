// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVENTORYENTRIESREQUEST_H
#define QTAWS_LISTINVENTORYENTRIESREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListInventoryEntriesRequestPrivate;

class QTAWSSSM_EXPORT ListInventoryEntriesRequest : public SsmRequest {

public:
    ListInventoryEntriesRequest(const ListInventoryEntriesRequest &other);
    ListInventoryEntriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInventoryEntriesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
