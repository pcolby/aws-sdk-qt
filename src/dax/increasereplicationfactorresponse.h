// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICATIONFACTORRESPONSE_H
#define QTAWS_INCREASEREPLICATIONFACTORRESPONSE_H

#include "daxresponse.h"
#include "increasereplicationfactorrequest.h"

namespace QtAws {
namespace Dax {

class IncreaseReplicationFactorResponsePrivate;

class QTAWSDAX_EXPORT IncreaseReplicationFactorResponse : public DaxResponse {
    Q_OBJECT

public:
    IncreaseReplicationFactorResponse(const IncreaseReplicationFactorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IncreaseReplicationFactorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseReplicationFactorResponse)
    Q_DISABLE_COPY(IncreaseReplicationFactorResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
