// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERRESPONSE_H
#define QTAWS_CREATEFILTERRESPONSE_H

#include "guarddutyresponse.h"
#include "createfilterrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateFilterResponsePrivate;

class QTAWSGUARDDUTY_EXPORT CreateFilterResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreateFilterResponse(const CreateFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFilterResponse)
    Q_DISABLE_COPY(CreateFilterResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
