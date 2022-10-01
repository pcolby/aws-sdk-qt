// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCELEBRITYRECOGNITIONREQUEST_H
#define QTAWS_STARTCELEBRITYRECOGNITIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartCelebrityRecognitionRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartCelebrityRecognitionRequest : public RekognitionRequest {

public:
    StartCelebrityRecognitionRequest(const StartCelebrityRecognitionRequest &other);
    StartCelebrityRecognitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCelebrityRecognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
