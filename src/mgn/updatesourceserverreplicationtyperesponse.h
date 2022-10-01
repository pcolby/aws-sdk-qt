// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCESERVERREPLICATIONTYPERESPONSE_H
#define QTAWS_UPDATESOURCESERVERREPLICATIONTYPERESPONSE_H

#include "mgnresponse.h"
#include "updatesourceserverreplicationtyperequest.h"

namespace QtAws {
namespace Mgn {

class UpdateSourceServerReplicationTypeResponsePrivate;

class QTAWSMGN_EXPORT UpdateSourceServerReplicationTypeResponse : public MgnResponse {
    Q_OBJECT

public:
    UpdateSourceServerReplicationTypeResponse(const UpdateSourceServerReplicationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSourceServerReplicationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSourceServerReplicationTypeResponse)
    Q_DISABLE_COPY(UpdateSourceServerReplicationTypeResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
