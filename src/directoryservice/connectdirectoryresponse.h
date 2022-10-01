// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTDIRECTORYRESPONSE_H
#define QTAWS_CONNECTDIRECTORYRESPONSE_H

#include "directoryserviceresponse.h"
#include "connectdirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class ConnectDirectoryResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ConnectDirectoryResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    ConnectDirectoryResponse(const ConnectDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConnectDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectDirectoryResponse)
    Q_DISABLE_COPY(ConnectDirectoryResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
