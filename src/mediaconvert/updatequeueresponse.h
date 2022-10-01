// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUERESPONSE_H
#define QTAWS_UPDATEQUEUERESPONSE_H

#include "mediaconvertresponse.h"
#include "updatequeuerequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdateQueueResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT UpdateQueueResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    UpdateQueueResponse(const UpdateQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueResponse)
    Q_DISABLE_COPY(UpdateQueueResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
