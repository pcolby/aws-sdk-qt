// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTEXTREQUEST_H
#define QTAWS_DETECTTEXTREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectTextRequestPrivate;

class QTAWSREKOGNITION_EXPORT DetectTextRequest : public RekognitionRequest {

public:
    DetectTextRequest(const DetectTextRequest &other);
    DetectTextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectTextRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
