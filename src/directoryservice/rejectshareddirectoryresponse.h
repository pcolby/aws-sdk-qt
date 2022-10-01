// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSHAREDDIRECTORYRESPONSE_H
#define QTAWS_REJECTSHAREDDIRECTORYRESPONSE_H

#include "directoryserviceresponse.h"
#include "rejectshareddirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class RejectSharedDirectoryResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RejectSharedDirectoryResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    RejectSharedDirectoryResponse(const RejectSharedDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectSharedDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectSharedDirectoryResponse)
    Q_DISABLE_COPY(RejectSharedDirectoryResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
