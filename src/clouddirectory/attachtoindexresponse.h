// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTOINDEXRESPONSE_H
#define QTAWS_ATTACHTOINDEXRESPONSE_H

#include "clouddirectoryresponse.h"
#include "attachtoindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachToIndexResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachToIndexResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    AttachToIndexResponse(const AttachToIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachToIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachToIndexResponse)
    Q_DISABLE_COPY(AttachToIndexResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
