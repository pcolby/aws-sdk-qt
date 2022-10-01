// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_H
#define QTAWS_LISTGROUPSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListGroupsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListGroupsRequest : public QuickSightRequest {

public:
    ListGroupsRequest(const ListGroupsRequest &other);
    ListGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
