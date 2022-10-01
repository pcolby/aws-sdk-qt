// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYRECOGNITIONREQUEST_H
#define QTAWS_GETCELEBRITYRECOGNITIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityRecognitionRequestPrivate;

class QTAWSREKOGNITION_EXPORT GetCelebrityRecognitionRequest : public RekognitionRequest {

public:
    GetCelebrityRecognitionRequest(const GetCelebrityRecognitionRequest &other);
    GetCelebrityRecognitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCelebrityRecognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
