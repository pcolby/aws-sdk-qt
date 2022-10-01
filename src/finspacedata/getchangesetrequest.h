// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGESETREQUEST_H
#define QTAWS_GETCHANGESETREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetChangesetRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetChangesetRequest : public FinspaceDataRequest {

public:
    GetChangesetRequest(const GetChangesetRequest &other);
    GetChangesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangesetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
