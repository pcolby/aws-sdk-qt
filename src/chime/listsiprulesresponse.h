// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPRULESRESPONSE_H
#define QTAWS_LISTSIPRULESRESPONSE_H

#include "chimeresponse.h"
#include "listsiprulesrequest.h"

namespace QtAws {
namespace Chime {

class ListSipRulesResponsePrivate;

class QTAWSCHIME_EXPORT ListSipRulesResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListSipRulesResponse(const ListSipRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSipRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSipRulesResponse)
    Q_DISABLE_COPY(ListSipRulesResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
