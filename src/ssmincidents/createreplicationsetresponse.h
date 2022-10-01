// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSETRESPONSE_H
#define QTAWS_CREATEREPLICATIONSETRESPONSE_H

#include "ssmincidentsresponse.h"
#include "createreplicationsetrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateReplicationSetResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT CreateReplicationSetResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    CreateReplicationSetResponse(const CreateReplicationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationSetResponse)
    Q_DISABLE_COPY(CreateReplicationSetResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
