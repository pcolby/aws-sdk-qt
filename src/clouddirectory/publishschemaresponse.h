// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHSCHEMARESPONSE_H
#define QTAWS_PUBLISHSCHEMARESPONSE_H

#include "clouddirectoryresponse.h"
#include "publishschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class PublishSchemaResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT PublishSchemaResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    PublishSchemaResponse(const PublishSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishSchemaResponse)
    Q_DISABLE_COPY(PublishSchemaResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
