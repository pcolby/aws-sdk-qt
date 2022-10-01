// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEEXPRESSIONRESPONSE_H
#define QTAWS_DEFINEEXPRESSIONRESPONSE_H

#include "cloudsearchresponse.h"
#include "defineexpressionrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineExpressionResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineExpressionResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DefineExpressionResponse(const DefineExpressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DefineExpressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineExpressionResponse)
    Q_DISABLE_COPY(DefineExpressionResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
