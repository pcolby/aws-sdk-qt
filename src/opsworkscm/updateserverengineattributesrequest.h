// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERENGINEATTRIBUTESREQUEST_H
#define QTAWS_UPDATESERVERENGINEATTRIBUTESREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class UpdateServerEngineAttributesRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT UpdateServerEngineAttributesRequest : public OpsWorksCmRequest {

public:
    UpdateServerEngineAttributesRequest(const UpdateServerEngineAttributesRequest &other);
    UpdateServerEngineAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerEngineAttributesRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
