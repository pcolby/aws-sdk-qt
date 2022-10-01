// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUERESPONSE_H
#define QTAWS_GETQUEUERESPONSE_H

#include "mediaconvertresponse.h"
#include "getqueuerequest.h"

namespace QtAws {
namespace MediaConvert {

class GetQueueResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT GetQueueResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    GetQueueResponse(const GetQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueueResponse)
    Q_DISABLE_COPY(GetQueueResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
