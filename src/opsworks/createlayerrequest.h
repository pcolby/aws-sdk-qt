// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAYERREQUEST_H
#define QTAWS_CREATELAYERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateLayerRequestPrivate;

class QTAWSOPSWORKS_EXPORT CreateLayerRequest : public OpsWorksRequest {

public:
    CreateLayerRequest(const CreateLayerRequest &other);
    CreateLayerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLayerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
