// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMACHINESRESPONSE_P_H
#define QTAWS_LISTVIRTUALMACHINESRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class ListVirtualMachinesResponse;

class ListVirtualMachinesResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit ListVirtualMachinesResponsePrivate(ListVirtualMachinesResponse * const q);

    void parseListVirtualMachinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualMachinesResponse)
    Q_DISABLE_COPY(ListVirtualMachinesResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
