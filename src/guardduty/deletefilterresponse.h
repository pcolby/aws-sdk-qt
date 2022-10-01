// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERRESPONSE_H
#define QTAWS_DELETEFILTERRESPONSE_H

#include "guarddutyresponse.h"
#include "deletefilterrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteFilterResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DeleteFilterResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DeleteFilterResponse(const DeleteFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFilterResponse)
    Q_DISABLE_COPY(DeleteFilterResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
