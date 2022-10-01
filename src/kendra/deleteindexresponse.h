// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXRESPONSE_H
#define QTAWS_DELETEINDEXRESPONSE_H

#include "kendraresponse.h"
#include "deleteindexrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteIndexResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteIndexResponse : public KendraResponse {
    Q_OBJECT

public:
    DeleteIndexResponse(const DeleteIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIndexResponse)
    Q_DISABLE_COPY(DeleteIndexResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
