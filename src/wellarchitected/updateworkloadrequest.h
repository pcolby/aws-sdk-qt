// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADREQUEST_H
#define QTAWS_UPDATEWORKLOADREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateWorkloadRequest : public WellArchitectedRequest {

public:
    UpdateWorkloadRequest(const UpdateWorkloadRequest &other);
    UpdateWorkloadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
