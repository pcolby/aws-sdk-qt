// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERDETECTORSRESPONSE_H
#define QTAWS_UPDATEMEMBERDETECTORSRESPONSE_H

#include "guarddutyresponse.h"
#include "updatememberdetectorsrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateMemberDetectorsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT UpdateMemberDetectorsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    UpdateMemberDetectorsResponse(const UpdateMemberDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMemberDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMemberDetectorsResponse)
    Q_DISABLE_COPY(UpdateMemberDetectorsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
