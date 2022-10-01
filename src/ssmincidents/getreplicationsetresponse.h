// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONSETRESPONSE_H
#define QTAWS_GETREPLICATIONSETRESPONSE_H

#include "ssmincidentsresponse.h"
#include "getreplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetReplicationSetResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT GetReplicationSetResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    GetReplicationSetResponse(const GetReplicationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReplicationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationSetResponse)
    Q_DISABLE_COPY(GetReplicationSetResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
