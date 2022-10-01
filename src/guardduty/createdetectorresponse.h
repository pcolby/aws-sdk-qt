// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORRESPONSE_H
#define QTAWS_CREATEDETECTORRESPONSE_H

#include "guarddutyresponse.h"
#include "createdetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateDetectorResponsePrivate;

class QTAWSGUARDDUTY_EXPORT CreateDetectorResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreateDetectorResponse(const CreateDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDetectorResponse)
    Q_DISABLE_COPY(CreateDetectorResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
