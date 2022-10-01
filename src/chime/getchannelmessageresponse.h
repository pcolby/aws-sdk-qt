// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGERESPONSE_H
#define QTAWS_GETCHANNELMESSAGERESPONSE_H

#include "chimeresponse.h"
#include "getchannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class GetChannelMessageResponsePrivate;

class QTAWSCHIME_EXPORT GetChannelMessageResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetChannelMessageResponse(const GetChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMessageResponse)
    Q_DISABLE_COPY(GetChannelMessageResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
