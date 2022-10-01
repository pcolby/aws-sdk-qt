// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEXTDETECTIONREQUEST_H
#define QTAWS_GETTEXTDETECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetTextDetectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT GetTextDetectionRequest : public RekognitionRequest {

public:
    GetTextDetectionRequest(const GetTextDetectionRequest &other);
    GetTextDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTextDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
