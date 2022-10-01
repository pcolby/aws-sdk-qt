// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERREQUEST_H
#define QTAWS_MODIFYCLUSTERREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ModifyClusterRequestPrivate;

class QTAWSEMR_EXPORT ModifyClusterRequest : public EmrRequest {

public:
    ModifyClusterRequest(const ModifyClusterRequest &other);
    ModifyClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
