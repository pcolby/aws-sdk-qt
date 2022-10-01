// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORRESPONSE_H
#define QTAWS_CREATEVOICECONNECTORRESPONSE_H

#include "chimeresponse.h"
#include "createvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorResponsePrivate;

class QTAWSCHIME_EXPORT CreateVoiceConnectorResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateVoiceConnectorResponse(const CreateVoiceConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVoiceConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVoiceConnectorResponse)
    Q_DISABLE_COPY(CreateVoiceConnectorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
