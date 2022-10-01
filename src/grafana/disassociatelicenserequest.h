// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELICENSEREQUEST_H
#define QTAWS_DISASSOCIATELICENSEREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class DisassociateLicenseRequestPrivate;

class QTAWSGRAFANA_EXPORT DisassociateLicenseRequest : public GrafanaRequest {

public:
    DisassociateLicenseRequest(const DisassociateLicenseRequest &other);
    DisassociateLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLicenseRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
