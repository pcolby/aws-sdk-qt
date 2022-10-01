// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADSHAREREQUEST_H
#define QTAWS_DELETEWORKLOADSHAREREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadShareRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteWorkloadShareRequest : public WellArchitectedRequest {

public:
    DeleteWorkloadShareRequest(const DeleteWorkloadShareRequest &other);
    DeleteWorkloadShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkloadShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
