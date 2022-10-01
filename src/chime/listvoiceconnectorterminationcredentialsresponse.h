// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_H
#define QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_H

#include "chimeresponse.h"
#include "listvoiceconnectorterminationcredentialsrequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorTerminationCredentialsResponsePrivate;

class QTAWSCHIME_EXPORT ListVoiceConnectorTerminationCredentialsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListVoiceConnectorTerminationCredentialsResponse(const ListVoiceConnectorTerminationCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVoiceConnectorTerminationCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVoiceConnectorTerminationCredentialsResponse)
    Q_DISABLE_COPY(ListVoiceConnectorTerminationCredentialsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
