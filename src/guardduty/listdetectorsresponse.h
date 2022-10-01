// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORSRESPONSE_H
#define QTAWS_LISTDETECTORSRESPONSE_H

#include "guarddutyresponse.h"
#include "listdetectorsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListDetectorsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ListDetectorsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ListDetectorsResponse(const ListDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectorsResponse)
    Q_DISABLE_COPY(ListDetectorsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
