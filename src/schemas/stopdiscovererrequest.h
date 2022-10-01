// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDISCOVERERREQUEST_H
#define QTAWS_STOPDISCOVERERREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class StopDiscovererRequestPrivate;

class QTAWSSCHEMAS_EXPORT StopDiscovererRequest : public SchemasRequest {

public:
    StopDiscovererRequest(const StopDiscovererRequest &other);
    StopDiscovererRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
