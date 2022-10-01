// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTRESPONSE_H
#define QTAWS_DELETEOBJECTRESPONSE_H

#include "clouddirectoryresponse.h"
#include "deleteobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteObjectResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteObjectResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DeleteObjectResponse(const DeleteObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectResponse)
    Q_DISABLE_COPY(DeleteObjectResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
