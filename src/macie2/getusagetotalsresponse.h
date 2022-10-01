// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGETOTALSRESPONSE_H
#define QTAWS_GETUSAGETOTALSRESPONSE_H

#include "macie2response.h"
#include "getusagetotalsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetUsageTotalsResponsePrivate;

class QTAWSMACIE2_EXPORT GetUsageTotalsResponse : public Macie2Response {
    Q_OBJECT

public:
    GetUsageTotalsResponse(const GetUsageTotalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsageTotalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageTotalsResponse)
    Q_DISABLE_COPY(GetUsageTotalsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
