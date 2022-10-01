// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKPUBLICACCESSCONFIGURATIONREQUEST_H
#define QTAWS_GETBLOCKPUBLICACCESSCONFIGURATIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class GetBlockPublicAccessConfigurationRequestPrivate;

class QTAWSEMR_EXPORT GetBlockPublicAccessConfigurationRequest : public EmrRequest {

public:
    GetBlockPublicAccessConfigurationRequest(const GetBlockPublicAccessConfigurationRequest &other);
    GetBlockPublicAccessConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlockPublicAccessConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
