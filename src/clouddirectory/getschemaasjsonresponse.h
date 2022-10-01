// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAASJSONRESPONSE_H
#define QTAWS_GETSCHEMAASJSONRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getschemaasjsonrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetSchemaAsJsonResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetSchemaAsJsonResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetSchemaAsJsonResponse(const GetSchemaAsJsonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSchemaAsJsonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaAsJsonResponse)
    Q_DISABLE_COPY(GetSchemaAsJsonResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
