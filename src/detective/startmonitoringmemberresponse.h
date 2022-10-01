// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERRESPONSE_H
#define QTAWS_STARTMONITORINGMEMBERRESPONSE_H

#include "detectiveresponse.h"
#include "startmonitoringmemberrequest.h"

namespace QtAws {
namespace Detective {

class StartMonitoringMemberResponsePrivate;

class QTAWSDETECTIVE_EXPORT StartMonitoringMemberResponse : public DetectiveResponse {
    Q_OBJECT

public:
    StartMonitoringMemberResponse(const StartMonitoringMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMonitoringMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMonitoringMemberResponse)
    Q_DISABLE_COPY(StartMonitoringMemberResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
