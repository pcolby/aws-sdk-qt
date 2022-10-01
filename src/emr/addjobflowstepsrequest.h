// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDJOBFLOWSTEPSREQUEST_H
#define QTAWS_ADDJOBFLOWSTEPSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class AddJobFlowStepsRequestPrivate;

class QTAWSEMR_EXPORT AddJobFlowStepsRequest : public EmrRequest {

public:
    AddJobFlowStepsRequest(const AddJobFlowStepsRequest &other);
    AddJobFlowStepsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddJobFlowStepsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
