// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPRESSIONRESPONSE_H
#define QTAWS_DELETEEXPRESSIONRESPONSE_H

#include "cloudsearchresponse.h"
#include "deleteexpressionrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteExpressionResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DeleteExpressionResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DeleteExpressionResponse(const DeleteExpressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExpressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExpressionResponse)
    Q_DISABLE_COPY(DeleteExpressionResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
