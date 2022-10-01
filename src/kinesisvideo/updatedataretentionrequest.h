// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATARETENTIONREQUEST_H
#define QTAWS_UPDATEDATARETENTIONREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateDataRetentionRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateDataRetentionRequest : public KinesisVideoRequest {

public:
    UpdateDataRetentionRequest(const UpdateDataRetentionRequest &other);
    UpdateDataRetentionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataRetentionRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
