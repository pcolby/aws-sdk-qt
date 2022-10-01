// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMRECOVERYPOINTRESPONSE_H
#define QTAWS_RESTOREFROMRECOVERYPOINTRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "restorefromrecoverypointrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class RestoreFromRecoveryPointResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT RestoreFromRecoveryPointResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    RestoreFromRecoveryPointResponse(const RestoreFromRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreFromRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreFromRecoveryPointResponse)
    Q_DISABLE_COPY(RestoreFromRecoveryPointResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
