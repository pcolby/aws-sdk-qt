// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMMANDRESPONSE_H
#define QTAWS_CANCELCOMMANDRESPONSE_H

#include "ssmresponse.h"
#include "cancelcommandrequest.h"

namespace QtAws {
namespace Ssm {

class CancelCommandResponsePrivate;

class QTAWSSSM_EXPORT CancelCommandResponse : public SsmResponse {
    Q_OBJECT

public:
    CancelCommandResponse(const CancelCommandRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelCommandRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCommandResponse)
    Q_DISABLE_COPY(CancelCommandResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
