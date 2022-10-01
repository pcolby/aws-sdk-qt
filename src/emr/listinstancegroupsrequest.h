// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEGROUPSREQUEST_H
#define QTAWS_LISTINSTANCEGROUPSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListInstanceGroupsRequestPrivate;

class QTAWSEMR_EXPORT ListInstanceGroupsRequest : public EmrRequest {

public:
    ListInstanceGroupsRequest(const ListInstanceGroupsRequest &other);
    ListInstanceGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceGroupsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
