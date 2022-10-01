// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMILESTONEREQUEST_H
#define QTAWS_GETMILESTONEREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetMilestoneRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT GetMilestoneRequest : public WellArchitectedRequest {

public:
    GetMilestoneRequest(const GetMilestoneRequest &other);
    GetMilestoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMilestoneRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
