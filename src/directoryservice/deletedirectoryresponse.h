// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYRESPONSE_H
#define QTAWS_DELETEDIRECTORYRESPONSE_H

#include "directoryserviceresponse.h"
#include "deletedirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteDirectoryResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeleteDirectoryResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DeleteDirectoryResponse(const DeleteDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectoryResponse)
    Q_DISABLE_COPY(DeleteDirectoryResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
