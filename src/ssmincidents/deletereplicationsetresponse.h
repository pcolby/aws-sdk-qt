// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSETRESPONSE_H
#define QTAWS_DELETEREPLICATIONSETRESPONSE_H

#include "ssmincidentsresponse.h"
#include "deletereplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteReplicationSetResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteReplicationSetResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    DeleteReplicationSetResponse(const DeleteReplicationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationSetResponse)
    Q_DISABLE_COPY(DeleteReplicationSetResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
