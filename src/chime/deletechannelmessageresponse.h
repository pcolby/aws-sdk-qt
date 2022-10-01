// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMESSAGERESPONSE_H
#define QTAWS_DELETECHANNELMESSAGERESPONSE_H

#include "chimeresponse.h"
#include "deletechannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelMessageResponsePrivate;

class QTAWSCHIME_EXPORT DeleteChannelMessageResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteChannelMessageResponse(const DeleteChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelMessageResponse)
    Q_DISABLE_COPY(DeleteChannelMessageResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
