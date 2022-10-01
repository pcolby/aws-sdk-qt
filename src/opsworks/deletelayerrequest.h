// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERREQUEST_H
#define QTAWS_DELETELAYERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteLayerRequestPrivate;

class QTAWSOPSWORKS_EXPORT DeleteLayerRequest : public OpsWorksRequest {

public:
    DeleteLayerRequest(const DeleteLayerRequest &other);
    DeleteLayerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLayerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
