// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCERTIFICATESRESPONSE_H
#define QTAWS_MODIFYCERTIFICATESRESPONSE_H

#include "rdsresponse.h"
#include "modifycertificatesrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCertificatesResponsePrivate;

class QTAWSRDS_EXPORT ModifyCertificatesResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyCertificatesResponse(const ModifyCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCertificatesResponse)
    Q_DISABLE_COPY(ModifyCertificatesResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
