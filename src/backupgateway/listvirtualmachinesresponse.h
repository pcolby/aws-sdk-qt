// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMACHINESRESPONSE_H
#define QTAWS_LISTVIRTUALMACHINESRESPONSE_H

#include "backupgatewayresponse.h"
#include "listvirtualmachinesrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListVirtualMachinesResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT ListVirtualMachinesResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    ListVirtualMachinesResponse(const ListVirtualMachinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualMachinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualMachinesResponse)
    Q_DISABLE_COPY(ListVirtualMachinesResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
