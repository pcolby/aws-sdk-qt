// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARAMETERRESPONSE_H
#define QTAWS_PUTPARAMETERRESPONSE_H

#include "ssmresponse.h"
#include "putparameterrequest.h"

namespace QtAws {
namespace Ssm {

class PutParameterResponsePrivate;

class QTAWSSSM_EXPORT PutParameterResponse : public SsmResponse {
    Q_OBJECT

public:
    PutParameterResponse(const PutParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutParameterResponse)
    Q_DISABLE_COPY(PutParameterResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
