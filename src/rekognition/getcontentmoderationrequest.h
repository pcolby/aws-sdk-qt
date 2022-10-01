// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTMODERATIONREQUEST_H
#define QTAWS_GETCONTENTMODERATIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetContentModerationRequestPrivate;

class QTAWSREKOGNITION_EXPORT GetContentModerationRequest : public RekognitionRequest {

public:
    GetContentModerationRequest(const GetContentModerationRequest &other);
    GetContentModerationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContentModerationRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
