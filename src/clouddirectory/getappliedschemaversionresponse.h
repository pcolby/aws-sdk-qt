// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLIEDSCHEMAVERSIONRESPONSE_H
#define QTAWS_GETAPPLIEDSCHEMAVERSIONRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getappliedschemaversionrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetAppliedSchemaVersionResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetAppliedSchemaVersionResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetAppliedSchemaVersionResponse(const GetAppliedSchemaVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppliedSchemaVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppliedSchemaVersionResponse)
    Q_DISABLE_COPY(GetAppliedSchemaVersionResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
