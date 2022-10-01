// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLABELPARAMETERVERSIONRESPONSE_H
#define QTAWS_UNLABELPARAMETERVERSIONRESPONSE_H

#include "ssmresponse.h"
#include "unlabelparameterversionrequest.h"

namespace QtAws {
namespace Ssm {

class UnlabelParameterVersionResponsePrivate;

class QTAWSSSM_EXPORT UnlabelParameterVersionResponse : public SsmResponse {
    Q_OBJECT

public:
    UnlabelParameterVersionResponse(const UnlabelParameterVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnlabelParameterVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnlabelParameterVersionResponse)
    Q_DISABLE_COPY(UnlabelParameterVersionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
