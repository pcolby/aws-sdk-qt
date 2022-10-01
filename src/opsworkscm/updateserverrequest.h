// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERREQUEST_H
#define QTAWS_UPDATESERVERREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class UpdateServerRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT UpdateServerRequest : public OpsWorksCmRequest {

public:
    UpdateServerRequest(const UpdateServerRequest &other);
    UpdateServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
