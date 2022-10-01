// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGRESPONSE_H
#define QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGRESPONSE_H

#include "connectresponse.h"
#include "disassociateinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateInstanceStorageConfigResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociateInstanceStorageConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociateInstanceStorageConfigResponse(const DisassociateInstanceStorageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateInstanceStorageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateInstanceStorageConfigResponse)
    Q_DISABLE_COPY(DisassociateInstanceStorageConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
