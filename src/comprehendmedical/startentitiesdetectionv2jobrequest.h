// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONV2JOBREQUEST_H
#define QTAWS_STARTENTITIESDETECTIONV2JOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartEntitiesDetectionV2JobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartEntitiesDetectionV2JobRequest : public ComprehendMedicalRequest {

public:
    StartEntitiesDetectionV2JobRequest(const StartEntitiesDetectionV2JobRequest &other);
    StartEntitiesDetectionV2JobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEntitiesDetectionV2JobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
