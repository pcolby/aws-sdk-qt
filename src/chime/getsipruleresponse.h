// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPRULERESPONSE_H
#define QTAWS_GETSIPRULERESPONSE_H

#include "chimeresponse.h"
#include "getsiprulerequest.h"

namespace QtAws {
namespace Chime {

class GetSipRuleResponsePrivate;

class QTAWSCHIME_EXPORT GetSipRuleResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetSipRuleResponse(const GetSipRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSipRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSipRuleResponse)
    Q_DISABLE_COPY(GetSipRuleResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
