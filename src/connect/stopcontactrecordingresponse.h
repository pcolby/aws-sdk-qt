// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTRECORDINGRESPONSE_H
#define QTAWS_STOPCONTACTRECORDINGRESPONSE_H

#include "connectresponse.h"
#include "stopcontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class StopContactRecordingResponsePrivate;

class QTAWSCONNECT_EXPORT StopContactRecordingResponse : public ConnectResponse {
    Q_OBJECT

public:
    StopContactRecordingResponse(const StopContactRecordingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopContactRecordingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContactRecordingResponse)
    Q_DISABLE_COPY(StopContactRecordingResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
