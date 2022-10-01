// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTCUSTOMLABELSREQUEST_H
#define QTAWS_DETECTCUSTOMLABELSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectCustomLabelsRequestPrivate;

class QTAWSREKOGNITION_EXPORT DetectCustomLabelsRequest : public RekognitionRequest {

public:
    DetectCustomLabelsRequest(const DetectCustomLabelsRequest &other);
    DetectCustomLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectCustomLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
