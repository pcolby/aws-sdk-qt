// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIKEYSREQUEST_H
#define QTAWS_LISTAPIKEYSREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class ListApiKeysRequestPrivate;

class QTAWSAPPSYNC_EXPORT ListApiKeysRequest : public AppSyncRequest {

public:
    ListApiKeysRequest(const ListApiKeysRequest &other);
    ListApiKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApiKeysRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
