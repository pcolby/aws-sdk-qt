// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANGESETREQUEST_H
#define QTAWS_UPDATECHANGESETREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdateChangesetRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT UpdateChangesetRequest : public FinspaceDataRequest {

public:
    UpdateChangesetRequest(const UpdateChangesetRequest &other);
    UpdateChangesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChangesetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
