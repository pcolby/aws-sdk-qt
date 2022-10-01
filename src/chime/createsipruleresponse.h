// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPRULERESPONSE_H
#define QTAWS_CREATESIPRULERESPONSE_H

#include "chimeresponse.h"
#include "createsiprulerequest.h"

namespace QtAws {
namespace Chime {

class CreateSipRuleResponsePrivate;

class QTAWSCHIME_EXPORT CreateSipRuleResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateSipRuleResponse(const CreateSipRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSipRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSipRuleResponse)
    Q_DISABLE_COPY(CreateSipRuleResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
