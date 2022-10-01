// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSERVERENGINEATTRIBUTEREQUEST_H
#define QTAWS_EXPORTSERVERENGINEATTRIBUTEREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class ExportServerEngineAttributeRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT ExportServerEngineAttributeRequest : public OpsWorksCmRequest {

public:
    ExportServerEngineAttributeRequest(const ExportServerEngineAttributeRequest &other);
    ExportServerEngineAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportServerEngineAttributeRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
