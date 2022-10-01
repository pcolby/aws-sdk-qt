// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLABELDETECTIONREQUEST_H
#define QTAWS_STARTLABELDETECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartLabelDetectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartLabelDetectionRequest : public RekognitionRequest {

public:
    StartLabelDetectionRequest(const StartLabelDetectionRequest &other);
    StartLabelDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLabelDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
