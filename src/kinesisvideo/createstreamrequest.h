// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMREQUEST_H
#define QTAWS_CREATESTREAMREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class CreateStreamRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT CreateStreamRequest : public KinesisVideoRequest {

public:
    CreateStreamRequest(const CreateStreamRequest &other);
    CreateStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
