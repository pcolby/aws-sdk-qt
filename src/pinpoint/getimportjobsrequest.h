// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBSREQUEST_H
#define QTAWS_GETIMPORTJOBSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetImportJobsRequest : public PinpointRequest {

public:
    GetImportJobsRequest(const GetImportJobsRequest &other);
    GetImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
