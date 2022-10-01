// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBFLOWSREQUEST_H
#define QTAWS_TERMINATEJOBFLOWSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class TerminateJobFlowsRequestPrivate;

class QTAWSEMR_EXPORT TerminateJobFlowsRequest : public EmrRequest {

public:
    TerminateJobFlowsRequest(const TerminateJobFlowsRequest &other);
    TerminateJobFlowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateJobFlowsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
