// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMPROCESSORREQUEST_H
#define QTAWS_STARTSTREAMPROCESSORREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartStreamProcessorRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartStreamProcessorRequest : public RekognitionRequest {

public:
    StartStreamProcessorRequest(const StartStreamProcessorRequest &other);
    StartStreamProcessorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
