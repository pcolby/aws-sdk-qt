// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSREQUEST_H
#define QTAWS_DELETELENSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteLensRequest : public WellArchitectedRequest {

public:
    DeleteLensRequest(const DeleteLensRequest &other);
    DeleteLensRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
