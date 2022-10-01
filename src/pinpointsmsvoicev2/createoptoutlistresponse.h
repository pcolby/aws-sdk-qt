// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTOUTLISTRESPONSE_H
#define QTAWS_CREATEOPTOUTLISTRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "createoptoutlistrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateOptOutListResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT CreateOptOutListResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    CreateOptOutListResponse(const CreateOptOutListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOptOutListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOptOutListResponse)
    Q_DISABLE_COPY(CreateOptOutListResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
