// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMRESPONSE_H
#define QTAWS_DELETEFILESYSTEMRESPONSE_H

#include "efsresponse.h"
#include "deletefilesystemrequest.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemResponsePrivate;

class QTAWSEFS_EXPORT DeleteFileSystemResponse : public EfsResponse {
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

} // namespace Efs
} // namespace QtAws

#endif
