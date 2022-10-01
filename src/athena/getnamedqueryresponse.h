// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMEDQUERYRESPONSE_H
#define QTAWS_GETNAMEDQUERYRESPONSE_H

#include "athenaresponse.h"
#include "getnamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class GetNamedQueryResponsePrivate;

class QTAWSATHENA_EXPORT GetNamedQueryResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetNamedQueryResponse(const GetNamedQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNamedQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamedQueryResponse)
    Q_DISABLE_COPY(GetNamedQueryResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
