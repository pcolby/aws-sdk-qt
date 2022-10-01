// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTOUTLISTRESPONSE_H
#define QTAWS_DELETEOPTOUTLISTRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deleteoptoutlistrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptOutListResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteOptOutListResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteOptOutListResponse(const DeleteOptOutListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOptOutListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOptOutListResponse)
    Q_DISABLE_COPY(DeleteOptOutListResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
