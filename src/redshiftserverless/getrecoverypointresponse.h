// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTRESPONSE_H
#define QTAWS_GETRECOVERYPOINTRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getrecoverypointrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetRecoveryPointResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetRecoveryPointResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetRecoveryPointResponse(const GetRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryPointResponse)
    Q_DISABLE_COPY(GetRecoveryPointResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
