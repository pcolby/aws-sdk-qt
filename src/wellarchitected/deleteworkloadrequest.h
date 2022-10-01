// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADREQUEST_H
#define QTAWS_DELETEWORKLOADREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteWorkloadRequest : public WellArchitectedRequest {

public:
    DeleteWorkloadRequest(const DeleteWorkloadRequest &other);
    DeleteWorkloadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
