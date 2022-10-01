// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORRESPONSE_H
#define QTAWS_UPDATEVOICECONNECTORRESPONSE_H

#include "chimeresponse.h"
#include "updatevoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorResponsePrivate;

class QTAWSCHIME_EXPORT UpdateVoiceConnectorResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateVoiceConnectorResponse(const UpdateVoiceConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVoiceConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceConnectorResponse)
    Q_DISABLE_COPY(UpdateVoiceConnectorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
