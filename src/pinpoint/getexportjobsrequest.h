// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTJOBSREQUEST_H
#define QTAWS_GETEXPORTJOBSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetExportJobsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetExportJobsRequest : public PinpointRequest {

public:
    GetExportJobsRequest(const GetExportJobsRequest &other);
    GetExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
