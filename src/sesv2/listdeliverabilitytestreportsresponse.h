// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_H

#include "sesv2response.h"
#include "listdeliverabilitytestreportsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListDeliverabilityTestReportsResponsePrivate;

class QTAWSSESV2_EXPORT ListDeliverabilityTestReportsResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
