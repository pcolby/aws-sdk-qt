// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAFROMJSONRESPONSE_H
#define QTAWS_PUTSCHEMAFROMJSONRESPONSE_H

#include "clouddirectoryresponse.h"
#include "putschemafromjsonrequest.h"

namespace QtAws {
namespace CloudDirectory {

class PutSchemaFromJsonResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT PutSchemaFromJsonResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    PutSchemaFromJsonResponse(const PutSchemaFromJsonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSchemaFromJsonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSchemaFromJsonResponse)
    Q_DISABLE_COPY(PutSchemaFromJsonResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
