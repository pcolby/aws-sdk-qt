// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERRESPONSE_H
#define QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERRESPONSE_H

#include "chimeresponse.h"
#include "listchannelmembershipsforappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelMembershipsForAppInstanceUserResponsePrivate;

class QTAWSCHIME_EXPORT ListChannelMembershipsForAppInstanceUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListChannelMembershipsForAppInstanceUserResponse(const ListChannelMembershipsForAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelMembershipsForAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMembershipsForAppInstanceUserResponse)
    Q_DISABLE_COPY(ListChannelMembershipsForAppInstanceUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
