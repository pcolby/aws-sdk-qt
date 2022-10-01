// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPSETRESPONSE_H
#define QTAWS_CREATEIPSETRESPONSE_H

#include "wafv2response.h"
#include "createipsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class CreateIPSetResponsePrivate;

class QTAWSWAFV2_EXPORT CreateIPSetResponse : public Wafv2Response {
    Q_OBJECT

public:
    CreateIPSetResponse(const CreateIPSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIPSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIPSetResponse)
    Q_DISABLE_COPY(CreateIPSetResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
