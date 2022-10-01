// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMODERATORRESPONSE_H
#define QTAWS_CREATECHANNELMODERATORRESPONSE_H

#include "chimeresponse.h"
#include "createchannelmoderatorrequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelModeratorResponsePrivate;

class QTAWSCHIME_EXPORT CreateChannelModeratorResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateChannelModeratorResponse(const CreateChannelModeratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelModeratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelModeratorResponse)
    Q_DISABLE_COPY(CreateChannelModeratorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
