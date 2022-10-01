// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORGROUPSRESPONSE_H
#define QTAWS_LISTVOICECONNECTORGROUPSRESPONSE_H

#include "chimeresponse.h"
#include "listvoiceconnectorgroupsrequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorGroupsResponsePrivate;

class QTAWSCHIME_EXPORT ListVoiceConnectorGroupsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListVoiceConnectorGroupsResponse(const ListVoiceConnectorGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVoiceConnectorGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVoiceConnectorGroupsResponse)
    Q_DISABLE_COPY(ListVoiceConnectorGroupsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
