// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSREQUEST_H
#define QTAWS_LISTGROUPMEMBERSHIPSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListGroupMembershipsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListGroupMembershipsRequest : public QuickSightRequest {

public:
    ListGroupMembershipsRequest(const ListGroupMembershipsRequest &other);
    ListGroupMembershipsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembershipsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
