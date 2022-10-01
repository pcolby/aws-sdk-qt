// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORRESPONSE_H
#define QTAWS_DELETEDETECTORRESPONSE_H

#include "guarddutyresponse.h"
#include "deletedetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteDetectorResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DeleteDetectorResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DeleteDetectorResponse(const DeleteDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDetectorResponse)
    Q_DISABLE_COPY(DeleteDetectorResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
