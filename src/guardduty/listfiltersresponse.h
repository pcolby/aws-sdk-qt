// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSRESPONSE_H
#define QTAWS_LISTFILTERSRESPONSE_H

#include "guarddutyresponse.h"
#include "listfiltersrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListFiltersResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ListFiltersResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ListFiltersResponse(const ListFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFiltersResponse)
    Q_DISABLE_COPY(ListFiltersResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
