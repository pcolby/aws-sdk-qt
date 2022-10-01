// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGEDBLOCKSREQUEST_H
#define QTAWS_LISTCHANGEDBLOCKSREQUEST_H

#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class ListChangedBlocksRequestPrivate;

class QTAWSEBS_EXPORT ListChangedBlocksRequest : public EbsRequest {

public:
    ListChangedBlocksRequest(const ListChangedBlocksRequest &other);
    ListChangedBlocksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangedBlocksRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
