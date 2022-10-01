// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECONTACTRECORDINGRESPONSE_H
#define QTAWS_RESUMECONTACTRECORDINGRESPONSE_H

#include "connectresponse.h"
#include "resumecontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class ResumeContactRecordingResponsePrivate;

class QTAWSCONNECT_EXPORT ResumeContactRecordingResponse : public ConnectResponse {
    Q_OBJECT

public:
    ResumeContactRecordingResponse(const ResumeContactRecordingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeContactRecordingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeContactRecordingResponse)
    Q_DISABLE_COPY(ResumeContactRecordingResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
