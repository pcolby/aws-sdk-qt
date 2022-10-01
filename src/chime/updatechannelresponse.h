// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELRESPONSE_H
#define QTAWS_UPDATECHANNELRESPONSE_H

#include "chimeresponse.h"
#include "updatechannelrequest.h"

namespace QtAws {
namespace Chime {

class UpdateChannelResponsePrivate;

class QTAWSCHIME_EXPORT UpdateChannelResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateChannelResponse(const UpdateChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelResponse)
    Q_DISABLE_COPY(UpdateChannelResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
