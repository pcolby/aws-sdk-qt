// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMPOLICYRESPONSE_H
#define QTAWS_DELETEFILESYSTEMPOLICYRESPONSE_H

#include "efsresponse.h"
#include "deletefilesystempolicyrequest.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemPolicyResponsePrivate;

class QTAWSEFS_EXPORT DeleteFileSystemPolicyResponse : public EfsResponse {
    Q_OBJECT

public:
    DeleteFileSystemPolicyResponse(const DeleteFileSystemPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFileSystemPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileSystemPolicyResponse)
    Q_DISABLE_COPY(DeleteFileSystemPolicyResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
