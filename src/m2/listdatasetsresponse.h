// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_H
#define QTAWS_LISTDATASETSRESPONSE_H

#include "m2response.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace M2 {

class ListDataSetsResponsePrivate;

class QTAWSM2_EXPORT ListDataSetsResponse : public M2Response {
    Q_OBJECT

public:
    ListDataSetsResponse(const ListDataSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetsResponse)
    Q_DISABLE_COPY(ListDataSetsResponse)

};

} // namespace M2
} // namespace QtAws

#endif
