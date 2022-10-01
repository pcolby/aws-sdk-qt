// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTINUOUSEXPORTREQUEST_H
#define QTAWS_STOPCONTINUOUSEXPORTREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopContinuousExportRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StopContinuousExportRequest : public ApplicationDiscoveryRequest {

public:
    StopContinuousExportRequest(const StopContinuousExportRequest &other);
    StopContinuousExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContinuousExportRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
