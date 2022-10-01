// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEREQUEST_H
#define QTAWS_DELETEQUEUEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class DeleteQueueRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT DeleteQueueRequest : public MediaConvertRequest {

public:
    DeleteQueueRequest(const DeleteQueueRequest &other);
    DeleteQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
