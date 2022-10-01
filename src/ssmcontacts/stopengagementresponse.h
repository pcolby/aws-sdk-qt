// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENGAGEMENTRESPONSE_H
#define QTAWS_STOPENGAGEMENTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "stopengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class StopEngagementResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT StopEngagementResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    StopEngagementResponse(const StopEngagementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopEngagementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEngagementResponse)
    Q_DISABLE_COPY(StopEngagementResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
