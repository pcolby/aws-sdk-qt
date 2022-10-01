// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEGROUPSREQUEST_H
#define QTAWS_ADDINSTANCEGROUPSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class AddInstanceGroupsRequestPrivate;

class QTAWSEMR_EXPORT AddInstanceGroupsRequest : public EmrRequest {

public:
    AddInstanceGroupsRequest(const AddInstanceGroupsRequest &other);
    AddInstanceGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddInstanceGroupsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
