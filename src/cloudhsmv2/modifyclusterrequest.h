// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERREQUEST_H
#define QTAWS_MODIFYCLUSTERREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class ModifyClusterRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT ModifyClusterRequest : public CloudHsmV2Request {

public:
    ModifyClusterRequest(const ModifyClusterRequest &other);
    ModifyClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
