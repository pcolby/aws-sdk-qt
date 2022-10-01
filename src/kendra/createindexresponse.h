// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINDEXRESPONSE_H
#define QTAWS_CREATEINDEXRESPONSE_H

#include "kendraresponse.h"
#include "createindexrequest.h"

namespace QtAws {
namespace Kendra {

class CreateIndexResponsePrivate;

class QTAWSKENDRA_EXPORT CreateIndexResponse : public KendraResponse {
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

} // namespace Kendra
} // namespace QtAws

#endif
