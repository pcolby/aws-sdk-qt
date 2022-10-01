// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSRESPONSE_H
#define QTAWS_LISTCHANNELBANSRESPONSE_H

#include "chimeresponse.h"
#include "listchannelbansrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelBansResponsePrivate;

class QTAWSCHIME_EXPORT ListChannelBansResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListChannelBansResponse(const ListChannelBansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelBansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelBansResponse)
    Q_DISABLE_COPY(ListChannelBansResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
