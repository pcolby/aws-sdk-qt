// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOOTSTRAPACTIONSRESPONSE_H
#define QTAWS_LISTBOOTSTRAPACTIONSRESPONSE_H

#include "emrresponse.h"
#include "listbootstrapactionsrequest.h"

namespace QtAws {
namespace Emr {

class ListBootstrapActionsResponsePrivate;

class QTAWSEMR_EXPORT ListBootstrapActionsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListBootstrapActionsResponse(const ListBootstrapActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBootstrapActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBootstrapActionsResponse)
    Q_DISABLE_COPY(ListBootstrapActionsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
