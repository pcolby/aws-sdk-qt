// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCESTORAGECONFIGRESPONSE_H
#define QTAWS_UPDATEINSTANCESTORAGECONFIGRESPONSE_H

#include "connectresponse.h"
#include "updateinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceStorageConfigResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateInstanceStorageConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateInstanceStorageConfigResponse(const UpdateInstanceStorageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInstanceStorageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceStorageConfigResponse)
    Q_DISABLE_COPY(UpdateInstanceStorageConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
