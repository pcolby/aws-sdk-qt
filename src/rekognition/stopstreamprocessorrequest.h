// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMPROCESSORREQUEST_H
#define QTAWS_STOPSTREAMPROCESSORREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StopStreamProcessorRequestPrivate;

class QTAWSREKOGNITION_EXPORT StopStreamProcessorRequest : public RekognitionRequest {

public:
    StopStreamProcessorRequest(const StopStreamProcessorRequest &other);
    StopStreamProcessorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
