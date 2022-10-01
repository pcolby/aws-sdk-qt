// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPRULERESPONSE_H
#define QTAWS_UPDATESIPRULERESPONSE_H

#include "chimeresponse.h"
#include "updatesiprulerequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipRuleResponsePrivate;

class QTAWSCHIME_EXPORT UpdateSipRuleResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateSipRuleResponse(const UpdateSipRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSipRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSipRuleResponse)
    Q_DISABLE_COPY(UpdateSipRuleResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
