// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYINFOREQUEST_H
#define QTAWS_GETCELEBRITYINFOREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityInfoRequestPrivate;

class QTAWSREKOGNITION_EXPORT GetCelebrityInfoRequest : public RekognitionRequest {

public:
    GetCelebrityInfoRequest(const GetCelebrityInfoRequest &other);
    GetCelebrityInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCelebrityInfoRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
