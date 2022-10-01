// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREFETCHSCHEDULESRESPONSE_H
#define QTAWS_LISTPREFETCHSCHEDULESRESPONSE_H

#include "mediatailorresponse.h"
#include "listprefetchschedulesrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListPrefetchSchedulesResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ListPrefetchSchedulesResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ListPrefetchSchedulesResponse(const ListPrefetchSchedulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPrefetchSchedulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrefetchSchedulesResponse)
    Q_DISABLE_COPY(ListPrefetchSchedulesResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
