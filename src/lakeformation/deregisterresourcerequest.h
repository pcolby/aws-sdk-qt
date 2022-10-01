// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRESOURCEREQUEST_H
#define QTAWS_DEREGISTERRESOURCEREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeregisterResourceRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT DeregisterResourceRequest : public LakeFormationRequest {

public:
    DeregisterResourceRequest(const DeregisterResourceRequest &other);
    DeregisterResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
