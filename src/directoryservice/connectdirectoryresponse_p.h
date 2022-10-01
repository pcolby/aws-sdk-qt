// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTDIRECTORYRESPONSE_P_H
#define QTAWS_CONNECTDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class ConnectDirectoryResponse;

class ConnectDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit ConnectDirectoryResponsePrivate(ConnectDirectoryResponse * const q);

    void parseConnectDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConnectDirectoryResponse)
    Q_DISABLE_COPY(ConnectDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
