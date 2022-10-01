// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILESREQUEST_H
#define QTAWS_LISTPROFILESREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListProfilesRequestPrivate;

class QTAWSTRANSFER_EXPORT ListProfilesRequest : public TransferRequest {

public:
    ListProfilesRequest(const ListProfilesRequest &other);
    ListProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfilesRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
