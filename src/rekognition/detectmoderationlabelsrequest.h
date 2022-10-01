// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMODERATIONLABELSREQUEST_H
#define QTAWS_DETECTMODERATIONLABELSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectModerationLabelsRequestPrivate;

class QTAWSREKOGNITION_EXPORT DetectModerationLabelsRequest : public RekognitionRequest {

public:
    DetectModerationLabelsRequest(const DetectModerationLabelsRequest &other);
    DetectModerationLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectModerationLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
