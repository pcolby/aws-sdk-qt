// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENGAGEMENTRESPONSE_H
#define QTAWS_STARTENGAGEMENTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "startengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class StartEngagementResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT StartEngagementResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    StartEngagementResponse(const StartEngagementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartEngagementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEngagementResponse)
    Q_DISABLE_COPY(StartEngagementResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
