// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONV2JOBREQUEST_H
#define QTAWS_STOPENTITIESDETECTIONV2JOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopEntitiesDetectionV2JobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopEntitiesDetectionV2JobRequest : public ComprehendMedicalRequest {

public:
    StopEntitiesDetectionV2JobRequest(const StopEntitiesDetectionV2JobRequest &other);
    StopEntitiesDetectionV2JobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEntitiesDetectionV2JobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
