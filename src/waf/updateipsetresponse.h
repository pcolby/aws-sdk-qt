// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETRESPONSE_H
#define QTAWS_UPDATEIPSETRESPONSE_H

#include "wafresponse.h"
#include "updateipsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateIPSetResponsePrivate;

class QTAWSWAF_EXPORT UpdateIPSetResponse : public WafResponse {
    Q_OBJECT

public:
    UpdateIPSetResponse(const UpdateIPSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIPSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIPSetResponse)
    Q_DISABLE_COPY(UpdateIPSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
