// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELICENSEREQUEST_H
#define QTAWS_ASSOCIATELICENSEREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class AssociateLicenseRequestPrivate;

class QTAWSGRAFANA_EXPORT AssociateLicenseRequest : public GrafanaRequest {

public:
    AssociateLicenseRequest(const AssociateLicenseRequest &other);
    AssociateLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLicenseRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
