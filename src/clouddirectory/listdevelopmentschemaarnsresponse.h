// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVELOPMENTSCHEMAARNSRESPONSE_H
#define QTAWS_LISTDEVELOPMENTSCHEMAARNSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listdevelopmentschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDevelopmentSchemaArnsResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListDevelopmentSchemaArnsResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListDevelopmentSchemaArnsResponse(const ListDevelopmentSchemaArnsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDevelopmentSchemaArnsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevelopmentSchemaArnsResponse)
    Q_DISABLE_COPY(ListDevelopmentSchemaArnsResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
