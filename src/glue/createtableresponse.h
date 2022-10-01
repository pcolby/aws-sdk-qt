// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETABLERESPONSE_H
#define QTAWS_CREATETABLERESPONSE_H

#include "glueresponse.h"
#include "createtablerequest.h"

namespace QtAws {
namespace Glue {

class CreateTableResponsePrivate;

class QTAWSGLUE_EXPORT CreateTableResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateTableResponse(const CreateTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTableResponse)
    Q_DISABLE_COPY(CreateTableResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
