// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYRESPONSE_H
#define QTAWS_CREATEDIRECTORYRESPONSE_H

#include "clouddirectoryresponse.h"
#include "createdirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateDirectoryResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateDirectoryResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    CreateDirectoryResponse(const CreateDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectoryResponse)
    Q_DISABLE_COPY(CreateDirectoryResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
