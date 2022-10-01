// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREDIRECTORYRESPONSE_H
#define QTAWS_UNSHAREDIRECTORYRESPONSE_H

#include "directoryserviceresponse.h"
#include "unsharedirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class UnshareDirectoryResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UnshareDirectoryResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    UnshareDirectoryResponse(const UnshareDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnshareDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnshareDirectoryResponse)
    Q_DISABLE_COPY(UnshareDirectoryResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
