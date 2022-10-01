// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_H

#include "pinpointemailresponse.h"
#include "listdeliverabilitytestreportsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDeliverabilityTestReportsResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT ListDeliverabilityTestReportsResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    ListDeliverabilityTestReportsResponse(const ListDeliverabilityTestReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeliverabilityTestReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeliverabilityTestReportsResponse)
    Q_DISABLE_COPY(ListDeliverabilityTestReportsResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
