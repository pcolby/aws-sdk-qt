// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADSHAREREQUEST_H
#define QTAWS_CREATEWORKLOADSHAREREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadShareRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateWorkloadShareRequest : public WellArchitectedRequest {

public:
    CreateWorkloadShareRequest(const CreateWorkloadShareRequest &other);
    CreateWorkloadShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkloadShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
