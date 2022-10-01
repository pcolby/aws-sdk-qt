// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHAREDIRECTORYRESPONSE_H
#define QTAWS_SHAREDIRECTORYRESPONSE_H

#include "directoryserviceresponse.h"
#include "sharedirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class ShareDirectoryResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ShareDirectoryResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    ShareDirectoryResponse(const ShareDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ShareDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ShareDirectoryResponse)
    Q_DISABLE_COPY(ShareDirectoryResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
