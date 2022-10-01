// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINDEXRESPONSE_H
#define QTAWS_CREATEINDEXRESPONSE_H

#include "clouddirectoryresponse.h"
#include "createindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateIndexResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateIndexResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    CreateIndexResponse(const CreateIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIndexResponse)
    Q_DISABLE_COPY(CreateIndexResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
