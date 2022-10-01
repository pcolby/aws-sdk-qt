// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUERESPONSE_H
#define QTAWS_DELETEQUEUERESPONSE_H

#include "mediaconvertresponse.h"
#include "deletequeuerequest.h"

namespace QtAws {
namespace MediaConvert {

class DeleteQueueResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT DeleteQueueResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    DeleteQueueResponse(const DeleteQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueueResponse)
    Q_DISABLE_COPY(DeleteQueueResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
