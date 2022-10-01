// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELGROUPSREQUEST_H
#define QTAWS_LISTLABELGROUPSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelGroupsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListLabelGroupsRequest : public LookoutEquipmentRequest {

public:
    ListLabelGroupsRequest(const ListLabelGroupsRequest &other);
    ListLabelGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelGroupsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
