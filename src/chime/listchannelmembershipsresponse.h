// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSRESPONSE_H
#define QTAWS_LISTCHANNELMEMBERSHIPSRESPONSE_H

#include "chimeresponse.h"
#include "listchannelmembershipsrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelMembershipsResponsePrivate;

class QTAWSCHIME_EXPORT ListChannelMembershipsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListChannelMembershipsResponse(const ListChannelMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelMembershipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMembershipsResponse)
    Q_DISABLE_COPY(ListChannelMembershipsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
