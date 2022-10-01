// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERSRESPONSE_H
#define QTAWS_DELETEPARAMETERSRESPONSE_H

#include "ssmresponse.h"
#include "deleteparametersrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteParametersResponsePrivate;

class QTAWSSSM_EXPORT DeleteParametersResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteParametersResponse(const DeleteParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParametersResponse)
    Q_DISABLE_COPY(DeleteParametersResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
