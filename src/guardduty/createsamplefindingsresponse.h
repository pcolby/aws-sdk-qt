// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLEFINDINGSRESPONSE_H
#define QTAWS_CREATESAMPLEFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "createsamplefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateSampleFindingsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT CreateSampleFindingsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreateSampleFindingsResponse(const CreateSampleFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSampleFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSampleFindingsResponse)
    Q_DISABLE_COPY(CreateSampleFindingsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
