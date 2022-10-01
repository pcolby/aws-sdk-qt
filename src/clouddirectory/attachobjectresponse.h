// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHOBJECTRESPONSE_H
#define QTAWS_ATTACHOBJECTRESPONSE_H

#include "clouddirectoryresponse.h"
#include "attachobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachObjectResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachObjectResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    AttachObjectResponse(const AttachObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachObjectResponse)
    Q_DISABLE_COPY(AttachObjectResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
