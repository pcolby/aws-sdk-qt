// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTEXPORTJOBSREQUEST_H
#define QTAWS_GETSEGMENTEXPORTJOBSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentExportJobsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetSegmentExportJobsRequest : public PinpointRequest {

public:
    GetSegmentExportJobsRequest(const GetSegmentExportJobsRequest &other);
    GetSegmentExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentExportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
