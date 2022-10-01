// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESERVERREQUEST_H
#define QTAWS_RESTORESERVERREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class RestoreServerRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT RestoreServerRequest : public OpsWorksCmRequest {

public:
    RestoreServerRequest(const RestoreServerRequest &other);
    RestoreServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
