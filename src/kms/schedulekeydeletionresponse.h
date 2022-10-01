// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULEKEYDELETIONRESPONSE_H
#define QTAWS_SCHEDULEKEYDELETIONRESPONSE_H

#include "kmsresponse.h"
#include "schedulekeydeletionrequest.h"

namespace QtAws {
namespace Kms {

class ScheduleKeyDeletionResponsePrivate;

class QTAWSKMS_EXPORT ScheduleKeyDeletionResponse : public KmsResponse {
    Q_OBJECT

public:
    ScheduleKeyDeletionResponse(const ScheduleKeyDeletionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ScheduleKeyDeletionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScheduleKeyDeletionResponse)
    Q_DISABLE_COPY(ScheduleKeyDeletionResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
