// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEGROUPSREQUEST_H
#define QTAWS_MODIFYINSTANCEGROUPSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceGroupsRequestPrivate;

class QTAWSEMR_EXPORT ModifyInstanceGroupsRequest : public EmrRequest {

public:
    ModifyInstanceGroupsRequest(const ModifyInstanceGroupsRequest &other);
    ModifyInstanceGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceGroupsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
