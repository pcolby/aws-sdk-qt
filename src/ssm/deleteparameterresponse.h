// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERRESPONSE_H
#define QTAWS_DELETEPARAMETERRESPONSE_H

#include "ssmresponse.h"
#include "deleteparameterrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteParameterResponsePrivate;

class QTAWSSSM_EXPORT DeleteParameterResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteParameterResponse(const DeleteParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParameterResponse)
    Q_DISABLE_COPY(DeleteParameterResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
