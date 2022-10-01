// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLIEDSCHEMAARNSRESPONSE_H
#define QTAWS_LISTAPPLIEDSCHEMAARNSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listappliedschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListAppliedSchemaArnsResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListAppliedSchemaArnsResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListAppliedSchemaArnsResponse(const ListAppliedSchemaArnsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppliedSchemaArnsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppliedSchemaArnsResponse)
    Q_DISABLE_COPY(ListAppliedSchemaArnsResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
