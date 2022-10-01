// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMSRESPONSE_H
#define QTAWS_DELETEALARMSRESPONSE_H

#include "cloudwatchresponse.h"
#include "deletealarmsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteAlarmsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteAlarmsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DeleteAlarmsResponse(const DeleteAlarmsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlarmsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlarmsResponse)
    Q_DISABLE_COPY(DeleteAlarmsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
