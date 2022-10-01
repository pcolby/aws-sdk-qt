// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTSHAREDDIRECTORYRESPONSE_H
#define QTAWS_ACCEPTSHAREDDIRECTORYRESPONSE_H

#include "directoryserviceresponse.h"
#include "acceptshareddirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class AcceptSharedDirectoryResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT AcceptSharedDirectoryResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    AcceptSharedDirectoryResponse(const AcceptSharedDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptSharedDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptSharedDirectoryResponse)
    Q_DISABLE_COPY(AcceptSharedDirectoryResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
