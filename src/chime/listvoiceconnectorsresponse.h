// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORSRESPONSE_H
#define QTAWS_LISTVOICECONNECTORSRESPONSE_H

#include "chimeresponse.h"
#include "listvoiceconnectorsrequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorsResponsePrivate;

class QTAWSCHIME_EXPORT ListVoiceConnectorsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListVoiceConnectorsResponse(const ListVoiceConnectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVoiceConnectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVoiceConnectorsResponse)
    Q_DISABLE_COPY(ListVoiceConnectorsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
