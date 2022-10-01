// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASERESPONSE_H
#define QTAWS_GETDATABASERESPONSE_H

#include "athenaresponse.h"
#include "getdatabaserequest.h"

namespace QtAws {
namespace Athena {

class GetDatabaseResponsePrivate;

class QTAWSATHENA_EXPORT GetDatabaseResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetDatabaseResponse(const GetDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatabaseResponse)
    Q_DISABLE_COPY(GetDatabaseResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
