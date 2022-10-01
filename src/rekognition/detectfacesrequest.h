// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTFACESREQUEST_H
#define QTAWS_DETECTFACESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectFacesRequestPrivate;

class QTAWSREKOGNITION_EXPORT DetectFacesRequest : public RekognitionRequest {

public:
    DetectFacesRequest(const DetectFacesRequest &other);
    DetectFacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
