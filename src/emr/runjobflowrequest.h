// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNJOBFLOWREQUEST_H
#define QTAWS_RUNJOBFLOWREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class RunJobFlowRequestPrivate;

class QTAWSEMR_EXPORT RunJobFlowRequest : public EmrRequest {

public:
    RunJobFlowRequest(const RunJobFlowRequest &other);
    RunJobFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunJobFlowRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
