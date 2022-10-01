// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCESTORAGECONFIGRESPONSE_H
#define QTAWS_ASSOCIATEINSTANCESTORAGECONFIGRESPONSE_H

#include "connectresponse.h"
#include "associateinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class AssociateInstanceStorageConfigResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateInstanceStorageConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateInstanceStorageConfigResponse(const AssociateInstanceStorageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateInstanceStorageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateInstanceStorageConfigResponse)
    Q_DISABLE_COPY(AssociateInstanceStorageConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
