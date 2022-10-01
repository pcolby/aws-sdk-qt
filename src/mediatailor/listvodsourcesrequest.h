// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVODSOURCESREQUEST_H
#define QTAWS_LISTVODSOURCESREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListVodSourcesRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT ListVodSourcesRequest : public MediaTailorRequest {

public:
    ListVodSourcesRequest(const ListVodSourcesRequest &other);
    ListVodSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVodSourcesRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
