// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPERSONTRACKINGREQUEST_H
#define QTAWS_STARTPERSONTRACKINGREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartPersonTrackingRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartPersonTrackingRequest : public RekognitionRequest {

public:
    StartPersonTrackingRequest(const StartPersonTrackingRequest &other);
    StartPersonTrackingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPersonTrackingRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
