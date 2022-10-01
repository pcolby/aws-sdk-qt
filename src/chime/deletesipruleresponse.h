// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPRULERESPONSE_H
#define QTAWS_DELETESIPRULERESPONSE_H

#include "chimeresponse.h"
#include "deletesiprulerequest.h"

namespace QtAws {
namespace Chime {

class DeleteSipRuleResponsePrivate;

class QTAWSCHIME_EXPORT DeleteSipRuleResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteSipRuleResponse(const DeleteSipRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSipRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSipRuleResponse)
    Q_DISABLE_COPY(DeleteSipRuleResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
