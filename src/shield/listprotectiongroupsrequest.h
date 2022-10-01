// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONGROUPSREQUEST_H
#define QTAWS_LISTPROTECTIONGROUPSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class ListProtectionGroupsRequestPrivate;

class QTAWSSHIELD_EXPORT ListProtectionGroupsRequest : public ShieldRequest {

public:
    ListProtectionGroupsRequest(const ListProtectionGroupsRequest &other);
    ListProtectionGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtectionGroupsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
