// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETAGSREQUEST_H
#define QTAWS_LISTRESOURCETAGSREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ListResourceTagsRequestPrivate;

class QTAWSKMS_EXPORT ListResourceTagsRequest : public KmsRequest {

public:
    ListResourceTagsRequest(const ListResourceTagsRequest &other);
    ListResourceTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceTagsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
