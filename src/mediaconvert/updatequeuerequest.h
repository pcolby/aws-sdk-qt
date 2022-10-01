// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEREQUEST_H
#define QTAWS_UPDATEQUEUEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdateQueueRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT UpdateQueueRequest : public MediaConvertRequest {

public:
    UpdateQueueRequest(const UpdateQueueRequest &other);
    UpdateQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
