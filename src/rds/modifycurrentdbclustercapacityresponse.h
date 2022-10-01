// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYRESPONSE_H
#define QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYRESPONSE_H

#include "rdsresponse.h"
#include "modifycurrentdbclustercapacityrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCurrentDBClusterCapacityResponsePrivate;

class QTAWSRDS_EXPORT ModifyCurrentDBClusterCapacityResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyCurrentDBClusterCapacityResponse(const ModifyCurrentDBClusterCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCurrentDBClusterCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCurrentDBClusterCapacityResponse)
    Q_DISABLE_COPY(ModifyCurrentDBClusterCapacityResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
