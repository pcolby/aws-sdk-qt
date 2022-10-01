// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTMODERATIONREQUEST_H
#define QTAWS_STARTCONTENTMODERATIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartContentModerationRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartContentModerationRequest : public RekognitionRequest {

public:
    StartContentModerationRequest(const StartContentModerationRequest &other);
    StartContentModerationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContentModerationRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
