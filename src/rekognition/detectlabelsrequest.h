// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTLABELSREQUEST_H
#define QTAWS_DETECTLABELSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectLabelsRequestPrivate;

class QTAWSREKOGNITION_EXPORT DetectLabelsRequest : public RekognitionRequest {

public:
    DetectLabelsRequest(const DetectLabelsRequest &other);
    DetectLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
