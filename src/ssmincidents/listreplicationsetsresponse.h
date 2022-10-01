// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLICATIONSETSRESPONSE_H
#define QTAWS_LISTREPLICATIONSETSRESPONSE_H

#include "ssmincidentsresponse.h"
#include "listreplicationsetsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListReplicationSetsResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT ListReplicationSetsResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    ListReplicationSetsResponse(const ListReplicationSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReplicationSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReplicationSetsResponse)
    Q_DISABLE_COPY(ListReplicationSetsResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
