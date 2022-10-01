// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONSETRESPONSE_H
#define QTAWS_UPDATEREPLICATIONSETRESPONSE_H

#include "ssmincidentsresponse.h"
#include "updatereplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateReplicationSetResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateReplicationSetResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    UpdateReplicationSetResponse(const UpdateReplicationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReplicationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationSetResponse)
    Q_DISABLE_COPY(UpdateReplicationSetResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
