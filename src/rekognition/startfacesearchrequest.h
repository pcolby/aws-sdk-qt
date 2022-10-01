// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACESEARCHREQUEST_H
#define QTAWS_STARTFACESEARCHREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartFaceSearchRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartFaceSearchRequest : public RekognitionRequest {

public:
    StartFaceSearchRequest(const StartFaceSearchRequest &other);
    StartFaceSearchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFaceSearchRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
