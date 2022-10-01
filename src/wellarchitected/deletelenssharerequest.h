// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSSHAREREQUEST_H
#define QTAWS_DELETELENSSHAREREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensShareRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteLensShareRequest : public WellArchitectedRequest {

public:
    DeleteLensShareRequest(const DeleteLensShareRequest &other);
    DeleteLensShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLensShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
