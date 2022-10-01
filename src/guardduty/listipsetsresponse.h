// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSRESPONSE_H
#define QTAWS_LISTIPSETSRESPONSE_H

#include "guarddutyresponse.h"
#include "listipsetsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListIPSetsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ListIPSetsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ListIPSetsResponse(const ListIPSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIPSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIPSetsResponse)
    Q_DISABLE_COPY(ListIPSetsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
