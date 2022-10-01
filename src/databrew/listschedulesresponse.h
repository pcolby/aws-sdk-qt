// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULESRESPONSE_H
#define QTAWS_LISTSCHEDULESRESPONSE_H

#include "databrewresponse.h"
#include "listschedulesrequest.h"

namespace QtAws {
namespace DataBrew {

class ListSchedulesResponsePrivate;

class QTAWSDATABREW_EXPORT ListSchedulesResponse : public DataBrewResponse {
    Q_OBJECT

public:
    ListSchedulesResponse(const ListSchedulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSchedulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchedulesResponse)
    Q_DISABLE_COPY(ListSchedulesResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
