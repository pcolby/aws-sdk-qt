// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMPROCESSORREQUEST_H
#define QTAWS_UPDATESTREAMPROCESSORREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class UpdateStreamProcessorRequestPrivate;

class QTAWSREKOGNITION_EXPORT UpdateStreamProcessorRequest : public RekognitionRequest {

public:
    UpdateStreamProcessorRequest(const UpdateStreamProcessorRequest &other);
    UpdateStreamProcessorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
