// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMANDINVOCATIONRESPONSE_H
#define QTAWS_GETCOMMANDINVOCATIONRESPONSE_H

#include "ssmresponse.h"
#include "getcommandinvocationrequest.h"

namespace QtAws {
namespace Ssm {

class GetCommandInvocationResponsePrivate;

class QTAWSSSM_EXPORT GetCommandInvocationResponse : public SsmResponse {
    Q_OBJECT

public:
    GetCommandInvocationResponse(const GetCommandInvocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommandInvocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommandInvocationResponse)
    Q_DISABLE_COPY(GetCommandInvocationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
