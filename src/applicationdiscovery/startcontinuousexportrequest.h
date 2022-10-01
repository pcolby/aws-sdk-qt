// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTINUOUSEXPORTREQUEST_H
#define QTAWS_STARTCONTINUOUSEXPORTREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartContinuousExportRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StartContinuousExportRequest : public ApplicationDiscoveryRequest {

public:
    StartContinuousExportRequest(const StartContinuousExportRequest &other);
    StartContinuousExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContinuousExportRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
