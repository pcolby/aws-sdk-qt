// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADREQUEST_H
#define QTAWS_CREATEWORKLOADREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateWorkloadRequest : public WellArchitectedRequest {

public:
    CreateWorkloadRequest(const CreateWorkloadRequest &other);
    CreateWorkloadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
