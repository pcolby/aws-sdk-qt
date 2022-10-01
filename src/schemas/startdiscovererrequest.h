// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDISCOVERERREQUEST_H
#define QTAWS_STARTDISCOVERERREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class StartDiscovererRequestPrivate;

class QTAWSSCHEMAS_EXPORT StartDiscovererRequest : public SchemasRequest {

public:
    StartDiscovererRequest(const StartDiscovererRequest &other);
    StartDiscovererRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
