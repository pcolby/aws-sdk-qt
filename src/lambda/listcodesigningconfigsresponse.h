// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODESIGNINGCONFIGSRESPONSE_H
#define QTAWS_LISTCODESIGNINGCONFIGSRESPONSE_H

#include "lambdaresponse.h"
#include "listcodesigningconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListCodeSigningConfigsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListCodeSigningConfigsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListCodeSigningConfigsResponse(const ListCodeSigningConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCodeSigningConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCodeSigningConfigsResponse)
    Q_DISABLE_COPY(ListCodeSigningConfigsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
