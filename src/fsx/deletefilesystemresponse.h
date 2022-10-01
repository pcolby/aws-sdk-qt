// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMRESPONSE_H
#define QTAWS_DELETEFILESYSTEMRESPONSE_H

#include "fsxresponse.h"
#include "deletefilesystemrequest.h"

namespace QtAws {
namespace FSx {

class DeleteFileSystemResponsePrivate;

class QTAWSFSX_EXPORT DeleteFileSystemResponse : public FSxResponse {
    Q_OBJECT

public:
    DeleteFileSystemResponse(const DeleteFileSystemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFileSystemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileSystemResponse)
    Q_DISABLE_COPY(DeleteFileSystemResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
