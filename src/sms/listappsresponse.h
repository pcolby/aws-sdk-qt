// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSRESPONSE_H
#define QTAWS_LISTAPPSRESPONSE_H

#include "smsresponse.h"
#include "listappsrequest.h"

namespace QtAws {
namespace Sms {

class ListAppsResponsePrivate;

class QTAWSSMS_EXPORT ListAppsResponse : public SmsResponse {
    Q_OBJECT

public:
    ListAppsResponse(const ListAppsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppsResponse)
    Q_DISABLE_COPY(ListAppsResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
