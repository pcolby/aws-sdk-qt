// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVISIONRESPONSE_H
#define QTAWS_GETREVISIONRESPONSE_H

#include "qldbresponse.h"
#include "getrevisionrequest.h"

namespace QtAws {
namespace Qldb {

class GetRevisionResponsePrivate;

class QTAWSQLDB_EXPORT GetRevisionResponse : public QldbResponse {
    Q_OBJECT

public:
    GetRevisionResponse(const GetRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRevisionResponse)
    Q_DISABLE_COPY(GetRevisionResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
