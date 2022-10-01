// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZECELEBRITIESREQUEST_H
#define QTAWS_RECOGNIZECELEBRITIESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class RecognizeCelebritiesRequestPrivate;

class QTAWSREKOGNITION_EXPORT RecognizeCelebritiesRequest : public RekognitionRequest {

public:
    RecognizeCelebritiesRequest(const RecognizeCelebritiesRequest &other);
    RecognizeCelebritiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecognizeCelebritiesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
