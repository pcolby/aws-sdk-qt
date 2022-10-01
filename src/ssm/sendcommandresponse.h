// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCOMMANDRESPONSE_H
#define QTAWS_SENDCOMMANDRESPONSE_H

#include "ssmresponse.h"
#include "sendcommandrequest.h"

namespace QtAws {
namespace Ssm {

class SendCommandResponsePrivate;

class QTAWSSSM_EXPORT SendCommandResponse : public SsmResponse {
    Q_OBJECT

public:
    SendCommandResponse(const SendCommandRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendCommandRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendCommandResponse)
    Q_DISABLE_COPY(SendCommandResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
