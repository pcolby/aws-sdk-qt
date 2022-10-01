// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEESRESPONSE_H
#define QTAWS_LISTATTENDEESRESPONSE_H

#include "chimeresponse.h"
#include "listattendeesrequest.h"

namespace QtAws {
namespace Chime {

class ListAttendeesResponsePrivate;

class QTAWSCHIME_EXPORT ListAttendeesResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListAttendeesResponse(const ListAttendeesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttendeesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttendeesResponse)
    Q_DISABLE_COPY(ListAttendeesResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
