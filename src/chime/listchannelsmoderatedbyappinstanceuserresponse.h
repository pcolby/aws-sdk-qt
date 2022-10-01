// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERRESPONSE_H
#define QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERRESPONSE_H

#include "chimeresponse.h"
#include "listchannelsmoderatedbyappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelsModeratedByAppInstanceUserResponsePrivate;

class QTAWSCHIME_EXPORT ListChannelsModeratedByAppInstanceUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListChannelsModeratedByAppInstanceUserResponse(const ListChannelsModeratedByAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelsModeratedByAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsModeratedByAppInstanceUserResponse)
    Q_DISABLE_COPY(ListChannelsModeratedByAppInstanceUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
