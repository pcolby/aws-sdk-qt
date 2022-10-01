// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGENTSREQUEST_H
#define QTAWS_LISTAGENTSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class ListAgentsRequestPrivate;

class QTAWSDATASYNC_EXPORT ListAgentsRequest : public DataSyncRequest {

public:
    ListAgentsRequest(const ListAgentsRequest &other);
    ListAgentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAgentsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
