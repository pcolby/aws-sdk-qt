// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDACTIONRESPONSE_H
#define QTAWS_CREATESCHEDULEDACTIONRESPONSE_H

#include "redshiftresponse.h"
#include "createscheduledactionrequest.h"

namespace QtAws {
namespace Redshift {

class CreateScheduledActionResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateScheduledActionResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateScheduledActionResponse(const CreateScheduledActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateScheduledActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduledActionResponse)
    Q_DISABLE_COPY(CreateScheduledActionResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
