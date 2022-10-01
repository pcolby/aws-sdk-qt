// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATETARGETINSTANCESREQUEST_H
#define QTAWS_TERMINATETARGETINSTANCESREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class TerminateTargetInstancesRequestPrivate;

class QTAWSMGN_EXPORT TerminateTargetInstancesRequest : public MgnRequest {

public:
    TerminateTargetInstancesRequest(const TerminateTargetInstancesRequest &other);
    TerminateTargetInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateTargetInstancesRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
