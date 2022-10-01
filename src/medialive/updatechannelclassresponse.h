// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELCLASSRESPONSE_H
#define QTAWS_UPDATECHANNELCLASSRESPONSE_H

#include "medialiveresponse.h"
#include "updatechannelclassrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateChannelClassResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateChannelClassResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateChannelClassResponse(const UpdateChannelClassRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChannelClassRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelClassResponse)
    Q_DISABLE_COPY(UpdateChannelClassResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
