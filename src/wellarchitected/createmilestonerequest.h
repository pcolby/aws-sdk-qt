// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMILESTONEREQUEST_H
#define QTAWS_CREATEMILESTONEREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateMilestoneRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateMilestoneRequest : public WellArchitectedRequest {

public:
    CreateMilestoneRequest(const CreateMilestoneRequest &other);
    CreateMilestoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMilestoneRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
