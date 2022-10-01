// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSCHEDULEDACTIONRESPONSE_H
#define QTAWS_MODIFYSCHEDULEDACTIONRESPONSE_H

#include "redshiftresponse.h"
#include "modifyscheduledactionrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyScheduledActionResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyScheduledActionResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyScheduledActionResponse(const ModifyScheduledActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyScheduledActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyScheduledActionResponse)
    Q_DISABLE_COPY(ModifyScheduledActionResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
