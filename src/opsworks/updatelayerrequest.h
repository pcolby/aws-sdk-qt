// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAYERREQUEST_H
#define QTAWS_UPDATELAYERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateLayerRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateLayerRequest : public OpsWorksRequest {

public:
    UpdateLayerRequest(const UpdateLayerRequest &other);
    UpdateLayerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLayerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
