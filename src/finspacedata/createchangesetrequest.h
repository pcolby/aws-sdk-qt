// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETREQUEST_H
#define QTAWS_CREATECHANGESETREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateChangesetRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT CreateChangesetRequest : public FinspaceDataRequest {

public:
    CreateChangesetRequest(const CreateChangesetRequest &other);
    CreateChangesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChangesetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
