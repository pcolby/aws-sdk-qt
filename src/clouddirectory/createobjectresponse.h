// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBJECTRESPONSE_H
#define QTAWS_CREATEOBJECTRESPONSE_H

#include "clouddirectoryresponse.h"
#include "createobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateObjectResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateObjectResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    CreateObjectResponse(const CreateObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateObjectResponse)
    Q_DISABLE_COPY(CreateObjectResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
