// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEREQUEST_H
#define QTAWS_GETQUEUEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class GetQueueRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT GetQueueRequest : public MediaConvertRequest {

public:
    GetQueueRequest(const GetQueueRequest &other);
    GetQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
