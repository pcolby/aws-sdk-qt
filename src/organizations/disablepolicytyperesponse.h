// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPOLICYTYPERESPONSE_H
#define QTAWS_DISABLEPOLICYTYPERESPONSE_H

#include "organizationsresponse.h"
#include "disablepolicytyperequest.h"

namespace QtAws {
namespace Organizations {

class DisablePolicyTypeResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DisablePolicyTypeResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DisablePolicyTypeResponse(const DisablePolicyTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisablePolicyTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisablePolicyTypeResponse)
    Q_DISABLE_COPY(DisablePolicyTypeResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
