// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLIVESOURCESREQUEST_H
#define QTAWS_LISTLIVESOURCESREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListLiveSourcesRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT ListLiveSourcesRequest : public MediaTailorRequest {

public:
    ListLiveSourcesRequest(const ListLiveSourcesRequest &other);
    ListLiveSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLiveSourcesRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
