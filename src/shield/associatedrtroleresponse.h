// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTROLERESPONSE_H
#define QTAWS_ASSOCIATEDRTROLERESPONSE_H

#include "shieldresponse.h"
#include "associatedrtrolerequest.h"

namespace QtAws {
namespace Shield {

class AssociateDRTRoleResponsePrivate;

class QTAWSSHIELD_EXPORT AssociateDRTRoleResponse : public ShieldResponse {
    Q_OBJECT

public:
    AssociateDRTRoleResponse(const AssociateDRTRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDRTRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDRTRoleResponse)
    Q_DISABLE_COPY(AssociateDRTRoleResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
