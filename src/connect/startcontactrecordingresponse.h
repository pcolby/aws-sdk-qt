// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTRECORDINGRESPONSE_H
#define QTAWS_STARTCONTACTRECORDINGRESPONSE_H

#include "connectresponse.h"
#include "startcontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class StartContactRecordingResponsePrivate;

class QTAWSCONNECT_EXPORT StartContactRecordingResponse : public ConnectResponse {
    Q_OBJECT

public:
    StartContactRecordingResponse(const StartContactRecordingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartContactRecordingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContactRecordingResponse)
    Q_DISABLE_COPY(StartContactRecordingResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
